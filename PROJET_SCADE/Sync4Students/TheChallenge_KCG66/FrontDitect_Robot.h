/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _FrontDitect_Robot_H_
#define _FrontDitect_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isRed/ */ isRed;
  kcg_bool /* isOrange/ */ isOrange;
  kcg_bool /* isGreen/ */ isGreen;
  kcg_bool /* amber/ */ amber;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  colorTy /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  colorTy /* _L6/ */ _L6;
  colorTy /* _L7/ */ _L7;
  colorTy /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
} outC_FrontDitect_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::FrontDitect/ */
extern void FrontDitect_Robot(
  /* frontColor/ */
  colorTy *frontColor,
  /* sonar/ */
  kcg_int32 sonar,
  outC_FrontDitect_Robot *outC);

extern void FrontDitect_reset_Robot(outC_FrontDitect_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FrontDitect_init_Robot(outC_FrontDitect_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FrontDitect_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** FrontDitect_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

