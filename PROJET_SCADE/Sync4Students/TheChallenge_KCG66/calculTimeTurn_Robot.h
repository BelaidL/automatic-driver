/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _calculTimeTurn_Robot_H_
#define _calculTimeTurn_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* time/ */ time;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* gama/ */ gama;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L20/ */ _L20;
  kcg_float64 /* _L21/ */ _L21;
  kcg_float64 /* _L22/ */ _L22;
  kcg_float64 /* _L23/ */ _L23;
  kcg_float64 /* _L24/ */ _L24;
} outC_calculTimeTurn_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::calculTimeTurn/ */
extern void calculTimeTurn_Robot(
  /* D/ */
  kcg_float64 D1,
  /* B/ */
  kcg_float64 B2,
  /* angle/ */
  kcg_float64 angle,
  outC_calculTimeTurn_Robot *outC);

extern void calculTimeTurn_reset_Robot(outC_calculTimeTurn_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void calculTimeTurn_init_Robot(outC_calculTimeTurn_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _calculTimeTurn_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** calculTimeTurn_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

