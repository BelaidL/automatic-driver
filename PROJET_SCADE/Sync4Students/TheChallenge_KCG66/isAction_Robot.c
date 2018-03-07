/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isAction_Robot.h"

/* Robot::isAction/ */
void isAction_Robot(
  /* action/ */
  actionTy_Robot action,
  outC_isAction_Robot *outC)
{
  outC->_L21 = stop_Robot;
  outC->_L20 = go_Robot;
  outC->_L19 = turn_Robot;
  outC->_L15 = action;
  outC->_L18 = outC->_L15 == outC->_L21;
  outC->_L17 = outC->_L15 == outC->_L20;
  outC->_L16 = outC->_L19 == outC->_L15;
  outC->isStop = outC->_L18;
  outC->isGo = outC->_L17;
  outC->isturn = outC->_L16;
}

#ifndef KCG_USER_DEFINED_INIT
void isAction_init_Robot(outC_isAction_Robot *outC)
{
  outC->_L21 = go_Robot;
  outC->_L20 = go_Robot;
  outC->_L19 = go_Robot;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = go_Robot;
  outC->isStop = kcg_true;
  outC->isGo = kcg_true;
  outC->isturn = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void isAction_reset_Robot(outC_isAction_Robot *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** isAction_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

