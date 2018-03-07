/* ============================================================================
   (C) 2016 ESTEREL TECHNOLOGIES SAS.  ALL RIGHTS RESERVED
    This source file may be used and distributed without restriction provided 
	that this copyright statement is not removed from the file and that any 
	derivative work contains this copyright notice.
 
   Warranty
   ESTEREL TECHNOLOGIES SAS makes no warranty of any kind with regard to the
   use of this Software, either expressed or implied, including, but not 
   limited to the fitness for a particular purpose.
 =========================================================================== */
 
#include <stddef.h>
#include "sgl_types.h"
#include "sglConstants.h"
#include "sdy_events.h"

/*****************************************************************************
Parameters for Windows simulation
*****************************************************************************/

#ifdef _WIN32

#include "sdy_application.h"

@@SIMULATION_PARAMETERS@@

#include <windows.h>

static void *pGlobalModuleHandle = NULL;

/* DLL entry point */
BOOL APIENTRY DllMain(HANDLE hModule, 
                      DWORD  ul_reason_for_call, 
                      LPVOID lpReserved)
{
    switch (ul_reason_for_call) {

case DLL_PROCESS_ATTACH:
    pGlobalModuleHandle = hModule;
    break;
case DLL_PROCESS_DETACH:
    break;
case DLL_THREAD_ATTACH:
    break;
case DLL_THREAD_DETACH:
    break;
    }
    return TRUE;
}

#endif /* _WIN32 */

/*****************************************************************************
Parameters for FMU
*****************************************************************************/

#include <stdio.h>
#include <string.h>

@@FMU_DECLS@@

#include "fmiModelFunctions.h"

typedef enum {
    modelInstantiated = 1<<0,
    modelInitialized  = 1<<1,
    modelTerminated   = 1<<2,
    modelError        = 1<<3
} ModelState;

#define not_modelError (modelInstantiated|modelInitialized|modelTerminated)

typedef struct {
    fmiString instanceName;
    fmiString GUID;
    fmiCallbackFunctions functions;
    fmiBoolean loggingOn;
    ModelState state;
    fmiReal initTime;
    fmiReal currentTime;
    fmiReal nextTime;
    fmiReal period;
    @@FMU_CONTEXT@@
} ModelInstance;


static fmiReal getReal(ModelInstance *comp, fmiValueReference vr) {
  switch (vr) {
  @@FMU_GETREAL@@
  default: return 0;
  }
}

// called by fmiGetInteger
static fmiInteger getInteger(ModelInstance *comp, fmiValueReference vr) {
  switch (vr) {
  @@FMU_GETINTEGER@@
  default: return 0;
  }
}

// called by fmiGetBoolean
static fmiBoolean getBoolean(ModelInstance *comp, fmiValueReference vr) {
  switch (vr) {
  @@FMU_GETBOOLEAN@@
  default: return 0;
  }
}

// called by fmiGetString
static fmiString getString(ModelInstance *comp, fmiValueReference vr) {
  switch (vr) {
  @@FMU_GETSTRING@@
  default: return 0;
  }
}

// called by fmiSetReal
static void setReal(ModelInstance *comp, fmiValueReference vr, fmiReal value){
  switch (vr) {
  @@FMU_SETREAL@@
  default: break;
  }
}

// called by fmiSetInteger
static void setInteger(ModelInstance *comp, fmiValueReference vr, fmiInteger value){
  switch (vr) {
  @@FMU_SETINTEGER@@
  default: break;
  }
}

// called by fmiSetBoolean
static void setBoolean(ModelInstance *comp, fmiValueReference vr, fmiBoolean value){
  switch (vr) {
  @@FMU_SETBOOLEAN@@
  default: break;
  }
}

// called by fmiSetString
static void setString(ModelInstance *comp, fmiValueReference vr, fmiString value){
  switch (vr) {
  @@FMU_SETSTRING@@
  default: break;
  }
}

// called by fmiInstantiateModel
static void instantiateModel(ModelInstance *comp) {
  @@FMU_INSTANTIATEMODEL@@
}

