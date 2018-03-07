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

#include "fmi2Functions.h"

typedef struct {
    fmi2String instanceName;
    fmi2String GUID;
    const fmi2CallbackFunctions *functions;
    fmi2Boolean loggingOn;
    fmi2Real initTime;
    fmi2Real currentTime;
    fmi2Real nextTime;
    fmi2Real period;
    @@FMU_CONTEXT@@
} ModelInstance;


static fmi2Real getReal(ModelInstance *comp, fmi2ValueReference vr) {
  switch (vr) {
  @@FMU_GETREAL@@
  default: return 0;
  }
}

// called by fmi2GetInteger
static fmi2Integer getInteger(ModelInstance *comp, fmi2ValueReference vr) {
  switch (vr) {
  @@FMU_GETINTEGER@@
  default: return 0;
  }
}

// called by fmi2GetBoolean
static fmi2Boolean getBoolean(ModelInstance *comp, fmi2ValueReference vr) {
  switch (vr) {
  @@FMU_GETBOOLEAN@@
  default: return 0;
  }
}

// called by fmi2GetString
static fmi2String getString(ModelInstance *comp, fmi2ValueReference vr) {
  switch (vr) {
  @@FMU_GETSTRING@@
  default: return 0;
  }
}

// called by fmi2SetReal
static void setReal(ModelInstance *comp, fmi2ValueReference vr, fmi2Real value){
  switch (vr) {
  @@FMU_SETREAL@@
  default: break;
  }
}

// called by fmi2SetInteger
static void setInteger(ModelInstance *comp, fmi2ValueReference vr, fmi2Integer value){
  switch (vr) {
  @@FMU_SETINTEGER@@
  default: break;
  }
}

// called by fmi2SetBoolean
static void setBoolean(ModelInstance *comp, fmi2ValueReference vr, fmi2Boolean value){
  switch (vr) {
  @@FMU_SETBOOLEAN@@
  default: break;
  }
}

// called by fmi2SetString
static void setString(ModelInstance *comp, fmi2ValueReference vr, fmi2String value){
  switch (vr) {
  @@FMU_SETSTRING@@
  default: break;
  }
}

// called by fmi2Instantiate
static void instantiateModel(ModelInstance *comp) {
  @@FMU_INSTANTIATEMODEL@@
}

// called by fmi2EnterInitializationMode()
static void initialize(ModelInstance* comp) {
  @@FMU_INITIALIZE@@
}

// called by fmi2FreeInstance() 
static void freeModelInstance(ModelInstance* comp) {
    @@FMU_FREEMODELINSTANCE@@
}

// called by fmi2NewDiscreteStates() after setting eventInfo to defaults
// Used to set the next time event, if any. 
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo) {

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
    eventInfo->terminateSimulation  = fmi2True;
    eventInfo->nextEventTimeDefined = fmi2False;
  }
  else {
    // Set delay for next cycle
    eventInfo->nextEventTimeDefined = fmi2True;
    eventInfo->nextEventTime        = comp->nextTime;
  }
}


// ---------------------------------------------------------------------------
// Private helpers used below to validate function arguments
// ---------------------------------------------------------------------------

static fmi2Boolean invalidNumber(ModelInstance* comp, const char* f, const char* arg, int n, int nExpected){
    if (n != nExpected) {
        comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2Error, "error", "%s: Invalid argument %s = %d. Expected %d.", f, arg, n, nExpected);
        return fmi2True;
    }
    return fmi2False;
}

static fmi2Boolean nullPointer(ModelInstance* comp, const char* f, const char* arg, const void* p){
    if (!p) {
        comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2Error, "error", "%s: Invalid argument %s = NULL.", f, arg);
        return fmi2True;
    }
    return fmi2False;
}

static fmi2Boolean vrOutOfRange(ModelInstance* comp, const char* f, fmi2ValueReference vr, fmi2ValueReference end) {
    if (vr >= end) {
        comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2Error, "error", "%s: Illegal value reference %u.", f, vr);
        return fmi2True;
    }
    return fmi2False;
}

static fmi2Status unsupportedFunction(fmi2Component c, const char *fName) {
    ModelInstance *comp = (ModelInstance *)c;
    comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", fName);
    comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2Error, "error", "%s: Function not implemented.", fName);
    return fmi2Error;
}


// ---------------------------------------------------------------------------
// FMI functions: class methods not depending of a specific model instance
// ---------------------------------------------------------------------------

const char* fmi2GetVersion() {
    return fmi2Version;
}

const char* fmi2GetTypesPlatform() {
    return fmi2TypesPlatform;
}


// ---------------------------------------------------------------------------
// FMI functions: for FMI Model Exchange 2.0 and for FMI Co-Simulation 2.0
// logging control, setters and getters for Real, Integer, Boolean, String
// ---------------------------------------------------------------------------

