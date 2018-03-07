/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _ErrorCalculate_Robot_H_
#define _ErrorCalculate_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Error/ */ Error;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  colorTy /* _L1/ */ _L1;
  kcg_uint8 /* _L7/ */ _L7;
  kcg_uint8 /* _L8/ */ _L8;
  kcg_uint8 /* _L9/ */ _L9;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L2/ */ _L2;
} outC_ErrorCalculate_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::ErrorCalculate/ */
extern void ErrorCalculate_Robot(
  /* roadColor/ */
  colorTy *roadColor,
  outC_ErrorCalculate_Robot *outC);

extern void ErrorCalculate_reset_Robot(outC_ErrorCalculate_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ErrorCalculate_init_Robot(outC_ErrorCalculate_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ErrorCalculate_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ErrorCalculate_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

