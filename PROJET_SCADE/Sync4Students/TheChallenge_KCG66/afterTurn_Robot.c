/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "afterTurn_Robot.h"

/* Robot::afterTurn/ */
void afterTurn_Robot(
  /* action/ */
  kcg_bool action,
  /* spd/ */
  kcg_float64 spd,
  /* endGreen/ */
  kcg_bool endGreen,
  outC_afterTurn_Robot *outC)
{
  outC->_L9 = action;
  outC->_L20 = endGreen;
  outC->_L21 = outC->_L20 & outC->_L9;
  outC->_L19 = kcg_lit_float64(100.0);
  outC->_L7 = spd;
  outC->_L18 = outC->_L19 / outC->_L7;
  /* _L16= */
  if (outC->init) {
    outC->_L16 = kcg_lit_float64(-1.0);
  }
  else {
    outC->_L16 = outC->_L14;
  }
  outC->_L3 = kcg_lit_float64(1.0);
  outC->_L6 = outC->_L3 + outC->_L16;
  outC->_L11 = kcg_lit_float64(0.1);
  outC->_L1 = outC->_L16 > outC->_L18;
  /* _L12= */
  if (outC->_L1) {
    outC->_L12 = outC->_L11;
  }
  else {
    outC->_L12 = outC->_L6;
  }
  outC->_L5 = kcg_lit_float64(0.2);
  /* _L14= */
  if (outC->_L21) {
    outC->_L14 = outC->_L5;
  }
  else {
    outC->_L14 = outC->_L12;
  }
  outC->_L13 = kcg_lit_float64(0.1);
  outC->_L8 = kcg_false;
  outC->_L2 = kcg_true;
  outC->_L4 = outC->_L13 == outC->_L14;
  /* _L10= */
  if (outC->_L4) {
    outC->_L10 = outC->_L2;
  }
  else {
    outC->_L10 = outC->_L8;
  }
  outC->endOfTurn = outC->_L10;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void afterTurn_init_Robot(outC_afterTurn_Robot *outC)
{
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->endOfTurn = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void afterTurn_reset_Robot(outC_afterTurn_Robot *outC)
{
  outC->init = kcg_true;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** afterTurn_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

