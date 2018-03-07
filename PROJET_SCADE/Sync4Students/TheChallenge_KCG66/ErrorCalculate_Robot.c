/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ErrorCalculate_Robot.h"

/* Robot::ErrorCalculate/ */
void ErrorCalculate_Robot(
  /* roadColor/ */
  colorTy *roadColor,
  outC_ErrorCalculate_Robot *outC)
{
  kcg_copy_colorTy(&outC->_L1, roadColor);
  outC->_L9 = outC->_L1.blue;
  outC->_L5 = /* _L5= */(kcg_float64) outC->_L9;
  outC->_L8 = outC->_L1.green;
  outC->_L2 = /* _L2= */(kcg_float64) outC->_L8;
  outC->_L7 = outC->_L1.red;
  outC->_L4 = /* _L4= */(kcg_float64) outC->_L7;
  outC->_L6 = outC->_L4 - outC->_L2;
  outC->_L3 = outC->_L6 / outC->_L5;
  outC->Error = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void ErrorCalculate_init_Robot(outC_ErrorCalculate_Robot *outC)
{
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_uint8(0);
  outC->_L8 = kcg_lit_uint8(0);
  outC->_L7 = kcg_lit_uint8(0);
  outC->_L1.red = kcg_lit_uint8(0);
  outC->_L1.green = kcg_lit_uint8(0);
  outC->_L1.blue = kcg_lit_uint8(0);
  outC->Error = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void ErrorCalculate_reset_Robot(outC_ErrorCalculate_Robot *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ErrorCalculate_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