fmi2Status fmi2SetDebugLogging(fmi2Component c, fmi2Boolean loggingOn, size_t nCategories, const fmi2String categories[]) {
    ModelInstance* comp = (ModelInstance *)c;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2SetDebugLogging: loggingOn=%d", loggingOn);
    comp->loggingOn = loggingOn;
    return fmi2OK;
}

fmi2Status fmi2SetReal(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2Real value[]){
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (nvr>0 && nullPointer(comp, "fmi2SetReal", "vr[]", vr))
         return fmi2Error;
    if (nvr>0 && nullPointer(comp, "fmi2SetReal", "value[]", value))
         return fmi2Error;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2SetReal: nvr = %d", nvr);
    // no check wether setting the value is allowed in the current state
    for (i=0; i<nvr; i++) {
       if (vrOutOfRange(comp, "fmi2SetReal", vr[i], NUMBER_OF_REALS))
           return fmi2Error;
       if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2SetReal: #r%d# = %.16g", vr[i], value[i]);
       setReal(comp, vr[i], value[i]);
    }
    return fmi2OK;
}

fmi2Status fmi2SetInteger(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2Integer value[]){
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (nvr>0 && nullPointer(comp, "fmi2SetInteger", "vr[]", vr))
         return fmi2Error;
    if (nvr>0 && nullPointer(comp, "fmi2SetInteger", "value[]", value))
         return fmi2Error;
    if (comp->loggingOn)
        comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2SetInteger: nvr = %d",  nvr);
    for (i=0; i<nvr; i++) {
       if (vrOutOfRange(comp, "fmi2SetInteger", vr[i], NUMBER_OF_INTEGERS))
           return fmi2Error;
       if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2SetInteger: #i%d# = %d", vr[i], value[i]);
        setInteger(comp, vr[i], value[i]);
    }
    return fmi2OK;
}

fmi2Status fmi2SetBoolean(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2Boolean value[]){
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (nvr>0 && nullPointer(comp, "fmi2SetBoolean", "vr[]", vr))
         return fmi2Error;
    if (nvr>0 && nullPointer(comp, "fmi2SetBoolean", "value[]", value))
         return fmi2Error;
    if (comp->loggingOn)
        comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2SetBoolean: nvr = %d",  nvr);
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmi2SetBoolean", vr[i], NUMBER_OF_BOOLEANS))
            return fmi2Error;
       if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2SetBoolean: #b%d# = %s", vr[i], value[i] ? "true" : "false");
        setBoolean(comp, vr[i], value[i]);
    }
    return fmi2OK;
}

fmi2Status fmi2SetString(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, const fmi2String value[]){
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (nvr>0 && nullPointer(comp, "fmi2SetString", "vr[]", vr))
         return fmi2Error;
    if (nvr>0 && nullPointer(comp, "fmi2SetString", "value[]", value))
         return fmi2Error;
    if (comp->loggingOn)
        comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2SetString: nvr = %d",  nvr);
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmi2SetString", vr[i], NUMBER_OF_STRINGS))
            return fmi2Error;
        if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2SetString: #s%d# = '%s'", vr[i], value[i]);
        if (nullPointer(comp, "fmi2SetString", "value[i]", value[i]))
            return fmi2Error;
        setString(comp, vr[i], value[i]);
    }
    return fmi2OK;
}

fmi2Status fmi2GetReal(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2Real value[]) {
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (nvr>0 && nullPointer(comp, "fmi2GetReal", "vr[]", vr))
         return fmi2Error;
    if (nvr>0 && nullPointer(comp, "fmi2GetReal", "value[]", value))
         return fmi2Error;
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmi2GetReal", vr[i], NUMBER_OF_REALS)) 
            return fmi2Error;
        value[i] = getReal(comp, vr[i]);
        if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2GetReal: #r%u# = %.16g", vr[i], value[i]);
    }
    return fmi2OK;
}

fmi2Status fmi2GetInteger(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2Integer value[]) {
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (nvr>0 && nullPointer(comp, "fmi2GetInteger", "vr[]", vr))
         return fmi2Error;
    if (nvr>0 && nullPointer(comp, "fmi2GetInteger", "value[]", value))
         return fmi2Error;
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmi2GetInteger", vr[i], NUMBER_OF_INTEGERS))
           return fmi2Error;
        value[i] = getInteger(comp, vr[i]);
        if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2GetInteger: #i%u# = %d", vr[i], value[i]);
    }
    return fmi2OK;
}

