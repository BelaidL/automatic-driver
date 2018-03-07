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
#include "sdy_application.h"
#include "sdy_simulation.h"

/*****************************************************************************
Parameters for simulation
*****************************************************************************/

@@SIMULATION_PARAMETERS@@

/*****************************************************************************
DLL entry point
*****************************************************************************/

#include <windows.h>

static void *pGlobalModuleHandle = NULL;

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

/*****************************************************************************
DLL functions for SDY simulation
*****************************************************************************/

typedef struct {
    sdy_application_t * display_context;
    sdy_simulation_t *simu_context;
} SimuContextType;

void *SimuCreateContext(void) 
{
    SimuContextType *lContext = (SimuContextType *)malloc(sizeof(SimuContextType));
    lContext->display_context =  Application_Allocate(&g_application_data, pGlobalModuleHandle);
    Application_Reset(lContext->display_context);
    lContext->simu_context = Simulation_Allocate(lContext->display_context, &g_simulation_parameters);
    return lContext;
}

void SimuDeleteContext(void *pContext)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    Simulation_Free(lContext->simu_context);
    Application_Free(lContext->display_context);
    free(lContext);
}

int SimuGetScreenWidth(void)
{
    return g_application_data.target_screen_width;
}

int SimuGetScreenHeight(void)
{
    return g_application_data.target_screen_height;
}

void *SimuCreateWindow(void *pContext, void *pParent)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    if (Application_CreateWindow(lContext->display_context, pParent)) {
        return Application_GetWindow(lContext->display_context);
    }
    else {
        return NULL;
    }
}

void *SimuCreateBuffer(void *pContext)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    return Application_CreateBuffer(lContext->display_context);
}

void SimuReset(void *pContext)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    Application_Reset(lContext->display_context);
}

void SimuCycle(void *pContext)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    Application_Draw(lContext->display_context);
}

int SimuSetValue(void *pContext, const char *pVariable, const wchar_t *pValue)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    return Simulation_SetVariableValue(lContext->simu_context, pVariable, pValue);
}

const char *SimuGetValue(void *pContext, const char *pVariable)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    return Simulation_GetVariableValue(lContext->simu_context, pVariable);
}

const char *SimuGetType(void *pContext, const char *pVariable)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    return Simulation_GetVariableType(lContext->simu_context, pVariable);
}

void SimuGetObs(void *pContext, const char *pKind, T_ENUM_STRING_CALLBACK pCallback)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    Simulation_GetObservables(lContext->simu_context, pKind, pCallback);
}

void SimuUseInteractiveEvents(void *pContext, int pFlag)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    Application_UseSystemEvents(lContext->display_context, pFlag!=0);
}


void SimuShowEventCursors(void *pContext, int pFlag)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    Application_ShowEventCursors(lContext->display_context, pFlag!=0);
}

int SimuTakeSnapshot(void *pContext, const char *pPath)
{
    SimuContextType *lContext = (SimuContextType *)pContext;
    return Application_TakeSnapshot(lContext->display_context, pPath);
}

int SimuHasEncounteredErrors(void)
{
    return has_errors;
}

