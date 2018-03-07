/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GoAHead_Robot.h"

/* Robot::GoAHead/ */
void GoAHead_Robot(/* speed/ */ kcg_float64 speed, outC_GoAHead_Robot *outC)
{
  outC->_L13 = maxSpeed_Robot;
  outC->_L2 = speed;
  outC->_L11 = outC->_L2 > outC->_L13;
  /* _L10= */
  if (outC->_L11) {
    outC->_L10 = outC->_L13;
  }
  else {
    outC->_L10 = outC->_L2;
  }
  outC->_L1 = PI;
  outC->_L6 = D;
  outC->_L3 = outC->_L6 * outC->_L1;
  outC->_L7 = kcg_lit_float64(360.0);
  outC->_L5 = outC->_L7 * outC->_L10;
  outC->_L4 = outC->_L5 / outC->_L3;
  /* _L9=(Robot::vitesseInterval#1)/ */
  vitesseInterval_Robot(outC->_L4, &outC->Context_vitesseInterval_1);
  outC->_L9 = outC->Context_vitesseInterval_1.spdOut;
  outC->_L8.left = outC->_L9;
  outC->_L8.right = outC->_L9;
  kcg_copy_wheelsTy_Robot(&outC->WheelsSpd, &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void GoAHead_init_Robot(outC_GoAHead_Robot *outC)
{
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8.left = kcg_lit_float64(0.0);
  outC->_L8.right = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->WheelsSpd.left = kcg_lit_float64(0.0);
  outC->WheelsSpd.right = kcg_lit_float64(0.0);
  /* _L9=(Robot::vitesseInterval#1)/ */
  vitesseInterval_init_Robot(&outC->Context_vitesseInterval_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void GoAHead_reset_Robot(outC_GoAHead_Robot *outC)
{
  /* _L9=(Robot::vitesseInterval#1)/ */
  vitesseInterval_reset_Robot(&outC->Context_vitesseInterval_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** GoAHead_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