// called by fmiInitialize()
static void initialize(ModelInstance* comp, fmiEventInfo* eventInfo) {
  @@FMU_INITIALIZE@@
}

// called by fmiTerminate()
static void terminate(ModelInstance* comp) {
}

// called by fmiFreeModelInstance() 
static void freeModelInstance(ModelInstance* comp) {
    @@FMU_FREEMODELINSTANCE@@
}

// called by fmiEventUpdate() after setting eventInfo to defaults
// Used to set the next time event, if any. 
void eventUpdate(ModelInstance* comp, fmiEventInfo* eventInfo) {

  int cancelled = 0;
  
  // check period first
  if (comp->period < 1e-8) {
    comp->period = TASK_PERIOD;
  }
  
  // Perform initialization at beginning
  if ((comp->currentTime - comp->initTime) < 1e-8) {
    @@FMU_FIRSTEVENTUPDATE@@
    comp->nextTime = comp->currentTime + comp->period;
  } 
  else if (comp->nextTime <= comp->currentTime) {
    @@FMU_EVENTUPDATE@@
    comp->nextTime = comp->nextTime + comp->period;
  }

  if (cancelled) {
    eventInfo->terminateSimulation = fmiTrue;
    eventInfo->upcomingTimeEvent   = fmiFalse;
  }
  else {
    // Set delay for next cycle
    eventInfo->upcomingTimeEvent   = fmiTrue;
    eventInfo->nextEventTime       = comp->nextTime;
  }
}


// ---------------------------------------------------------------------------
// Private helpers used below to validate function arguments
// ---------------------------------------------------------------------------

static fmiBoolean invalidNumber(ModelInstance* comp, const char* f, const char* arg, int n, int nExpected){
    if (n != nExpected) {
        comp->state = modelError;
        comp->functions.logger(comp, comp->instanceName, fmiError, "error", 
                "%s: Invalid argument %s = %d. Expected %d.", f, arg, n, nExpected);
        return fmiTrue;
    }
    return fmiFalse;
}

static fmiBoolean invalidState(ModelInstance* comp, const char* f, int statesExpected){
    if (!comp) 
        return fmiTrue;
    if (!(comp->state & statesExpected)) {
        comp->state = modelError;
        comp->functions.logger(comp, comp->instanceName, fmiError, "error", 
                "%s: Illegal call sequence.", f);
        return fmiTrue;
    }
    return fmiFalse;
}

static fmiBoolean nullPointer(ModelInstance* comp, const char* f, const char* arg, const void* p){
    if (!p) {
        comp->state = modelError;
        comp->functions.logger(comp, comp->instanceName, fmiError, "error", 
                "%s: Invalid argument %s = NULL.", f, arg);
        return fmiTrue;
    }
    return fmiFalse;
}

static fmiBoolean vrOutOfRange(ModelInstance* comp, const char* f, fmiValueReference vr, fmiValueReference end) {
    if (vr >= end) {
        comp->functions.logger(comp, comp->instanceName, fmiError, "error",
                "%s: Illegal value reference %u.", f, vr);
        comp->state = fmiError;
        return fmiTrue;
    }
    return fmiFalse;
}  


// ---------------------------------------------------------------------------
// FMI functions: class methods not depending of a specific model instance
// ---------------------------------------------------------------------------

const char* fmiGetVersion() {
    return fmiVersion;
}

// ---------------------------------------------------------------------------
// FMI functions: for FMI Model Exchange 1.0 and for FMI Co-Simulation 1.0
// logging control, setters and getters for Real, Integer, Boolean, String
// ---------------------------------------------------------------------------

fmiStatus fmiSetDebugLogging(fmiComponent c, fmiBoolean loggingOn) {
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiSetDebugLogging", not_modelError))
         return fmiError;
    if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
            "fmiSetDebugLogging: loggingOn=%d", loggingOn);
    comp->loggingOn = loggingOn;
    return fmiOK;
}

