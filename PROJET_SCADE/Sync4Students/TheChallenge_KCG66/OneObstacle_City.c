/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OneObstacle_City.h"

/* City::OneObstacle/ */
void OneObstacle_City(
  /* param/ */
  paramObstTy_City *param,
  /* time/ */
  kcg_float64 time,
  outC_OneObstacle_City *outC)
{
  kcg_copy_paramObstTy_City(&outC->_L2, param);
  kcg_copy_positionTy(&outC->_L9, &outC->_L2.pos);
  outC->_L11 = outC->_L2.till;
  outC->_L27 = time;
  outC->_L26 = outC->_L27 <= outC->_L11;
  outC->_L10 = outC->_L2.since;
  outC->_L25 = outC->_L10 <= outC->_L27;
  outC->_L24 = outC->_L25 & outC->_L26;
  kcg_copy_positionTy(&outC->_L29.position, &outC->_L9);
  outC->_L29.present = outC->_L24;
  kcg_copy_obstTy(&outC->obstacle, &outC->_L29);
}

#ifndef KCG_USER_DEFINED_INIT
void OneObstacle_init_City(outC_OneObstacle_City *outC)
{
  outC->_L29.position.x = kcg_lit_float64(0.0);
  outC->_L29.position.y = kcg_lit_float64(0.0);
  outC->_L29.present = kcg_true;
  outC->_L2.pos.x = kcg_lit_float64(0.0);
  outC->_L2.pos.y = kcg_lit_float64(0.0);
  outC->_L2.since = kcg_lit_float64(0.0);
  outC->_L2.till = kcg_lit_float64(0.0);
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L9.x = kcg_lit_float64(0.0);
  outC->_L9.y = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->obstacle.position.x = kcg_lit_float64(0.0);
  outC->obstacle.position.y = kcg_lit_float64(0.0);
  outC->obstacle.present = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void OneObstacle_reset_City(outC_OneObstacle_City *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** OneObstacle_City.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

