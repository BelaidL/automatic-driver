/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */
#ifndef _isAction_Robot_H_
#define _isAction_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isturn/ */ isturn;
  kcg_bool /* isGo/ */ isGo;
  kcg_bool /* isStop/ */ isStop;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  actionTy_Robot /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  actionTy_Robot /* _L19/ */ _L19;
  actionTy_Robot /* _L20/ */ _L20;
  actionTy_Robot /* _L21/ */ _L21;
} outC_isAction_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::isAction/ */
extern void isAction_Robot(
  /* action/ */
  actionTy_Robot action,
  outC_isAction_Robot *outC);

extern void isAction_reset_Robot(outC_isAction_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void isAction_init_Robot(outC_isAction_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _isAction_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** isAction_Robot.h
** Generation date: 2018-01-13T10:57:48
*************************************************************$ */

