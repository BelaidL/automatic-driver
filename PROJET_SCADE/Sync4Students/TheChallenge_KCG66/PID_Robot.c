/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PID_Robot.h"

/* Robot::PID/ */
void PID_Robot(/* Error/ */ kcg_float64 Error, outC_PID_Robot *outC)
{
  outC->_L1 = Error;
  /* _L6=(Robot::DerivatOp#1)/ */
  DerivatOp_Robot(outC->_L1, &outC->Context_DerivatOp_1);
  outC->_L6 = outC->Context_DerivatOp_1.deriveRsult;
  outC->_L9 = kcg_lit_float64(100.0);
  outC->_L4 = outC->_L9 * outC->_L6;
  outC->_L8 = kcg_lit_float64(55.0);
  /* _L5=(Robot::IntegralOp#1)/ */
  IntegralOp_Robot(outC->_L1, &outC->Context_IntegralOp_1);
  outC->_L5 = outC->Context_IntegralOp_1.IntegRsult;
  outC->_L3 = outC->_L5 * outC->_L8;
  outC->_L14 = outC->_L3 + outC->_L4;
  outC->_L7 = kcg_lit_float64(25.0);
  outC->_L2 = outC->_L1 * outC->_L7;
  outC->_L13 = outC->_L2 - outC->_L14;
  outC->Correction = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void PID_init_Robot(outC_PID_Robot *outC)
{
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->Correction = kcg_lit_float64(0.0);
  /* _L5=(Robot::IntegralOp#1)/ */
  IntegralOp_init_Robot(&outC->Context_IntegralOp_1);
  /* _L6=(Robot::DerivatOp#1)/ */
  DerivatOp_init_Robot(&outC->Context_DerivatOp_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void PID_reset_Robot(outC_PID_Robot *outC)
{
  /* _L5=(Robot::IntegralOp#1)/ */
  IntegralOp_reset_Robot(&outC->Context_IntegralOp_1);
  /* _L6=(Robot::DerivatOp#1)/ */
  DerivatOp_reset_Robot(&outC->Context_DerivatOp_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** PID_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

