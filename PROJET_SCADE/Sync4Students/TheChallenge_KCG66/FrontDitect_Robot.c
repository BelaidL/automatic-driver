/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FrontDitect_Robot.h"

/* Robot::FrontDitect/ */
void FrontDitect_Robot(
  /* frontColor/ */
  colorTy *frontColor,
  /* sonar/ */
  kcg_int32 sonar,
  outC_FrontDitect_Robot *outC)
{
  outC->_L11 = kcg_lit_int32(12);
  outC->_L9 = sonar;
  outC->_L10 = outC->_L9 <= outC->_L11;
  outC->amber = outC->_L10;
  kcg_copy_colorTy(&outC->_L8, (colorTy *) &GREEN);
  kcg_copy_colorTy(&outC->_L1, frontColor);
  outC->_L5 = kcg_comp_colorTy(&outC->_L1, &outC->_L8);
  outC->isGreen = outC->_L5;
  kcg_copy_colorTy(&outC->_L7, (colorTy *) &YELLOW);
  outC->_L4 = kcg_comp_colorTy(&outC->_L1, &outC->_L7);
  outC->isOrange = outC->_L4;
  kcg_copy_colorTy(&outC->_L6, (colorTy *) &RED);
  outC->_L3 = kcg_comp_colorTy(&outC->_L6, &outC->_L1);
  outC->isRed = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void FrontDitect_init_Robot(outC_FrontDitect_Robot *outC)
{
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8.red = kcg_lit_uint8(0);
  outC->_L8.green = kcg_lit_uint8(0);
  outC->_L8.blue = kcg_lit_uint8(0);
  outC->_L7.red = kcg_lit_uint8(0);
  outC->_L7.green = kcg_lit_uint8(0);
  outC->_L7.blue = kcg_lit_uint8(0);
  outC->_L6.red = kcg_lit_uint8(0);
  outC->_L6.green = kcg_lit_uint8(0);
  outC->_L6.blue = kcg_lit_uint8(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1.red = kcg_lit_uint8(0);
  outC->_L1.green = kcg_lit_uint8(0);
  outC->_L1.blue = kcg_lit_uint8(0);
  outC->amber = kcg_true;
  outC->isGreen = kcg_true;
  outC->isOrange = kcg_true;
  outC->isRed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void FrontDitect_reset_Robot(outC_FrontDitect_Robot *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** FrontDitect_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

