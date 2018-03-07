/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calculTimeTurn_Robot.h"

/* Robot::calculTimeTurn/ */
void calculTimeTurn_Robot(
  /* D/ */
  kcg_float64 D1,
  /* B/ */
  kcg_float64 B2,
  /* angle/ */
  kcg_float64 angle,
  outC_calculTimeTurn_Robot *outC)
{
  outC->_L24 = kcg_lit_float64(100.0);
  outC->_L23 = turnSpeed_Robot;
  outC->_L22 = outC->_L23 / outC->_L24;
  outC->_L21 = kcg_lit_float64(-1.0);
  outC->_L2 = angle;
  outC->_L20 = outC->_L2 * outC->_L21;
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L18 = outC->_L2 >= outC->_L19;
  /* _L17= */
  if (outC->_L18) {
    outC->_L17 = outC->_L2;
  }
  else {
    outC->_L17 = outC->_L20;
  }
  outC->_L4 = D1;
  outC->_L16 = outC->_L4 * outC->_L22;
  outC->_L3 = B2;
  outC->_L7 = outC->_L17 * outC->_L3;
  outC->gama = outC->_L7;
  outC->_L8 = outC->gama;
  outC->_L5 = outC->_L8 / outC->_L16;
  outC->time = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void calculTimeTurn_init_Robot(outC_calculTimeTurn_Robot *outC)
{
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->gama = kcg_lit_float64(0.0);
  outC->time = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void calculTimeTurn_reset_Robot(outC_calculTimeTurn_Robot *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** calculTimeTurn_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

