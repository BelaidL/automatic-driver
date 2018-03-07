/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _GoAction_Robot_H_
#define _GoAction_Robot_H_

#include "kcg_types.h"
#include "vitesseInterval_Robot.h"
#include "ErrorCalculate_Robot.h"
#include "PID_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  wheelsTy_Robot /* WheelsSpd/ */ WheelsSpd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_vitesseInterval_Robot /* _L39=(Robot::vitesseInterval#1)/ */ Context_vitesseInterval_1;
  outC_vitesseInterval_Robot /* _L40=(Robot::vitesseInterval#2)/ */ Context_vitesseInterval_2;
  outC_PID_Robot /* _L3=(Robot::PID#1)/ */ Context_PID_1;
  outC_ErrorCalculate_Robot /* _L4=(Robot::ErrorCalculate#1)/ */ Context_ErrorCalculate_1;
  outC_vitesseInterval_Robot /* _L41=(Robot::vitesseInterval#3)/ */ Context_vitesseInterval_3;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* spd/ */ spd;
  colorTy /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  wheelsTy_Robot /* _L8/ */ _L8;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L31/ */ _L31;
  kcg_float64 /* _L32/ */ _L32;
  kcg_float64 /* _L33/ */ _L33;
  kcg_float64 /* _L34/ */ _L34;
  kcg_float64 /* _L35/ */ _L35;
  kcg_float64 /* _L36/ */ _L36;
  kcg_float64 /* _L38/ */ _L38;
  kcg_float64 /* _L37/ */ _L37;
  kcg_float64 /* _L39/ */ _L39;
  kcg_float64 /* _L40/ */ _L40;
  kcg_float64 /* _L41/ */ _L41;
  kcg_float64 /* _L53/ */ _L53;
  kcg_bool /* _L51/ */ _L51;
  kcg_float64 /* _L50/ */ _L50;
  kcg_float64 /* _L54/ */ _L54;
} outC_GoAction_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::GoAction/ */
extern void GoAction_Robot(
  /* roadColor/ */
  colorTy *roadColor,
  /* speed/ */
  kcg_float64 speed,
  outC_GoAction_Robot *outC);

extern void GoAction_reset_Robot(outC_GoAction_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void GoAction_init_Robot(outC_GoAction_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GoAction_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** GoAction_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

