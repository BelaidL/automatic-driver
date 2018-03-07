/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _Turn_Robot_H_
#define _Turn_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  wheelsTy_Robot /* RotationS/ */ RotationS;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  wheelsTy_Robot /* _L1/ */ _L1;
  wheelsTy_Robot /* _L2/ */ _L2;
  wheelsTy_Robot /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L11/ */ _L11;
  kcg_float64 /* _L12/ */ _L12;
  kcg_float64 /* _L13/ */ _L13;
} outC_Turn_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::Turn/ */
extern void Turn_Robot(/* value/ */ kcg_float64 value, outC_Turn_Robot *outC);

extern void Turn_reset_Robot(outC_Turn_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Turn_init_Robot(outC_Turn_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Turn_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Turn_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

