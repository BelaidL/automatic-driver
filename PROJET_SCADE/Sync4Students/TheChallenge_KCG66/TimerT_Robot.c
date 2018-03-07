/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TimerT_Robot.h"

/* Robot::TimerT/ */
void TimerT_Robot(
  /* nbrtick/ */
  kcg_float64 nbrtick,
  /* isTurn/ */
  actionTy_Robot isTurn,
  outC_TimerT_Robot *outC)
{
  outC->_L32 = kcg_lit_float64(1.0);
  /* _L31= */
  if (outC->init) {
    outC->_L31 = kcg_lit_float64(-1.0);
  }
  else {
    outC->_L31 = outC->_L22;
  }
  outC->_L29 = kcg_false;
  outC->_L18 = kcg_true;
  outC->_L19 = outC->_L32 + outC->_L31;
  outC->_L30 = kcg_lit_float64(0.1);
  outC->_L1 = nbrtick;
  outC->_L26 = outC->_L31 > outC->_L1;
  /* _L21= */
  if (outC->_L26) {
    outC->_L21 = outC->_L30;
  }
  else {
    outC->_L21 = outC->_L19;
  }
  outC->_L20 = kcg_lit_float64(0.2);
  outC->_L24 = turn_Robot;
  outC->_L16 = isTurn;
  outC->_L17 = outC->_L16 != outC->_L24;
  /* _L22= */
  if (outC->_L17) {
    outC->_L22 = outC->_L20;
  }
  else {
    outC->_L22 = outC->_L21;
  }
  outC->_L23 = kcg_lit_float64(0.1);
  outC->_L27 = outC->_L23 == outC->_L22;
  /* _L28= */
  if (outC->_L27) {
    outC->_L28 = outC->_L18;
  }
  else {
    outC->_L28 = outC->_L29;
  }
  outC->endOfTurn = outC->_L28;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void TimerT_init_Robot(outC_TimerT_Robot *outC)
{
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L24 = go_Robot;
  outC->_L26 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L16 = go_Robot;
  outC->_L1 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->endOfTurn = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void TimerT_reset_Robot(outC_TimerT_Robot *outC)
{
  outC->init = kcg_true;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TimerT_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

