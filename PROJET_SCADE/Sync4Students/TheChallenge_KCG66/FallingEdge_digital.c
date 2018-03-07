/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FallingEdge_digital.h"

/* digital::FallingEdge/ */
void FallingEdge_digital(
  /* FE_Input/ */
  kcg_bool FE_Input,
  outC_FallingEdge_digital *outC)
{
  /* _L4= */
  if (outC->init) {
    outC->_L4 = kcg_false;
  }
  else {
    outC->_L4 = outC->_L1;
  }
  outC->_L1 = FE_Input;
  outC->_L5 = !outC->_L1;
  outC->_L3 = outC->_L4 & outC->_L5;
  /* _L6= */
  if (outC->init) {
    outC->_L6 = kcg_false;
  }
  else {
    outC->_L6 = outC->_L3;
  }
  outC->FE_Output = outC->_L6;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void FallingEdge_init_digital(outC_FallingEdge_digital *outC)
{
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1 = kcg_true;
  outC->init = kcg_true;
  outC->FE_Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void FallingEdge_reset_digital(outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** FallingEdge_digital.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

