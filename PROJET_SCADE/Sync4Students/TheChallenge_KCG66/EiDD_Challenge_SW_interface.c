#include "EiDD_Challenge_SW_interface.h"
#include "EiDD_Challenge_SW_type.h"
#include "EiDD_Challenge_SW_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "5301182c2336bb99c0f76d8ef17221a4";
const char* _SCSIM_SmuTypesCheckSum = "70167ab69f4117fa3043a69f71c5aa42";

/* context */

inC_TheChallenge inputs_ctx;
static inC_TheChallenge inputs_ctx_restore;
static inC_TheChallenge inputs_ctx_execute;
outC_TheChallenge outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    kcg_copy_phaseTy(&inputs_ctx.InitialPhase, &inputs_ctx_restore.InitialPhase);
    inputs_ctx.top = inputs_ctx_restore.top;
    inputs_ctx.mapid = inputs_ctx_restore.mapid;
    inputs_ctx.itiid = inputs_ctx_restore.itiid;
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    kcg_copy_phaseTy(&inputs_ctx_execute.InitialPhase, &inputs_ctx.InitialPhase);
    inputs_ctx_execute.top = inputs_ctx.top;
    inputs_ctx_execute.mapid = inputs_ctx.mapid;
    inputs_ctx_execute.itiid = inputs_ctx.itiid;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    TheChallenge_init(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    TheChallenge_reset(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_TheChallengeCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_TheChallengeCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_TheChallengeCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_TheChallengeCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_TheChallengeCIVTable != NULL && 
        pSimoutC_TheChallengeCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_TheChallengeCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    TheChallenge(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_TheChallenge);
    nSize += sizeof(outC_TheChallenge);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_TheChallenge));
    pCurrent += sizeof(inC_TheChallenge);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_TheChallenge));
    pCurrent += sizeof(outC_TheChallenge);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_TheChallenge));
    pCurrent += sizeof(inC_TheChallenge);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_TheChallenge));
    pCurrent += sizeof(outC_TheChallenge);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

