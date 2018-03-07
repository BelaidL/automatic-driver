/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */
#ifndef _Sounds_H_
#define _Sounds_H_

#include "kcg_types.h"
#include "EventEdge_Utilities.h"
#include "SoundEffects.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SoundEffects /* _=(SoundEffects#1)/ */ Context_SoundEffects_1;
  outC_EventEdge_Utilities /* _L2=(Utilities::EventEdge#1)/ */ Context_EventEdge_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:else: */ else_clock_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else: */ else_clock_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:else:else:else:_L1/ */ _L1_else_else_else_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:else:else:then:_L3/ */ _L3_then_else_else_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:then:_L3/ */ _L3_then_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  eventTy /* eve/ */ eve;
  kcg_int32 /* wav/ */ wav;
  eventTy /* _L1/ */ _L1;
  eventTy /* _L2/ */ _L2;
  kcg_int32 /* _L4/ */ _L4;
} outC_Sounds;

/* ===========  node initialization and cycle functions  =========== */
/* Sounds/ */
extern void Sounds(
  /* events/ */
  eventTy *events,
  /* status/ */
  statusTy status,
  outC_Sounds *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Sounds_reset(outC_Sounds *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Sounds_init(outC_Sounds *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Sounds_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Sounds.h
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