fmi2Status fmi2GetBoolean(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2Boolean value[]) {
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (nvr>0 && nullPointer(comp, "fmi2GetBoolean", "vr[]", vr))
         return fmi2Error;
    if (nvr>0 && nullPointer(comp, "fmi2GetBoolean", "value[]", value))
         return fmi2Error;
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmi2GetBoolean", vr[i], NUMBER_OF_BOOLEANS))
           return fmi2Error;
        value[i] = getBoolean(comp, vr[i]);
        if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2GetBoolean: #b%u# = %s", vr[i], value[i]? "true" : "false");
    }
    return fmi2OK;
}

fmi2Status fmi2GetString(fmi2Component c, const fmi2ValueReference vr[], size_t nvr, fmi2String  value[]) {
    int i;
    ModelInstance* comp = (ModelInstance *)c;
    if (nvr>0 && nullPointer(comp, "fmi2GetString", "vr[]", vr))
         return fmi2Error;
    if (nvr>0 && nullPointer(comp, "fmi2GetString", "value[]", value))
         return fmi2Error;
    for (i=0; i<nvr; i++) {
        if (vrOutOfRange(comp, "fmi2GetString", vr[i], NUMBER_OF_STRINGS))
           return fmi2Error;
        value[i] = getString(comp, vr[i]);
        if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
                fmi2OK, "log", "fmi2GetString: #s%u# = '%s'", vr[i], value[i]);
    }
    return fmi2OK;
}

fmi2Status fmi2GetFMUstate (fmi2Component c, fmi2FMUstate* FMUstate) {
    return unsupportedFunction(c, "fmi2GetFMUstate");
}
fmi2Status fmi2SetFMUstate (fmi2Component c, fmi2FMUstate FMUstate) {
    return unsupportedFunction(c, "fmi2SetFMUstate");
}
fmi2Status fmi2FreeFMUstate(fmi2Component c, fmi2FMUstate* FMUstate) {
    return unsupportedFunction(c, "fmi2FreeFMUstate");
}
fmi2Status fmi2SerializedFMUstateSize(fmi2Component c, fmi2FMUstate FMUstate, size_t *size) {
    return unsupportedFunction(c, "fmi2SerializedFMUstateSize");
}
fmi2Status fmi2SerializeFMUstate (fmi2Component c, fmi2FMUstate FMUstate, fmi2Byte serializedState[], size_t size) {
    return unsupportedFunction(c, "fmi2SerializeFMUstate");
}
fmi2Status fmi2DeSerializeFMUstate (fmi2Component c, const fmi2Byte serializedState[], size_t size,
                                    fmi2FMUstate* FMUstate) {
    return unsupportedFunction(c, "fmi2DeSerializeFMUstate");
}

fmi2Status fmi2GetDirectionalDerivative(fmi2Component c, const fmi2ValueReference vUnknown_ref[], size_t nUnknown,
                                        const fmi2ValueReference vKnown_ref[] , size_t nKnown,
                                        const fmi2Real dvKnown[], fmi2Real dvUnknown[]) {
    return fmi2OK;
}


// ---------------------------------------------------------------------------
// FMI functions
// ---------------------------------------------------------------------------

fmi2Component fmi2Instantiate(fmi2String instanceName, fmi2Type fmuType, fmi2String GUID,
                            fmi2String fmuResourceLocation, const fmi2CallbackFunctions *functions,
                            fmi2Boolean visible, fmi2Boolean loggingOn) {
    ModelInstance* comp;
    if (!functions->logger) 
        return NULL;
    if (!functions->allocateMemory || !functions->freeMemory){ 
        functions->logger(NULL, instanceName,
                fmi2Error, "error", "%s: Missing callback function.", "fmi2Instantiate");
        return NULL;
    }
    if (!instanceName || strlen(instanceName)==0) { 
        functions->logger(NULL, instanceName,
                fmi2Error, "error", "%s: Missing instance name.", "fmi2Instantiate");
        return NULL;
    }
    if (strcmp(GUID, MODEL_GUID)) {
        functions->logger(NULL, instanceName,
                fmi2Error, "error", "%s: Wrong GUID %s. Expected %s.", "fmi2Instantiate", GUID, MODEL_GUID);
        return NULL;
    }
    comp = (ModelInstance *)functions->allocateMemory(1, sizeof(ModelInstance));
    if (comp) {
        comp->instanceName = (fmi2String)functions->allocateMemory(strlen(instanceName)+1, sizeof(char));
        strcpy((char*)comp->instanceName, instanceName);
        comp->GUID = (fmi2String)functions->allocateMemory(strlen(GUID)+1, sizeof(char));
        strcpy((char*)comp->GUID, GUID);
        comp->functions = functions;
        comp->loggingOn = loggingOn;
        comp->initTime = 0;
        comp->currentTime = 0;
        comp->nextTime;
        comp->period = TASK_PERIOD;
        instantiateModel(comp);
    }
    if (!comp) {
        functions->logger(NULL, instanceName,
                fmi2Error, "error", "%s: Out of memory.", "fmi2Instantiate");
        return NULL;
    }
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "%s: GUID=%s", "fmi2Instantiate", GUID);
    return comp;
}

