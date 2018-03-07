/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ColorDetect_Robot.h"

/* Robot::ColorDetect/ */
void ColorDetect_Robot(
  /* colorDetected/ */
  colorTy *colorDetected,
  /* itiElementArr/ */
  itiElemArr_Robot *itiElementArr,
  /* endTurn/ */
  kcg_bool endTurn,
  outC_ColorDetect_Robot *outC)
{
  /* _L20= */
  if (outC->init) {
    outC->_L20 = kcg_lit_int32(0);
  }
  else {
    outC->_L20 = outC->_L21;
  }
  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(1);
  kcg_copy_colorTy(&outC->_L35, (colorTy *) &GREEN);
  kcg_copy_colorTy(&outC->_L4, colorDetected);
  outC->_L36 = kcg_comp_colorTy(&outC->_L4, &outC->_L35);
  /* _L40=(digital::FallingEdge#1)/ */
  FallingEdge_digital(outC->_L36, &outC->Context_FallingEdge_1);
  outC->_L40 = outC->Context_FallingEdge_1.FE_Output;
  outC->_L41 = endTurn;
  outC->_L42 = outC->_L41 | outC->_L40;
  /* _L32= */
  if (outC->_L42) {
    outC->_L32 = outC->_L33;
  }
  else {
    outC->_L32 = outC->_L34;
  }
  outC->_L21 = outC->_L32 + outC->_L20;
  kcg_copy_itiElemArr_Robot(&outC->_L39, itiElementArr);
  if ((kcg_lit_int32(0) <= outC->_L21) & (outC->_L21 < kcg_lit_int32(50))) {
    kcg_copy_itiElement_Robot(&outC->_L38, &outC->_L39[outC->_L21]);
  }
  else {
    kcg_copy_itiElement_Robot(&outC->_L38, &(*itiElementArr)[0]);
  }
  outC->_L47 = outC->_L38.param;
  outC->value = outC->_L47;
  outC->_L48 = outC->_L38.action;
  outC->endGreen = outC->_L40;
  kcg_copy_colorTy(&outC->_L43, (colorTy *) &RED);
  outC->_L44 = kcg_comp_colorTy(&outC->_L4, &outC->_L43);
  /* _L46=(digital::FallingEdge#2)/ */
  FallingEdge_digital(outC->_L44, &outC->Context_FallingEdge_2);
  outC->_L46 = outC->Context_FallingEdge_2.FE_Output;
  outC->endRed = outC->_L46;
  outC->action = outC->_L48;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ColorDetect_init_Robot(outC_ColorDetect_Robot *outC)
{
  kcg_size idx;

  outC->_L47 = kcg_lit_float64(0.0);
  outC->_L48 = go_Robot;
  outC->_L43.red = kcg_lit_uint8(0);
  outC->_L43.green = kcg_lit_uint8(0);
  outC->_L43.blue = kcg_lit_uint8(0);
  outC->_L44 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  for (idx = 0; idx < 50; idx++) {
    outC->_L39[idx].action = go_Robot;
    outC->_L39[idx].param = kcg_lit_float64(0.0);
  }
  outC->_L38.action = go_Robot;
  outC->_L38.param = kcg_lit_float64(0.0);
  outC->_L36 = kcg_true;
  outC->_L35.red = kcg_lit_uint8(0);
  outC->_L35.green = kcg_lit_uint8(0);
  outC->_L35.blue = kcg_lit_uint8(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L4.red = kcg_lit_uint8(0);
  outC->_L4.green = kcg_lit_uint8(0);
  outC->_L4.blue = kcg_lit_uint8(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->value = kcg_lit_float64(0.0);
  outC->endGreen = kcg_true;
  outC->endRed = kcg_true;
  outC->action = go_Robot;
  /* _L46=(digital::FallingEdge#2)/ */
  FallingEdge_init_digital(&outC->Context_FallingEdge_2);
  /* _L40=(digital::FallingEdge#1)/ */
  FallingEdge_init_digital(&outC->Context_FallingEdge_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void ColorDetect_reset_Robot(outC_ColorDetect_Robot *outC)
{
  outC->init = kcg_true;
  /* _L46=(digital::FallingEdge#2)/ */
  FallingEdge_reset_digital(&outC->Context_FallingEdge_2);
  /* _L40=(digital::FallingEdge#1)/ */
  FallingEdge_reset_digital(&outC->Context_FallingEdge_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ColorDetect_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