fmiStatus fmiSetReal(fmiComponent c, const fmiValueReference vr[], size_t nvr, const fmiReal value[]){
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiSetReal", modelInstantiated|modelInitialized))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiSetReal", "vr[]", vr))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiSetReal", "value[]", value))
         return fmiError;
    if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
            "fmiSetReal: nvr = %d", nvr);
    // no check wether setting the value is allowed in the current state
    for (i=0; i<nvr; i++) {
       if (vrOutOfRange(comp, "fmiSetReal", vr[i], NUMBER_OF_REALS))
           return fmiError;
       if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
            "fmiSetReal: #r%d# = %.16g", vr[i], value[i]);
       setReal(comp, vr[i], value[i]);
    }
    return fmiOK;
}

fmiStatus fmiSetInteger(fmiComponent c, const fmiValueReference vr[], size_t nvr, const fmiInteger value[]){
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiSetInteger", modelInstantiated|modelInitialized))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiSetInteger", "vr[]", vr))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiSetInteger", "value[]", value))
         return fmiError;
    if (comp->loggingOn)
        comp->functions.logger(c, comp->instanceName, fmiOK, "log", "fmiSetInteger: nvr = %d",  nvr);
    for (i=0; i<nvr; i++) {
       if (vrOutOfRange(comp, "fmiSetInteger", vr[i], NUMBER_OF_INTEGERS))
           return fmiError;
       if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
            "fmiSetInteger: #i%d# = %d", vr[i], value[i]);
        setInteger(comp, vr[i], value[i]);
    }
    return fmiOK;
}

fmiStatus fmiSetBoolean(fmiComponent c, const fmiValueReference vr[], size_t nvr, const fmiBoolean value[]){
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiSetBoolean", modelInstantiated|modelInitialized))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiSetBoolean", "vr[]", vr))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiSetBoolean", "value[]", value))
         return fmiError;
    if (comp->loggingOn)
        comp->functions.logger(c, comp->instanceName, fmiOK, "log", "fmiSetBoolean: nvr = %d",  nvr);
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmiSetBoolean", vr[i], NUMBER_OF_BOOLEANS))
            return fmiError;
       if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
            "fmiSetBoolean: #b%d# = %s", vr[i], value[i] ? "true" : "false");
        setBoolean(comp, vr[i], value[i]);
    }
    return fmiOK;
}

fmiStatus fmiSetString(fmiComponent c, const fmiValueReference vr[], size_t nvr, const fmiString value[]){
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiSetString", modelInstantiated|modelInitialized))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiSetString", "vr[]", vr))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiSetString", "value[]", value))
         return fmiError;
    if (comp->loggingOn)
        comp->functions.logger(c, comp->instanceName, fmiOK, "log", "fmiSetString: nvr = %d",  nvr);
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmiSetString", vr[i], NUMBER_OF_STRINGS))
            return fmiError;
        if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
            "fmiSetString: #s%d# = '%s'", vr[i], value[i]);
        if (nullPointer(comp, "fmiSetString", "value[i]", value[i]))
            return fmiError;
        setString(comp, vr[i], value[i]);
    }
    return fmiOK;
}

fmiStatus fmiGetReal(fmiComponent c, const fmiValueReference vr[], size_t nvr, fmiReal value[]) {
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiGetReal", not_modelError))
        return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiGetReal", "vr[]", vr))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiGetReal", "value[]", value))
         return fmiError;
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmiGetReal", vr[i], NUMBER_OF_REALS)) 
            return fmiError;
        value[i] = getReal(comp, vr[i]);
        if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
                "fmiGetReal: #r%u# = %.16g", vr[i], value[i]);
    }
    return fmiOK;
}

fmiStatus fmiGetInteger(fmiComponent c, const fmiValueReference vr[], size_t nvr, fmiInteger value[]) {
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiGetInteger", not_modelError))
        return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiGetInteger", "vr[]", vr))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiGetInteger", "value[]", value))
         return fmiError;
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmiGetInteger", vr[i], NUMBER_OF_INTEGERS))
           return fmiError;
        value[i] = getInteger(comp, vr[i]);
        if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
                "fmiGetInteger: #i%u# = %d", vr[i], value[i]);
    }
    return fmiOK;
}

