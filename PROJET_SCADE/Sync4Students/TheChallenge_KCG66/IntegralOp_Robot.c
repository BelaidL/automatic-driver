/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IntegralOp_Robot.h"

/* Robot::IntegralOp/ */
void IntegralOp_Robot(
  /* Error/ */
  kcg_float64 Error,
  outC_IntegralOp_Robot *outC)
{
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L1 = Error;
  outC->_L15 = outC->_L16 == outC->_L1;
  /* _L5= */
  if (outC->init) {
    outC->_L5 = kcg_lit_float64(0.0);
  }
  else {
    outC->_L5 = outC->_L14;
  }
  outC->_L2 = TIMESTEP;
  outC->_L3 = outC->_L1 * outC->_L2;
  outC->_L4 = outC->_L3 + outC->_L5;
  /* _L14= */
  if (outC->_L15) {
    outC->_L14 = outC->_L17;
  }
  else {
    outC->_L14 = outC->_L4;
  }
  outC->IntegRsult = outC->_L14;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void IntegralOp_init_Robot(outC_IntegralOp_Robot *outC)
{
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_true;
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->IntegRsult = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void IntegralOp_reset_Robot(outC_IntegralOp_Robot *outC)
{
  outC->init = kcg_true;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** IntegralOp_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

