/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _DerivatOp_Robot_H_
#define _DerivatOp_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* deriveRsult/ */ deriveRsult;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float64 /* _L1/ */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L7/ */ _L7;
} outC_DerivatOp_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::DerivatOp/ */
extern void DerivatOp_Robot(
  /* Error/ */
  kcg_float64 Error,
  outC_DerivatOp_Robot *outC);

extern void DerivatOp_reset_Robot(outC_DerivatOp_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void DerivatOp_init_Robot(outC_DerivatOp_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DerivatOp_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** DerivatOp_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

