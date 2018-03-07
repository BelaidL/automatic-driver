/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _vitesseInterval_Robot_H_
#define _vitesseInterval_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* spdOut/ */ spdOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_float64 /* _L9/ */ _L9;
  kcg_float64 /* _L12/ */ _L12;
  kcg_float64 /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
} outC_vitesseInterval_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::vitesseInterval/ */
extern void vitesseInterval_Robot(
  /* spdIn/ */
  kcg_float64 spdIn,
  outC_vitesseInterval_Robot *outC);

extern void vitesseInterval_reset_Robot(outC_vitesseInterval_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void vitesseInterval_init_Robot(outC_vitesseInterval_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _vitesseInterval_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** vitesseInterval_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

