/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _afterTurn_Robot_H_
#define _afterTurn_Robot_H_

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
  kcg_float64 /* _L14/ */ _L14;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L13/ */ _L13;
  kcg_float64 /* _L12/ */ _L12;
  kcg_float64 /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_float64 /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L18/ */ _L18;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
} outC_afterTurn_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::afterTurn/ */
extern void afterTurn_Robot(
  /* action/ */
  kcg_bool action,
  /* spd/ */
  kcg_float64 spd,
  /* endGreen/ */
  kcg_bool endGreen,
  outC_afterTurn_Robot *outC);

extern void afterTurn_reset_Robot(outC_afterTurn_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void afterTurn_init_Robot(outC_afterTurn_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _afterTurn_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** afterTurn_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

