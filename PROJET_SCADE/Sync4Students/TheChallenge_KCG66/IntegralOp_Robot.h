/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _IntegralOp_Robot_H_
#define _IntegralOp_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* IntegRsult/ */ IntegRsult;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float64 /* _L14/ */ _L14;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_bool /* _L15/ */ _L15;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L17/ */ _L17;
} outC_IntegralOp_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::IntegralOp/ */
extern void IntegralOp_Robot(
  /* Error/ */
  kcg_float64 Error,
  outC_IntegralOp_Robot *outC);

extern void IntegralOp_reset_Robot(outC_IntegralOp_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void IntegralOp_init_Robot(outC_IntegralOp_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _IntegralOp_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** IntegralOp_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

