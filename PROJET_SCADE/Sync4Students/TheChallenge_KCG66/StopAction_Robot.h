/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _StopAction_Robot_H_
#define _StopAction_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  wheelsTy_Robot /* wheelsSpd/ */ wheelsSpd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  wheelsTy_Robot /* _L2/ */ _L2;
  kcg_float64 /* _L1/ */ _L1;
} outC_StopAction_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::StopAction/ */
extern void StopAction_Robot(
  /* Speed/ */
  kcg_float64 Speed,
  outC_StopAction_Robot *outC);

extern void StopAction_reset_Robot(outC_StopAction_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void StopAction_init_Robot(outC_StopAction_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _StopAction_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** StopAction_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

