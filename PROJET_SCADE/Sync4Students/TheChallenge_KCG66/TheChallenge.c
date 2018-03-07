/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TheChallenge.h"

/* TheChallenge/ */
void TheChallenge(inC_TheChallenge *inC, outC_TheChallenge *outC)
{
  /* _L21=(Robot::readIti#1)/ */
  readIti_Robot(inC->itiid, &outC->Context_readIti_1);
  kcg_copy_itiElemArr_Robot(&outC->_L21, &outC->Context_readIti_1.itinerary);
  /* _L26= */
  if (outC->init) {
    outC->_L26.roadColor.red = kcg_lit_uint8(128);
    outC->_L26.roadColor.green = kcg_lit_uint8(128);
    outC->_L26.roadColor.blue = kcg_lit_uint8(128);
    outC->_L26.frontColor.red = kcg_lit_uint8(128);
    outC->_L26.frontColor.green = kcg_lit_uint8(128);
    outC->_L26.frontColor.blue = kcg_lit_uint8(128);
    outC->_L26.sonar = SONARFAR;
  }
  else {
    kcg_copy_sensorsTy(&outC->_L26, &outC->_L15);
  }
  /* _L25= */
  if (outC->init) {
    outC->_L25 = okVal;
  }
  else {
    outC->_L25 = outC->_L14;
  }
  kcg_copy_phaseTy(&outC->_L7, &inC->InitialPhase);
  outC->_L8 = inC->top;
  /* _L11=(Robot::IndividualRobotControl#1)/ */
  IndividualRobotControl_Robot(
    &outC->_L21,
    &outC->_L26,
    outC->_L25,
    &outC->_L7,
    outC->_L8,
    &outC->Context_IndividualRobotControl_1);
  kcg_copy_phaseTy(
    &outC->_L11,
    &outC->Context_IndividualRobotControl_1.RobotPhase);
  outC->_L12 = outC->Context_IndividualRobotControl_1.RobotStatus;
  outC->RobotStatus = outC->_L12;
  outC->_L39 = outC->RobotStatus;
  /* _L36=(City::WallClock#3)/ */
  WallClock_City(outC->_L39, &outC->Context_WallClock_3);
  outC->_L36 = outC->Context_WallClock_3.time;
  outC->time = outC->_L36;
  outC->_L43 = outC->time;
  kcg_copy_phaseTy(&outC->RobotPhase, &outC->_L11);
  kcg_copy_phaseTy(&outC->_L42, &outC->RobotPhase);
  /* _L13=(City::SmartCityControl#1)/ */
  SmartCityControl_City(
    &outC->_L11,
    outC->_L43,
    inC->mapid,
    &outC->Context_SmartCityControl_1);
  kcg_copy_sigTy(&outC->_L13, &outC->Context_SmartCityControl_1.Signalization);
  outC->_L14 = outC->Context_SmartCityControl_1.Interrupt;
  kcg_copy_sensorsTy(&outC->_L15, &outC->Context_SmartCityControl_1.SensorsData);
  kcg_copy_eventTy(&outC->_L16, &outC->Context_SmartCityControl_1.Events);
  kcg_copy_eventTy(&outC->Events, &outC->_L16);
  kcg_copy_eventTy(&outC->_L38, &outC->Events);
  /* _L37=(City::ScoringA#3)/ */
  ScoringA_City(&outC->_L38, outC->_L39, &outC->Context_ScoringA_3);
  outC->_L37 = outC->Context_ScoringA_3.score;
  outC->scoreA = outC->_L37;
  /* _L40=(City::ScoringB#3)/ */
  ScoringB_City(&outC->_L42, &outC->Context_ScoringB_3);
  outC->_L40 = outC->Context_ScoringB_3.score;
  /* _=(Sounds#3)/ */ Sounds(&outC->_L38, outC->_L39, &outC->Context_Sounds_3);
  outC->scoreB = outC->_L40;
  kcg_copy_array_char_255(&outC->_L28, (array_char_255 *) &TEAM);
  kcg_copy_array_char_255(&outC->team, &outC->_L28);
  kcg_copy_sigTy(&outC->Signalization, &outC->_L13);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void TheChallenge_init(outC_TheChallenge *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;

  outC->_L43 = kcg_lit_float64(0.0);
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L37 = kcg_lit_int32(0);
  outC->_L38.lightRun = kcg_true;
  outC->_L38.speedExcess = kcg_true;
  outC->_L38.exitRoad = kcg_true;
  outC->_L38.collisionEvent = kcg_true;
  outC->_L38.dirEvent = kcg_true;
  outC->_L39 = Preparing;
  outC->_L40 = kcg_lit_int32(0);
  outC->_L42.position.x = kcg_lit_float64(0.0);
  outC->_L42.position.y = kcg_lit_float64(0.0);
  outC->_L42.velocity = kcg_lit_float64(0.0);
  outC->_L42.heading = kcg_lit_float64(0.0);
  for (idx = 0; idx < 255; idx++) {
    outC->_L28[idx] = ' ';
  }
  outC->_L26.roadColor.red = kcg_lit_uint8(0);
  outC->_L26.roadColor.green = kcg_lit_uint8(0);
  outC->_L26.roadColor.blue = kcg_lit_uint8(0);
  outC->_L26.frontColor.red = kcg_lit_uint8(0);
  outC->_L26.frontColor.green = kcg_lit_uint8(0);
  outC->_L26.frontColor.blue = kcg_lit_uint8(0);
  outC->_L26.sonar = kcg_lit_int32(0);
  outC->_L25 = waitVal;
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L21[idx1].action = go_Robot;
    outC->_L21[idx1].param = kcg_lit_float64(0.0);
  }
  outC->_L8 = kcg_true;
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L13.TLights[idx2].position.x = kcg_lit_float64(0.0);
    outC->_L13.TLights[idx2].position.y = kcg_lit_float64(0.0);
    outC->_L13.TLights[idx2].light = redQ;
  }
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L13.obstacles[idx3].position.x = kcg_lit_float64(0.0);
    outC->_L13.obstacles[idx3].position.y = kcg_lit_float64(0.0);
    outC->_L13.obstacles[idx3].present = kcg_true;
  }
  outC->_L16.lightRun = kcg_true;
  outC->_L16.speedExcess = kcg_true;
  outC->_L16.exitRoad = kcg_true;
  outC->_L16.collisionEvent = kcg_true;
  outC->_L16.dirEvent = kcg_true;
  outC->_L11.position.x = kcg_lit_float64(0.0);
  outC->_L11.position.y = kcg_lit_float64(0.0);
  outC->_L11.velocity = kcg_lit_float64(0.0);
  outC->_L11.heading = kcg_lit_float64(0.0);
  outC->_L12 = Preparing;
  outC->_L7.position.x = kcg_lit_float64(0.0);
  outC->_L7.position.y = kcg_lit_float64(0.0);
  outC->_L7.velocity = kcg_lit_float64(0.0);
  outC->_L7.heading = kcg_lit_float64(0.0);
  outC->_L14 = waitVal;
  outC->_L15.roadColor.red = kcg_lit_uint8(0);
  outC->_L15.roadColor.green = kcg_lit_uint8(0);
  outC->_L15.roadColor.blue = kcg_lit_uint8(0);
  outC->_L15.frontColor.red = kcg_lit_uint8(0);
  outC->_L15.frontColor.green = kcg_lit_uint8(0);
  outC->_L15.frontColor.blue = kcg_lit_uint8(0);
  outC->_L15.sonar = kcg_lit_int32(0);
  outC->init = kcg_true;
  for (idx4 = 0; idx4 < 255; idx4++) {
    outC->team[idx4] = ' ';
  }
  outC->time = kcg_lit_float64(0.0);
  outC->scoreB = kcg_lit_int32(0);
  outC->scoreA = kcg_lit_int32(0);
  outC->Events.lightRun = kcg_true;
  outC->Events.speedExcess = kcg_true;
  outC->Events.exitRoad = kcg_true;
  outC->Events.collisionEvent = kcg_true;
  outC->Events.dirEvent = kcg_true;
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->Signalization.TLights[idx5].position.x = kcg_lit_float64(0.0);
    outC->Signalization.TLights[idx5].position.y = kcg_lit_float64(0.0);
    outC->Signalization.TLights[idx5].light = redQ;
  }
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->Signalization.obstacles[idx6].position.x = kcg_lit_float64(0.0);
    outC->Signalization.obstacles[idx6].position.y = kcg_lit_float64(0.0);
    outC->Signalization.obstacles[idx6].present = kcg_true;
  }
  outC->RobotStatus = Preparing;
  outC->RobotPhase.position.x = kcg_lit_float64(0.0);
  outC->RobotPhase.position.y = kcg_lit_float64(0.0);
  outC->RobotPhase.velocity = kcg_lit_float64(0.0);
  outC->RobotPhase.heading = kcg_lit_float64(0.0);
  /* _=(Sounds#3)/ */ Sounds_init(&outC->Context_Sounds_3);
  /* _L40=(City::ScoringB#3)/ */ ScoringB_init_City(&outC->Context_ScoringB_3);
  /* _L37=(City::ScoringA#3)/ */ ScoringA_init_City(&outC->Context_ScoringA_3);
  /* _L13=(City::SmartCityControl#1)/ */
  SmartCityControl_init_City(&outC->Context_SmartCityControl_1);
  /* _L36=(City::WallClock#3)/ */ WallClock_init_City(&outC->Context_WallClock_3);
  /* _L11=(Robot::IndividualRobotControl#1)/ */
  IndividualRobotControl_init_Robot(&outC->Context_IndividualRobotControl_1);
  /* _L21=(Robot::readIti#1)/ */ readIti_init_Robot(&outC->Context_readIti_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TheChallenge_reset(outC_TheChallenge *outC)
{
  outC->init = kcg_true;
  /* _=(Sounds#3)/ */ Sounds_reset(&outC->Context_Sounds_3);
  /* _L40=(City::ScoringB#3)/ */ ScoringB_reset_City(&outC->Context_ScoringB_3);
  /* _L37=(City::ScoringA#3)/ */ ScoringA_reset_City(&outC->Context_ScoringA_3);
  /* _L13=(City::SmartCityControl#1)/ */
  SmartCityControl_reset_City(&outC->Context_SmartCityControl_1);
  /* _L36=(City::WallClock#3)/ */
  WallClock_reset_City(&outC->Context_WallClock_3);
  /* _L11=(Robot::IndividualRobotControl#1)/ */
  IndividualRobotControl_reset_Robot(&outC->Context_IndividualRobotControl_1);
  /* _L21=(Robot::readIti#1)/ */ readIti_reset_Robot(&outC->Context_readIti_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TheChallenge.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

