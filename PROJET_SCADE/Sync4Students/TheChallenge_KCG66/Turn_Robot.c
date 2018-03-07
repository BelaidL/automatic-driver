/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Turn_Robot.h"

/* Robot::Turn/ */
void Turn_Robot(/* value/ */ kcg_float64 value, outC_Turn_Robot *outC)
{
  outC->_L13 = kcg_lit_float64(-1.0);
  outC->_L11 = turnSpeed_Robot;
  outC->_L12 = outC->_L11 * outC->_L13;
  outC->_L7 = turnSpeed_Robot;
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L4 = value;
  outC->_L5 = outC->_L4 >= outC->_L6;
  outC->_L1.left = outC->_L7;
  outC->_L1.right = outC->_L12;
  outC->_L2.left = outC->_L12;
  outC->_L2.right = outC->_L7;
  /* _L3= */
  if (outC->_L5) {
    kcg_copy_wheelsTy_Robot(&outC->_L3, &outC->_L2);
  }
  else {
    kcg_copy_wheelsTy_Robot(&outC->_L3, &outC->_L1);
  }
  kcg_copy_wheelsTy_Robot(&outC->RotationS, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void Turn_init_Robot(outC_Turn_Robot *outC)
{
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3.left = kcg_lit_float64(0.0);
  outC->_L3.right = kcg_lit_float64(0.0);
  outC->_L2.left = kcg_lit_float64(0.0);
  outC->_L2.right = kcg_lit_float64(0.0);
  outC->_L1.left = kcg_lit_float64(0.0);
  outC->_L1.right = kcg_lit_float64(0.0);
  outC->RotationS.left = kcg_lit_float64(0.0);
  outC->RotationS.right = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void Turn_reset_Robot(outC_Turn_Robot *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Turn_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

