/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _PID_Robot_H_
#define _PID_Robot_H_

#include "kcg_types.h"
#include "DerivatOp_Robot.h"
#include "IntegralOp_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Correction/ */ Correction;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_IntegralOp_Robot /* _L5=(Robot::IntegralOp#1)/ */ Context_IntegralOp_1;
  outC_DerivatOp_Robot /* _L6=(Robot::DerivatOp#1)/ */ Context_DerivatOp_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
  kcg_float64 /* _L13/ */ _L13;
  kcg_float64 /* _L14/ */ _L14;
} outC_PID_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::PID/ */
extern void PID_Robot(/* Error/ */ kcg_float64 Error, outC_PID_Robot *outC);

extern void PID_reset_Robot(outC_PID_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PID_init_Robot(outC_PID_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PID_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** PID_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

