/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "vitesseInterval_Robot.h"

/* Robot::vitesseInterval/ */
void vitesseInterval_Robot(
  /* spdIn/ */
  kcg_float64 spdIn,
  outC_vitesseInterval_Robot *outC)
{
  outC->_L1 = spdIn;
  outC->_L9 = kcg_lit_float64(500.0);
  outC->_L10 = outC->_L1 > outC->_L9;
  /* _L11= */
  if (outC->_L10) {
    outC->_L11 = outC->_L9;
  }
  else {
    outC->_L11 = outC->_L1;
  }
  outC->_L4 = kcg_lit_float64(-500.0);
  outC->_L2 = outC->_L1 < outC->_L4;
  /* _L5= */
  if (outC->_L2) {
    outC->_L5 = outC->_L4;
  }
  else {
    outC->_L5 = outC->_L1;
  }
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L14 = outC->_L1 < outC->_L13;
  /* _L12= */
  if (outC->_L14) {
    outC->_L12 = outC->_L5;
  }
  else {
    outC->_L12 = outC->_L11;
  }
  outC->spdOut = outC->_L12;
}

#ifndef KCG_USER_DEFINED_INIT
void vitesseInterval_init_Robot(outC_vitesseInterval_Robot *outC)
{
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_lit_float64(0.0);
  outC->spdOut = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void vitesseInterval_reset_Robot(outC_vitesseInterval_Robot *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** vitesseInterval_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

