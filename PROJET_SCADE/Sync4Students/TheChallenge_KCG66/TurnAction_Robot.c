/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TurnAction_Robot.h"

/* Robot::TurnAction/ */
void TurnAction_Robot(
  /* value/ */
  kcg_float64 value,
  /* action/ */
  actionTy_Robot action,
  /* endGreen/ */
  kcg_bool endGreen,
  outC_TurnAction_Robot *outC)
{
  /* _L9= */
  if (outC->init) {
    outC->_L9 = kcg_true;
  }
  else {
    outC->_L9 = outC->_L2;
  }
  outC->_L8 = endGreen;
  outC->_L3 = value;
  /* _L7=(Robot::afterTurn#1)/ */
  afterTurn_Robot(outC->_L9, outC->_L3, outC->_L8, &outC->Context_afterTurn_1);
  outC->_L7 = outC->Context_afterTurn_1.endOfTurn;
  outC->nearRoad = outC->_L7;
  outC->_L6 = action;
  outC->_L5 = B;
  outC->_L4 = D;
  /* _L1=(Robot::calculTimeTurn#1)/ */
  calculTimeTurn_Robot(
    outC->_L4,
    outC->_L5,
    outC->_L3,
    &outC->Context_calculTimeTurn_1);
  outC->_L1 = outC->Context_calculTimeTurn_1.time;
  /* _L2=(Robot::TimerT#1)/ */
  TimerT_Robot(outC->_L1, outC->_L6, &outC->Context_TimerT_1);
  outC->_L2 = outC->Context_TimerT_1.endOfTurn;
  outC->endTurn = outC->_L2;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void TurnAction_init_Robot(outC_TurnAction_Robot *outC)
{
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = go_Robot;
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_true;
  outC->init = kcg_true;
  outC->nearRoad = kcg_true;
  outC->endTurn = kcg_true;
  /* _L2=(Robot::TimerT#1)/ */ TimerT_init_Robot(&outC->Context_TimerT_1);
  /* _L1=(Robot::calculTimeTurn#1)/ */
  calculTimeTurn_init_Robot(&outC->Context_calculTimeTurn_1);
  /* _L7=(Robot::afterTurn#1)/ */
  afterTurn_init_Robot(&outC->Context_afterTurn_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void TurnAction_reset_Robot(outC_TurnAction_Robot *outC)
{
  outC->init = kcg_true;
  /* _L2=(Robot::TimerT#1)/ */ TimerT_reset_Robot(&outC->Context_TimerT_1);
  /* _L1=(Robot::calculTimeTurn#1)/ */
  calculTimeTurn_reset_Robot(&outC->Context_calculTimeTurn_1);
  /* _L7=(Robot::afterTurn#1)/ */
  afterTurn_reset_Robot(&outC->Context_afterTurn_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TurnAction_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

