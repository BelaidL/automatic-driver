/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DerivatOp_Robot.h"

/* Robot::DerivatOp/ */
void DerivatOp_Robot(/* Error/ */ kcg_float64 Error, outC_DerivatOp_Robot *outC)
{
  outC->_L7 = TIMESTEP;
  outC->_L3 = outC->_L1;
  outC->_L1 = Error;
  outC->_L4 = outC->_L1 - outC->_L3;
  outC->_L5 = outC->_L4 / outC->_L7;
  /* _L2= */
  if (outC->init) {
    outC->_L2 = kcg_lit_float64(0.0);
  }
  else {
    outC->_L2 = outC->_L5;
  }
  outC->deriveRsult = outC->_L2;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void DerivatOp_init_Robot(outC_DerivatOp_Robot *outC)
{
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->deriveRsult = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void DerivatOp_reset_Robot(outC_DerivatOp_Robot *outC)
{
  outC->init = kcg_true;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** DerivatOp_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

