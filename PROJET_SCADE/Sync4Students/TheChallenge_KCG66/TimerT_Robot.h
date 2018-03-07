/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _TimerT_Robot_H_
#define _TimerT_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* endOfTurn/ */ endOfTurn;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float64 /* _L22/ */ _L22;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1;
  actionTy_Robot /* _L16/ */ _L16;
  kcg_float64 /* _L32/ */ _L32;
  kcg_float64 /* _L31/ */ _L31;
  kcg_float64 /* _L30/ */ _L30;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L26/ */ _L26;
  actionTy_Robot /* _L24/ */ _L24;
  kcg_float64 /* _L23/ */ _L23;
  kcg_float64 /* _L21/ */ _L21;
  kcg_float64 /* _L20/ */ _L20;
  kcg_float64 /* _L19/ */ _L19;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
} outC_TimerT_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::TimerT/ */
extern void TimerT_Robot(
  /* nbrtick/ */
  kcg_float64 nbrtick,
  /* isTurn/ */
  actionTy_Robot isTurn,
  outC_TimerT_Robot *outC);

extern void TimerT_reset_Robot(outC_TimerT_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void TimerT_init_Robot(outC_TimerT_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TimerT_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TimerT_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

