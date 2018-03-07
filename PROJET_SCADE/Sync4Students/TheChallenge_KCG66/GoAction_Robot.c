/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GoAction_Robot.h"

/* Robot::GoAction/ */
void GoAction_Robot(
  /* roadColor/ */
  colorTy *roadColor,
  /* speed/ */
  kcg_float64 speed,
  outC_GoAction_Robot *outC)
{
  outC->_L54 = maxSpeed_Robot;
  outC->_L50 = speed;
  outC->_L51 = outC->_L50 > outC->_L54;
  /* _L53= */
  if (outC->_L51) {
    outC->_L53 = outC->_L54;
  }
  else {
    outC->_L53 = outC->_L50;
  }
  outC->_L36 = PI;
  outC->_L35 = D;
  outC->_L34 = outC->_L35 * outC->_L36;
  outC->_L32 = kcg_lit_float64(360.0);
  outC->_L31 = outC->_L32 * outC->_L53;
  outC->_L33 = outC->_L31 / outC->_L34;
  /* _L41=(Robot::vitesseInterval#3)/ */
  vitesseInterval_Robot(outC->_L33, &outC->Context_vitesseInterval_3);
  outC->_L41 = outC->Context_vitesseInterval_3.spdOut;
  kcg_copy_colorTy(&outC->_L2, roadColor);
  /* _L4=(Robot::ErrorCalculate#1)/ */
  ErrorCalculate_Robot(&outC->_L2, &outC->Context_ErrorCalculate_1);
  outC->_L4 = outC->Context_ErrorCalculate_1.Error;
  /* _L3=(Robot::PID#1)/ */ PID_Robot(outC->_L4, &outC->Context_PID_1);
  outC->_L3 = outC->Context_PID_1.Correction;
  outC->spd = outC->_L41;
  outC->_L37 = outC->spd;
  outC->_L17 = outC->_L37 - outC->_L3;
  /* _L40=(Robot::vitesseInterval#2)/ */
  vitesseInterval_Robot(outC->_L17, &outC->Context_vitesseInterval_2);
  outC->_L40 = outC->Context_vitesseInterval_2.spdOut;
  outC->_L38 = outC->spd;
  outC->_L16 = outC->_L38 + outC->_L3;
  /* _L39=(Robot::vitesseInterval#1)/ */
  vitesseInterval_Robot(outC->_L16, &outC->Context_vitesseInterval_1);
  outC->_L39 = outC->Context_vitesseInterval_1.spdOut;
  outC->_L8.left = outC->_L39;
  outC->_L8.right = outC->_L40;
  kcg_copy_wheelsTy_Robot(&outC->WheelsSpd, &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void GoAction_init_Robot(outC_GoAction_Robot *outC)
{
  outC->_L54 = kcg_lit_float64(0.0);
  outC->_L50 = kcg_lit_float64(0.0);
  outC->_L51 = kcg_true;
  outC->_L53 = kcg_lit_float64(0.0);
  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_lit_float64(0.0);
  outC->_L39 = kcg_lit_float64(0.0);
  outC->_L37 = kcg_lit_float64(0.0);
  outC->_L38 = kcg_lit_float64(0.0);
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L35 = kcg_lit_float64(0.0);
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L8.left = kcg_lit_float64(0.0);
  outC->_L8.right = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2.red = kcg_lit_uint8(0);
  outC->_L2.green = kcg_lit_uint8(0);
  outC->_L2.blue = kcg_lit_uint8(0);
  outC->spd = kcg_lit_float64(0.0);
  outC->WheelsSpd.left = kcg_lit_float64(0.0);
  outC->WheelsSpd.right = kcg_lit_float64(0.0);
  /* _L39=(Robot::vitesseInterval#1)/ */
  vitesseInterval_init_Robot(&outC->Context_vitesseInterval_1);
  /* _L40=(Robot::vitesseInterval#2)/ */
  vitesseInterval_init_Robot(&outC->Context_vitesseInterval_2);
  /* _L3=(Robot::PID#1)/ */ PID_init_Robot(&outC->Context_PID_1);
  /* _L4=(Robot::ErrorCalculate#1)/ */
  ErrorCalculate_init_Robot(&outC->Context_ErrorCalculate_1);
  /* _L41=(Robot::vitesseInterval#3)/ */
  vitesseInterval_init_Robot(&outC->Context_vitesseInterval_3);
}
#endif /* KCG_USER_DEFINED_INIT */


void GoAction_reset_Robot(outC_GoAction_Robot *outC)
{
  /* _L39=(Robot::vitesseInterval#1)/ */
  vitesseInterval_reset_Robot(&outC->Context_vitesseInterval_1);
  /* _L40=(Robot::vitesseInterval#2)/ */
  vitesseInterval_reset_Robot(&outC->Context_vitesseInterval_2);
  /* _L3=(Robot::PID#1)/ */ PID_reset_Robot(&outC->Context_PID_1);
  /* _L4=(Robot::ErrorCalculate#1)/ */
  ErrorCalculate_reset_Robot(&outC->Context_ErrorCalculate_1);
  /* _L41=(Robot::vitesseInterval#3)/ */
  vitesseInterval_reset_Robot(&outC->Context_vitesseInterval_3);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** GoAction_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

