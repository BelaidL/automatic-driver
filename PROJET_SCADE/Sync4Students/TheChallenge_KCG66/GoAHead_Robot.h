/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _GoAHead_Robot_H_
#define _GoAHead_Robot_H_

#include "kcg_types.h"
#include "vitesseInterval_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  wheelsTy_Robot /* WheelsSpd/ */ WheelsSpd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_vitesseInterval_Robot /* _L9=(Robot::vitesseInterval#1)/ */ Context_vitesseInterval_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L1/ */ _L1;
  wheelsTy_Robot /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
  kcg_float64 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_float64 /* _L13/ */ _L13;
} outC_GoAHead_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::GoAHead/ */
extern void GoAHead_Robot(
  /* speed/ */
  kcg_float64 speed,
  outC_GoAHead_Robot *outC);

extern void GoAHead_reset_Robot(outC_GoAHead_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void GoAHead_init_Robot(outC_GoAHead_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GoAHead_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** GoAHead_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