fmi2Status fmi2SetupExperiment(fmi2Component c, fmi2Boolean toleranceDefined, fmi2Real tolerance,
                            fmi2Real startTime, fmi2Boolean stopTimeDefined, fmi2Real stopTime) {
    ModelInstance* comp = (ModelInstance *)c;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "%s: toleranceControlled=%d relativeTolerance=%g",
            "fmi2SetupExperiment", toleranceDefined, tolerance);
    comp->initTime = startTime;
    comp->nextTime = startTime;
    return fmi2OK;
}

fmi2Status fmi2EnterInitializationMode(fmi2Component c) {
    ModelInstance* comp = (ModelInstance *)c;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "fmi2EnterInitializationMode");
    initialize(comp);
    return fmi2OK;
}

fmi2Status fmi2ExitInitializationMode(fmi2Component c) {
    ModelInstance* comp = (ModelInstance *)c;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "fmi2ExitInitializationMode");
    return fmi2OK;
}

fmi2Status fmi2Terminate(fmi2Component c){
    ModelInstance* comp = (ModelInstance *)c;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "fmi2Terminate");
    return fmi2OK;
}

fmi2Status fmi2Reset(fmi2Component c){
    ModelInstance* comp = (ModelInstance *)c;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "fmi2Reset");
    return fmi2OK;
}

void fmi2FreeInstance(fmi2Component c) {
    ModelInstance* comp = (ModelInstance *)c;
    if (!comp) return;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "fmi2FreeInstance");
    freeModelInstance(comp);
    comp->functions->freeMemory((char*)comp->instanceName);
    comp->functions->freeMemory((char*)comp->GUID);
    comp->functions->freeMemory(comp);
}


// ---------------------------------------------------------------------------
// FMI functions: only for Model Exchange 2.0
// ---------------------------------------------------------------------------

fmi2Status fmi2EnterEventMode(fmi2Component c) {
    ModelInstance *comp = (ModelInstance *)c;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "fmi2EnterEventMode");
    return fmi2OK;
}

fmi2Status fmi2NewDiscreteStates(fmi2Component c, fmi2EventInfo* eventInfo) {
    ModelInstance* comp = (ModelInstance *)c;
    if (nullPointer(comp, "fmi2EventUpdate", "eventInfo", eventInfo))
         return fmi2Error;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "fmi2NewDiscreteStates");
    eventInfo->newDiscreteStatesNeeded = fmi2False;
    eventInfo->nominalsOfContinuousStatesChanged = fmi2False;
    eventInfo->valuesOfContinuousStatesChanged = fmi2False;
    eventInfo->terminateSimulation = fmi2False;
    eventInfo->nextEventTimeDefined = fmi2False;
    eventUpdate(comp, eventInfo);
    return fmi2OK;
}

fmi2Status fmi2EnterContinuousTimeMode(fmi2Component c) {
    ModelInstance *comp = (ModelInstance *)c;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "fmi2EnterContinuousTimeMode");
    return fmi2OK;
}

fmi2Status fmi2CompletedIntegratorStep(fmi2Component c, fmi2Boolean noSetFMUStatePriorToCurrentPoint,
                                     fmi2Boolean *enterEventMode, fmi2Boolean *terminateSimulation){
    ModelInstance* comp = (ModelInstance *)c;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "fmi2CompletedIntegratorStep");
    *enterEventMode = fmi2False;
    *terminateSimulation = fmi2False;
    return fmi2OK;
}

fmi2Status fmi2SetTime(fmi2Component c, fmi2Real time) {
    ModelInstance* comp = (ModelInstance *)c;
    if (comp->loggingOn) comp->functions->logger(comp->functions->componentEnvironment, comp->instanceName,
            fmi2OK, "log", "fmi2SetTime: time=%.16g", time);
    comp->currentTime = time;
    return fmi2OK;
}

fmi2Status fmi2SetContinuousStates(fmi2Component c, const fmi2Real x[], size_t nx){
    return fmi2OK;
}

fmi2Status fmi2GetContinuousStates(fmi2Component c, fmi2Real states[], size_t nx){
    return fmi2OK;
}

fmi2Status fmi2GetNominalsOfContinuousStates(fmi2Component c, fmi2Real x_nominal[], size_t nx){
    return fmi2OK;
}

fmi2Status fmi2GetDerivatives(fmi2Component c, fmi2Real derivatives[], size_t nx) {
    return fmi2OK;
}

fmi2Status fmi2GetEventIndicators(fmi2Component c, fmi2Real eventIndicators[], size_t ni) {
    return fmi2OK;
}
