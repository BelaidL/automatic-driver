/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _TurnAction_Robot_H_
#define _TurnAction_Robot_H_

#include "kcg_types.h"
#include "afterTurn_Robot.h"
#include "TimerT_Robot.h"
#include "calculTimeTurn_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* endTurn/ */ endTurn;
  kcg_bool /* nearRoad/ */ nearRoad;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L2/ */ _L2;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TimerT_Robot /* _L2=(Robot::TimerT#1)/ */ Context_TimerT_1;
  outC_calculTimeTurn_Robot /* _L1=(Robot::calculTimeTurn#1)/ */ Context_calculTimeTurn_1;
  outC_afterTurn_Robot /* _L7=(Robot::afterTurn#1)/ */ Context_afterTurn_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  actionTy_Robot /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
} outC_TurnAction_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::TurnAction/ */
extern void TurnAction_Robot(
  /* value/ */
  kcg_float64 value,
  /* action/ */
  actionTy_Robot action,
  /* endGreen/ */
  kcg_bool endGreen,
  outC_TurnAction_Robot *outC);

extern void TurnAction_reset_Robot(outC_TurnAction_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void TurnAction_init_Robot(outC_TurnAction_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TurnAction_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TurnAction_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

