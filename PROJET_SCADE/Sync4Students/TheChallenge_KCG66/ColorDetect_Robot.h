/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _ColorDetect_Robot_H_
#define _ColorDetect_Robot_H_

#include "kcg_types.h"
#include "FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  actionTy_Robot /* action/ */ action;
  kcg_bool /* endRed/ */ endRed;
  kcg_bool /* endGreen/ */ endGreen;
  kcg_float64 /* value/ */ value;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L21/ */ _L21;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FallingEdge_digital /* _L46=(digital::FallingEdge#2)/ */ Context_FallingEdge_2;
  outC_FallingEdge_digital /* _L40=(digital::FallingEdge#1)/ */ Context_FallingEdge_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  colorTy /* _L4/ */ _L4;
  kcg_int32 /* _L20/ */ _L20;
  kcg_int32 /* _L32/ */ _L32;
  kcg_int32 /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
  colorTy /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  itiElement_Robot /* _L38/ */ _L38;
  itiElemArr_Robot /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L44/ */ _L44;
  colorTy /* _L43/ */ _L43;
  actionTy_Robot /* _L48/ */ _L48;
  kcg_float64 /* _L47/ */ _L47;
} outC_ColorDetect_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::ColorDetect/ */
extern void ColorDetect_Robot(
  /* colorDetected/ */
  colorTy *colorDetected,
  /* itiElementArr/ */
  itiElemArr_Robot *itiElementArr,
  /* endTurn/ */
  kcg_bool endTurn,
  outC_ColorDetect_Robot *outC);

extern void ColorDetect_reset_Robot(outC_ColorDetect_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ColorDetect_init_Robot(outC_ColorDetect_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ColorDetect_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ColorDetect_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

