/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */
#ifndef _EventEdge_Utilities_H_
#define _EventEdge_Utilities_H_

#include "kcg_types.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  eventTy /* eventE/ */ eventE;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* _L13=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  outC_RisingEdge_digital /* _L14=(digital::RisingEdge#2)/ */ Context_RisingEdge_2;
  outC_RisingEdge_digital /* _L15=(digital::RisingEdge#3)/ */ Context_RisingEdge_3;
  outC_RisingEdge_digital /* _L16=(digital::RisingEdge#4)/ */ Context_RisingEdge_4;
  outC_RisingEdge_digital /* _L17=(digital::RisingEdge#5)/ */ Context_RisingEdge_5;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  eventTy /* _L1/ */ _L1;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  eventTy /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
} outC_EventEdge_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::EventEdge/ */
extern void EventEdge_Utilities(
  /* event/ */
  eventTy *event,
  outC_EventEdge_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EventEdge_reset_Utilities(outC_EventEdge_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EventEdge_init_Utilities(outC_EventEdge_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EventEdge_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EventEdge_Utilities.h
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