fmiStatus fmiGetBoolean(fmiComponent c, const fmiValueReference vr[], size_t nvr, fmiBoolean value[]) {
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiGetBoolean", not_modelError))
        return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiGetBoolean", "vr[]", vr))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiGetBoolean", "value[]", value))
         return fmiError;
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmiGetBoolean", vr[i], NUMBER_OF_BOOLEANS))
           return fmiError;
        value[i] = getBoolean(comp, vr[i]);
        if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
                "fmiGetBoolean: #b%u# = %s", vr[i], value[i]? "true" : "false");
    }
    return fmiOK;
}

fmiStatus fmiGetString(fmiComponent c, const fmiValueReference vr[], size_t nvr, fmiString  value[]) {
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiGetString", not_modelError))
        return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiGetString", "vr[]", vr))
         return fmiError;
    if (nvr>0 && nullPointer(comp, "fmiGetString", "value[]", value))
         return fmiError;
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmiGetString", vr[i], NUMBER_OF_STRINGS))
           return fmiError;
        value[i] = getString(comp, vr[i]);
        if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
                "fmiGetString: #s%u# = '%s'", vr[i], value[i]);
    }
    return fmiOK;
}

// ---------------------------------------------------------------------------
// FMI functions: only for Model Exchange 1.0
// ---------------------------------------------------------------------------

const char* fmiGetModelTypesPlatform() {
    return fmiModelTypesPlatform;
}

fmiComponent fmiInstantiateModel(fmiString instanceName, fmiString GUID, 
        fmiCallbackFunctions functions, fmiBoolean loggingOn) {
    ModelInstance* comp;
    if (!functions.logger) 
        return NULL;
    if (!functions.allocateMemory || !functions.freeMemory){ 
        functions.logger(NULL, instanceName, fmiError, "error", 
                "%s: Missing callback function.", "fmiInstantiateModel");
        return NULL;
    }
    if (!instanceName || strlen(instanceName)==0) { 
        functions.logger(NULL, instanceName, fmiError, "error", 
                "%s: Missing instance name.", "fmiInstantiateModel");
        return NULL;
    }
    if (strcmp(GUID, MODEL_GUID)) {
        functions.logger(NULL, instanceName, fmiError, "error", 
                "%s: Wrong GUID %s. Expected %s.", "fmiInstantiateModel", GUID, MODEL_GUID);
        return NULL;
    }
    comp = (ModelInstance *)functions.allocateMemory(1, sizeof(ModelInstance));
    if (comp) {
        comp->instanceName = (fmiString)functions.allocateMemory(strlen(instanceName)+1, sizeof(char));
        strcpy((char*)comp->instanceName, instanceName);
        comp->GUID = (fmiString)functions.allocateMemory(strlen(GUID)+1, sizeof(char));
        strcpy((char*)comp->GUID, GUID);
        comp->functions = functions;
        comp->loggingOn = loggingOn;
        comp->state = modelInstantiated;
        comp->initTime = 0;
        comp->currentTime = 0;
        comp->nextTime;
        comp->period = TASK_PERIOD;
        instantiateModel(comp);
    }
    if (!comp) {
        functions.logger(NULL, instanceName, fmiError, "error", 
                "%s: Out of memory.", "fmiInstantiateModel");
        return NULL;
    }
    if (comp->loggingOn) comp->functions.logger(NULL, comp->instanceName, fmiOK, "log", 
            "%s: GUID=%s", "fmiInstantiateModel", GUID);
    return comp;
}

