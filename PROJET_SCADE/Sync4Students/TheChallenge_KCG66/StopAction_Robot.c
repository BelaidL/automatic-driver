/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StopAction_Robot.h"

/* Robot::StopAction/ */
void StopAction_Robot(
  /* Speed/ */
  kcg_float64 Speed,
  outC_StopAction_Robot *outC)
{
  outC->_L1 = Speed;
  outC->_L2.left = outC->_L1;
  outC->_L2.right = outC->_L1;
  kcg_copy_wheelsTy_Robot(&outC->wheelsSpd, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void StopAction_init_Robot(outC_StopAction_Robot *outC)
{
  outC->_L1 = kcg_lit_float64(0.0);
  outC->_L2.left = kcg_lit_float64(0.0);
  outC->_L2.right = kcg_lit_float64(0.0);
  outC->wheelsSpd.left = kcg_lit_float64(0.0);
  outC->wheelsSpd.right = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void StopAction_reset_Robot(outC_StopAction_Robot *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** StopAction_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