fmiStatus fmiInitialize(fmiComponent c, fmiBoolean toleranceControlled, fmiReal relativeTolerance,
    fmiEventInfo* eventInfo) {
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiInitialize", modelInstantiated))
         return fmiError;
    if (nullPointer(comp, "fmiInitialize", "eventInfo", eventInfo))
         return fmiError;
    if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
        "%s: toleranceControlled=%d relativeTolerance=%g", 
        "fmiInitialize", toleranceControlled, relativeTolerance);
    eventInfo->iterationConverged  = fmiTrue;
    eventInfo->stateValueReferencesChanged = fmiFalse;
    eventInfo->stateValuesChanged  = fmiFalse;
    eventInfo->terminateSimulation = fmiFalse;
    eventInfo->upcomingTimeEvent   = fmiTrue;
    eventInfo->nextEventTime = comp->currentTime;
    comp->initTime = comp->currentTime;
    comp->nextTime = comp->currentTime;
    initialize(comp, eventInfo);
    comp->state = modelInitialized;
    return fmiOK;
}

fmiStatus fmiSetTime(fmiComponent c, fmiReal time) {
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiSetTime", modelInstantiated|modelInitialized))
         return fmiError;
    if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
            "fmiSetTime: time=%.16g", time);
    comp->currentTime = time;
    return fmiOK;
}

fmiStatus fmiEventUpdate(fmiComponent c, fmiBoolean intermediateResults, fmiEventInfo* eventInfo) {
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiEventUpdate", modelInitialized))
        return fmiError;
    if (nullPointer(comp, "fmiEventUpdate", "eventInfo", eventInfo))
         return fmiError;
    if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
        "fmiEventUpdate: intermediateResults = %d", intermediateResults);
    eventInfo->iterationConverged  = fmiTrue;
    eventInfo->stateValueReferencesChanged = fmiFalse;
    eventInfo->stateValuesChanged  = fmiFalse;
    eventInfo->terminateSimulation = fmiFalse;
    eventInfo->upcomingTimeEvent   = fmiFalse;
    eventUpdate(comp, eventInfo);
    return fmiOK;
}

fmiStatus fmiCompletedIntegratorStep(fmiComponent c, fmiBoolean* callEventUpdate){
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiCompletedIntegratorStep", modelInitialized))
         return fmiError;
    if (nullPointer(comp, "fmiCompletedIntegratorStep", "callEventUpdate", callEventUpdate))
         return fmiError;
    if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", 
            "fmiCompletedIntegratorStep");
    *callEventUpdate = fmiFalse;
    return fmiOK;
}

fmiStatus fmiGetStateValueReferences(fmiComponent c, fmiValueReference vrx[], size_t nx){
    return fmiOK;
}

fmiStatus fmiSetContinuousStates(fmiComponent c, const fmiReal x[], size_t nx){
    return fmiOK;
}

fmiStatus fmiGetContinuousStates(fmiComponent c, fmiReal states[], size_t nx){
    return fmiOK;
}

fmiStatus fmiGetNominalContinuousStates(fmiComponent c, fmiReal x_nominal[], size_t nx){
    return fmiOK;
}

fmiStatus fmiGetDerivatives(fmiComponent c, fmiReal derivatives[], size_t nx) {
    return fmiOK;
}

fmiStatus fmiGetEventIndicators(fmiComponent c, fmiReal eventIndicators[], size_t ni) {
    return fmiOK;
}

fmiStatus fmiTerminate(fmiComponent c){
    ModelInstance* comp = (ModelInstance *)c;
    if (invalidState(comp, "fmiTerminate", modelInitialized))
         return fmiError;
    if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", "fmiTerminate");
    terminate(comp);
    comp->state = modelTerminated;
    return fmiOK;
}

void fmiFreeModelInstance(fmiComponent c) {
    ModelInstance* comp = (ModelInstance *)c;
    if (!comp) return;
    if (comp->loggingOn) comp->functions.logger(c, comp->instanceName, fmiOK, "log", "fmiFreeModelInstance");
    freeModelInstance(comp);
    comp->functions.freeMemory((char*)comp->instanceName);
    comp->functions.freeMemory((char*)comp->GUID);
    comp->functions.freeMemory(comp);
}


