/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ia_Robot.h"

/* Robot::ia/ */
void ia_Robot(
  /* Itinerary/ */
  itiElemArr_Robot *Itinerary,
  /* SensorsData/ */
  sensorsTy *SensorsData,
  outC_ia_Robot *outC)
{
  /* ARRIVINGV/ */
  kcg_bool ARRIVINGV_partial;
  /* Rotationalspeed/ */
  wheelsTy_Robot Rotationalspeed_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* ARRIVINGV/ */
  kcg_bool _1_ARRIVINGV_partial;
  /* Rotationalspeed/ */
  wheelsTy_Robot _2_Rotationalspeed_partial;
  /* SM1: */
  SSM_ST_SM1 _3_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _4_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _5_SM1_fired_partial;
  /* ARRIVINGV/ */
  kcg_bool _6_ARRIVINGV_partial;
  /* Rotationalspeed/ */
  wheelsTy_Robot _7_Rotationalspeed_partial;
  /* SM1: */
  SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _10_SM1_fired_partial;
  /* ARRIVINGV/ */
  kcg_bool _11_ARRIVINGV_partial;
  /* Rotationalspeed/ */
  wheelsTy_Robot _12_Rotationalspeed_partial;
  /* SM1: */
  SSM_ST_SM1 _13_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _14_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _15_SM1_fired_partial;
  /* ARRIVINGV/ */
  kcg_bool _16_ARRIVINGV_partial;
  /* Rotationalspeed/ */
  wheelsTy_Robot _17_Rotationalspeed_partial;
  /* SM1: */
  SSM_ST_SM1 _18_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _19_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _20_SM1_fired_partial;
  /* ARRIVINGV/ */
  kcg_bool _21_ARRIVINGV_partial;
  /* Rotationalspeed/ */
  wheelsTy_Robot _22_Rotationalspeed_partial;
  /* SM1: */
  SSM_ST_SM1 _23_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _24_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _25_SM1_fired_partial;
  /* ARRIVINGV/ */
  kcg_bool _26_ARRIVINGV_partial;
  /* Rotationalspeed/ */
  wheelsTy_Robot _27_Rotationalspeed_partial;
  /* SM1: */
  SSM_ST_SM1 _28_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _29_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _30_SM1_fired_partial;
  /* ARRIVINGV/ */
  kcg_bool _31_ARRIVINGV_partial;
  /* Rotationalspeed/ */
  wheelsTy_Robot _32_Rotationalspeed_partial;
  /* SM1: */
  SSM_ST_SM1 _33_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _34_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _35_SM1_fired_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_act_partial;
  /* SM1: */
  kcg_bool SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_strong_partial;
  /* SM1:depart:<3> */
  kcg_bool tr_3_guard_depart_SM1;
  /* SM1:depart:<2> */
  kcg_bool tr_2_guard_depart_SM1;
  /* SM1:depart:<1> */
  kcg_bool tr_1_guard_depart_SM1;
  /* SM1: */
  SSM_ST_SM1 _36_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _37_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _38_SM1_fired_strong_partial;
  /* SM1:Go:<4> */
  kcg_bool tr_4_guard_Go_SM1;
  /* SM1:Go:<3> */
  kcg_bool tr_3_guard_Go_SM1;
  /* SM1:Go:<2> */
  kcg_bool tr_2_guard_Go_SM1;
  /* SM1:Go:<1> */
  kcg_bool tr_1_guard_Go_SM1;
  /* SM1: */
  SSM_ST_SM1 _39_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _40_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _41_SM1_fired_strong_partial;
  /* SM1:turn:<1> */
  kcg_bool tr_1_guard_turn_SM1;
  /* SM1: */
  SSM_ST_SM1 _42_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _43_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _44_SM1_fired_strong_partial;
  /* SM1: */
  SSM_ST_SM1 _45_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _46_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _47_SM1_fired_strong_partial;
  /* SM1:light:<1> */
  kcg_bool tr_1_guard_light_SM1;
  /* SM1: */
  SSM_ST_SM1 _48_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _49_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _50_SM1_fired_strong_partial;
  /* SM1:Amber:<1> */
  kcg_bool tr_1_guard_Amber_SM1;
  /* SM1: */
  SSM_ST_SM1 _51_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _52_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _53_SM1_fired_strong_partial;
  /* SM1:GoAHead:<4> */
  kcg_bool tr_4_guard_GoAHead_SM1;
  /* SM1:GoAHead:<3> */
  kcg_bool tr_3_guard_GoAHead_SM1;
  /* SM1:GoAHead:<2> */
  kcg_bool tr_2_guard_GoAHead_SM1;
  /* SM1:GoAHead:<1> */
  kcg_bool tr_1_guard_GoAHead_SM1;
  /* SM1: */
  SSM_ST_SM1 _54_SM1_state_act_partial;
  /* SM1: */
  kcg_bool _55_SM1_reset_act_partial;
  /* SM1: */
  SSM_TR_SM1 _56_SM1_fired_strong_partial;
  /* SM1:AfterTurn:<2> */
  kcg_bool tr_2_guard_AfterTurn_SM1;
  /* SM1:AfterTurn:<1> */
  kcg_bool tr_1_guard_AfterTurn_SM1;
  kcg_bool noname;
  /* Rotationalspeed/ */
  wheelsTy_Robot last_Rotationalspeed;
  /* ARRIVINGV/ */
  kcg_bool last_ARRIVINGV;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  kcg_copy_wheelsTy_Robot(&last_Rotationalspeed, &outC->Rotationalspeed);
  last_ARRIVINGV = outC->ARRIVINGV;
  kcg_copy_sensorsTy(&outC->_L4, SensorsData);
  kcg_copy_colorTy(&outC->_L9, &outC->_L4.frontColor);
  kcg_copy_colorTy(&outC->frontcolor, &outC->_L9);
  kcg_copy_colorTy(&outC->_L31, &outC->frontcolor);
  outC->_L10 = outC->_L4.sonar;
  outC->sonar = outC->_L10;
  outC->_L32 = outC->sonar;
  /* _L27=(Robot::FrontDitect#1)/ */
  FrontDitect_Robot(&outC->_L31, outC->_L32, &outC->Context_FrontDitect_1);
  outC->_L27 = outC->Context_FrontDitect_1.isRed;
  outC->_L28 = outC->Context_FrontDitect_1.isOrange;
  outC->_L29 = outC->Context_FrontDitect_1.isGreen;
  outC->_L30 = outC->Context_FrontDitect_1.amber;
  outC->_L122 = !outC->_L27;
  outC->_L121 = outC->_L122 | outC->_L29;
  kcg_copy_colorTy(&outC->_L8, &outC->_L4.roadColor);
  kcg_copy_colorTy(&outC->roadColor, &outC->_L8);
  kcg_copy_colorTy(&outC->_L46, &outC->roadColor);
  kcg_copy_colorTy(&outC->_L45, (colorTy *) &GREEN);
  outC->_L40 = kcg_comp_colorTy(&outC->_L45, &outC->_L46);
  kcg_copy_colorTy(&outC->_L44, (colorTy *) &RED);
  outC->_L41 = kcg_comp_colorTy(&outC->_L44, &outC->_L46);
  outC->_L120 = outC->_L41 | outC->_L40;
  kcg_copy_colorTy(&outC->_L5, &outC->roadColor);
  kcg_copy_itiElemArr_Robot(&outC->_L12, Itinerary);
  /* _L25= */
  if (outC->init) {
    outC->_L25 = kcg_false;
  }
  else {
    outC->_L25 = outC->_L24;
  }
  /* _L13=(Robot::ColorDetect#1)/ */
  ColorDetect_Robot(
    &outC->_L5,
    &outC->_L12,
    outC->_L25,
    &outC->Context_ColorDetect_1);
  outC->_L13 = outC->Context_ColorDetect_1.action;
  outC->_L26 = outC->Context_ColorDetect_1.endRed;
  outC->_L109 = outC->Context_ColorDetect_1.endGreen;
  outC->_L110 = outC->Context_ColorDetect_1.value;
  outC->endGreen = outC->_L109;
  outC->_L119 = outC->endGreen;
  outC->value = outC->_L110;
  outC->_L22 = outC->value;
  outC->action = outC->_L13;
  outC->_L117 = outC->action;
  /* _L21=(Robot::TurnAction#4)/ */
  TurnAction_Robot(
    outC->_L22,
    outC->_L117,
    outC->_L119,
    &outC->Context_TurnAction_4);
  outC->_L21 = outC->Context_TurnAction_4.endTurn;
  outC->_L118 = outC->Context_TurnAction_4.nearRoad;
  outC->nearRoad = outC->_L118;
  outC->beginGOrR = outC->_L120;
  outC->_L33 = !outC->_L30;
  outC->notAmber = outC->_L33;
  outC->amber = outC->_L30;
  outC->isGOrNR = outC->_L121;
  noname = outC->_L28;
  outC->light = outC->_L26;
  outC->endTurn = outC->_L21;
  outC->_L24 = outC->endTurn;
  outC->_L18 = outC->action;
  /* _L15=(Robot::isAction#1)/ */
  isAction_Robot(outC->_L18, &outC->Context_isAction_1);
  outC->_L15 = outC->Context_isAction_1.isturn;
  outC->_L16 = outC->Context_isAction_1.isGo;
  outC->_L17 = outC->Context_isAction_1.isStop;
  outC->isStop = outC->_L17;
  outC->isTurn = outC->_L15;
  outC->isGo = outC->_L16;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_AfterTurn_SM1 :
      tr_2_guard_AfterTurn_SM1 = outC->isStop;
      tr_1_guard_AfterTurn_SM1 = outC->nearRoad;
      if (tr_1_guard_AfterTurn_SM1) {
        _54_SM1_state_act_partial = SSM_st_Go_SM1;
      }
      else if (tr_2_guard_AfterTurn_SM1) {
        _54_SM1_state_act_partial = SSM_st_Stop_SM1;
      }
      else {
        _54_SM1_state_act_partial = SSM_st_AfterTurn_SM1;
      }
      outC->SM1_state_act = _54_SM1_state_act_partial;
      break;
    case SSM_st_GoAHead_SM1 :
      tr_4_guard_GoAHead_SM1 = outC->light;
      tr_3_guard_GoAHead_SM1 = outC->isGo & outC->endGreen;
      tr_2_guard_GoAHead_SM1 = outC->isStop;
      tr_1_guard_GoAHead_SM1 = outC->isTurn;
      if (tr_1_guard_GoAHead_SM1) {
        _51_SM1_state_act_partial = SSM_st_turn_SM1;
      }
      else if (tr_2_guard_GoAHead_SM1) {
        _51_SM1_state_act_partial = SSM_st_Stop_SM1;
      }
      else if (tr_3_guard_GoAHead_SM1) {
        _51_SM1_state_act_partial = SSM_st_AfterTurn_SM1;
      }
      else if (tr_4_guard_GoAHead_SM1) {
        _51_SM1_state_act_partial = SSM_st_light_SM1;
      }
      else {
        _51_SM1_state_act_partial = SSM_st_GoAHead_SM1;
      }
      outC->SM1_state_act = _51_SM1_state_act_partial;
      break;
    case SSM_st_Amber_SM1 :
      tr_1_guard_Amber_SM1 = outC->notAmber;
      if (tr_1_guard_Amber_SM1) {
        _48_SM1_state_act_partial = SSM_st_Go_SM1;
      }
      else {
        _48_SM1_state_act_partial = SSM_st_Amber_SM1;
      }
      outC->SM1_state_act = _48_SM1_state_act_partial;
      break;
    case SSM_st_light_SM1 :
      tr_1_guard_light_SM1 = outC->isGOrNR;
      if (tr_1_guard_light_SM1) {
        _45_SM1_state_act_partial = SSM_st_Go_SM1;
      }
      else {
        _45_SM1_state_act_partial = SSM_st_light_SM1;
      }
      outC->SM1_state_act = _45_SM1_state_act_partial;
      break;
    case SSM_st_Stop_SM1 :
      _42_SM1_state_act_partial = SSM_st_Stop_SM1;
      outC->SM1_state_act = _42_SM1_state_act_partial;
      break;
    case SSM_st_turn_SM1 :
      tr_1_guard_turn_SM1 = outC->endTurn;
      if (tr_1_guard_turn_SM1) {
        _39_SM1_state_act_partial = SSM_st_AfterTurn_SM1;
      }
      else {
        _39_SM1_state_act_partial = SSM_st_turn_SM1;
      }
      outC->SM1_state_act = _39_SM1_state_act_partial;
      break;
    case SSM_st_Go_SM1 :
      tr_4_guard_Go_SM1 = outC->isStop;
      tr_3_guard_Go_SM1 = outC->isTurn;
      tr_2_guard_Go_SM1 = outC->beginGOrR;
      tr_1_guard_Go_SM1 = outC->amber;
      if (tr_1_guard_Go_SM1) {
        _36_SM1_state_act_partial = SSM_st_Amber_SM1;
      }
      else if (tr_2_guard_Go_SM1) {
        _36_SM1_state_act_partial = SSM_st_GoAHead_SM1;
      }
      else if (tr_3_guard_Go_SM1) {
        _36_SM1_state_act_partial = SSM_st_turn_SM1;
      }
      else if (tr_4_guard_Go_SM1) {
        _36_SM1_state_act_partial = SSM_st_Stop_SM1;
      }
      else {
        _36_SM1_state_act_partial = SSM_st_Go_SM1;
      }
      outC->SM1_state_act = _36_SM1_state_act_partial;
      break;
    case SSM_st_depart_SM1 :
      tr_3_guard_depart_SM1 = outC->isStop;
      tr_2_guard_depart_SM1 = outC->isTurn;
      tr_1_guard_depart_SM1 = outC->isGo;
      if (tr_1_guard_depart_SM1) {
        SM1_state_act_partial = SSM_st_Go_SM1;
      }
      else if (tr_2_guard_depart_SM1) {
        SM1_state_act_partial = SSM_st_turn_SM1;
      }
      else if (tr_3_guard_depart_SM1) {
        SM1_state_act_partial = SSM_st_Stop_SM1;
      }
      else {
        SM1_state_act_partial = SSM_st_depart_SM1;
      }
      outC->SM1_state_act = SM1_state_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_AfterTurn_SM1 :
      _31_ARRIVINGV_partial = last_ARRIVINGV;
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_AfterTurn_SM1 :
      if (tr_1_guard_AfterTurn_SM1) {
        _56_SM1_fired_strong_partial = SSM_TR_AfterTurn_Go_1_AfterTurn_SM1;
      }
      else if (tr_2_guard_AfterTurn_SM1) {
        _56_SM1_fired_strong_partial = SSM_TR_AfterTurn_Stop_2_AfterTurn_SM1;
      }
      else {
        _56_SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _56_SM1_fired_strong_partial;
      break;
    case SSM_st_GoAHead_SM1 :
      if (tr_1_guard_GoAHead_SM1) {
        _53_SM1_fired_strong_partial = SSM_TR_GoAHead_turn_1_GoAHead_SM1;
      }
      else if (tr_2_guard_GoAHead_SM1) {
        _53_SM1_fired_strong_partial = SSM_TR_GoAHead_Stop_2_GoAHead_SM1;
      }
      else if (tr_3_guard_GoAHead_SM1) {
        _53_SM1_fired_strong_partial = SSM_TR_GoAHead_AfterTurn_3_GoAHead_SM1;
      }
      else if (tr_4_guard_GoAHead_SM1) {
        _53_SM1_fired_strong_partial = SSM_TR_GoAHead_light_4_GoAHead_SM1;
      }
      else {
        _53_SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _53_SM1_fired_strong_partial;
      break;
    case SSM_st_Amber_SM1 :
      if (tr_1_guard_Amber_SM1) {
        _50_SM1_fired_strong_partial = SSM_TR_Amber_Go_1_Amber_SM1;
      }
      else {
        _50_SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _50_SM1_fired_strong_partial;
      break;
    case SSM_st_light_SM1 :
      if (tr_1_guard_light_SM1) {
        _47_SM1_fired_strong_partial = SSM_TR_light_Go_1_light_SM1;
      }
      else {
        _47_SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _47_SM1_fired_strong_partial;
      break;
    case SSM_st_Stop_SM1 :
      _44_SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _44_SM1_fired_strong_partial;
      break;
    case SSM_st_turn_SM1 :
      if (tr_1_guard_turn_SM1) {
        _41_SM1_fired_strong_partial = SSM_TR_turn_AfterTurn_1_turn_SM1;
      }
      else {
        _41_SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _41_SM1_fired_strong_partial;
      break;
    case SSM_st_Go_SM1 :
      if (tr_1_guard_Go_SM1) {
        _38_SM1_fired_strong_partial = SSM_TR_Go_Amber_1_Go_SM1;
      }
      else if (tr_2_guard_Go_SM1) {
        _38_SM1_fired_strong_partial = SSM_TR_Go_GoAHead_2_Go_SM1;
      }
      else if (tr_3_guard_Go_SM1) {
        _38_SM1_fired_strong_partial = SSM_TR_Go_turn_3_Go_SM1;
      }
      else if (tr_4_guard_Go_SM1) {
        _38_SM1_fired_strong_partial = SSM_TR_Go_Stop_4_Go_SM1;
      }
      else {
        _38_SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _38_SM1_fired_strong_partial;
      break;
    case SSM_st_depart_SM1 :
      if (tr_1_guard_depart_SM1) {
        SM1_fired_strong_partial = SSM_TR_depart_Go_1_depart_SM1;
      }
      else if (tr_2_guard_depart_SM1) {
        SM1_fired_strong_partial = SSM_TR_depart_turn_2_depart_SM1;
      }
      else if (tr_3_guard_depart_SM1) {
        SM1_fired_strong_partial = SSM_TR_depart_Stop_3_depart_SM1;
      }
      else {
        SM1_fired_strong_partial = _6_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_AfterTurn_SM1 :
      _35_SM1_fired_partial = outC->SM1_fired_strong;
      _34_SM1_reset_nxt_partial = kcg_false;
      _33_SM1_state_nxt_partial = SSM_st_AfterTurn_SM1;
      outC->_L2_AfterTurn_SM1 = outC->value;
      /* SM1:AfterTurn:_L1=(Robot::GoAHead#9)/ */
      GoAHead_Robot(outC->_L2_AfterTurn_SM1, &outC->Context_GoAHead_9);
      kcg_copy_wheelsTy_Robot(
        &outC->_L1_AfterTurn_SM1,
        &outC->Context_GoAHead_9.WheelsSpd);
      kcg_copy_wheelsTy_Robot(&_32_Rotationalspeed_partial, &outC->_L1_AfterTurn_SM1);
      break;
    case SSM_st_GoAHead_SM1 :
      _26_ARRIVINGV_partial = last_ARRIVINGV;
      _30_SM1_fired_partial = outC->SM1_fired_strong;
      _29_SM1_reset_nxt_partial = kcg_false;
      _28_SM1_state_nxt_partial = SSM_st_GoAHead_SM1;
      outC->_L3_GoAHead_SM1 = outC->value;
      /* SM1:GoAHead:_L2=(Robot::GoAHead#1)/ */
      GoAHead_Robot(outC->_L3_GoAHead_SM1, &outC->Context_GoAHead_1);
      kcg_copy_wheelsTy_Robot(
        &outC->_L2_GoAHead_SM1,
        &outC->Context_GoAHead_1.WheelsSpd);
      kcg_copy_wheelsTy_Robot(&_27_Rotationalspeed_partial, &outC->_L2_GoAHead_SM1);
      break;
    case SSM_st_Amber_SM1 :
      _21_ARRIVINGV_partial = last_ARRIVINGV;
      _25_SM1_fired_partial = outC->SM1_fired_strong;
      _24_SM1_reset_nxt_partial = kcg_false;
      _23_SM1_state_nxt_partial = SSM_st_Amber_SM1;
      outC->_L4_Amber_SM1 = kcg_lit_float64(0.0);
      /* SM1:Amber:_L3=(Robot::StopAction#4)/ */
      StopAction_Robot(outC->_L4_Amber_SM1, &outC->Context_StopAction_4);
      kcg_copy_wheelsTy_Robot(
        &outC->_L3_Amber_SM1,
        &outC->Context_StopAction_4.wheelsSpd);
      kcg_copy_wheelsTy_Robot(&_22_Rotationalspeed_partial, &outC->_L3_Amber_SM1);
      break;
    case SSM_st_light_SM1 :
      _16_ARRIVINGV_partial = last_ARRIVINGV;
      _20_SM1_fired_partial = outC->SM1_fired_strong;
      _19_SM1_reset_nxt_partial = kcg_false;
      _18_SM1_state_nxt_partial = SSM_st_light_SM1;
      outC->_L2_light_SM1 = kcg_lit_float64(0.0);
      /* SM1:light:_L1=(Robot::StopAction#2)/ */
      StopAction_Robot(outC->_L2_light_SM1, &outC->Context_StopAction_2);
      kcg_copy_wheelsTy_Robot(
        &outC->_L1_light_SM1,
        &outC->Context_StopAction_2.wheelsSpd);
      kcg_copy_wheelsTy_Robot(&_17_Rotationalspeed_partial, &outC->_L1_light_SM1);
      break;
    case SSM_st_Stop_SM1 :
      _15_SM1_fired_partial = outC->SM1_fired_strong;
      _14_SM1_reset_nxt_partial = kcg_false;
      _13_SM1_state_nxt_partial = SSM_st_Stop_SM1;
      outC->_L3_Stop_SM1 = kcg_true;
      _11_ARRIVINGV_partial = outC->_L3_Stop_SM1;
      outC->_L2_Stop_SM1 = kcg_lit_float64(0.0);
      /* SM1:Stop:_L1=(Robot::StopAction#1)/ */
      StopAction_Robot(outC->_L2_Stop_SM1, &outC->Context_StopAction_1);
      kcg_copy_wheelsTy_Robot(
        &outC->_L1_Stop_SM1,
        &outC->Context_StopAction_1.wheelsSpd);
      kcg_copy_wheelsTy_Robot(&_12_Rotationalspeed_partial, &outC->_L1_Stop_SM1);
      break;
    case SSM_st_turn_SM1 :
      _6_ARRIVINGV_partial = last_ARRIVINGV;
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_turn_SM1;
      outC->_L4_turn_SM1 = outC->value;
      /* SM1:turn:_L1=(Robot::Turn#1)/ */
      Turn_Robot(outC->_L4_turn_SM1, &outC->Context_Turn_1);
      kcg_copy_wheelsTy_Robot(&outC->_L1_turn_SM1, &outC->Context_Turn_1.RotationS);
      kcg_copy_wheelsTy_Robot(&_7_Rotationalspeed_partial, &outC->_L1_turn_SM1);
      break;
    case SSM_st_Go_SM1 :
      _5_SM1_fired_partial = outC->SM1_fired_strong;
      _4_SM1_reset_nxt_partial = kcg_false;
      _3_SM1_state_nxt_partial = SSM_st_Go_SM1;
      kcg_copy_colorTy(&outC->_L15_Go_SM1, &outC->roadColor);
      outC->_L16_Go_SM1 = outC->value;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  /* SM1: */
  switch (outC->SM1_state_sel) {
    case SSM_st_AfterTurn_SM1 :
      if (tr_1_guard_AfterTurn_SM1) {
        _55_SM1_reset_act_partial = kcg_true;
      }
      else {
        _55_SM1_reset_act_partial = tr_2_guard_AfterTurn_SM1;
      }
      outC->SM1_reset_act = _55_SM1_reset_act_partial;
      break;
    case SSM_st_GoAHead_SM1 :
      if (tr_1_guard_GoAHead_SM1) {
        _52_SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_GoAHead_SM1) {
        _52_SM1_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_GoAHead_SM1) {
        _52_SM1_reset_act_partial = kcg_true;
      }
      else {
        _52_SM1_reset_act_partial = tr_4_guard_GoAHead_SM1;
      }
      outC->SM1_reset_act = _52_SM1_reset_act_partial;
      break;
    case SSM_st_Amber_SM1 :
      _49_SM1_reset_act_partial = tr_1_guard_Amber_SM1;
      outC->SM1_reset_act = _49_SM1_reset_act_partial;
      break;
    case SSM_st_light_SM1 :
      _46_SM1_reset_act_partial = tr_1_guard_light_SM1;
      outC->SM1_reset_act = _46_SM1_reset_act_partial;
      break;
    case SSM_st_Stop_SM1 :
      _43_SM1_reset_act_partial = kcg_false;
      outC->SM1_reset_act = _43_SM1_reset_act_partial;
      break;
    case SSM_st_turn_SM1 :
      _40_SM1_reset_act_partial = tr_1_guard_turn_SM1;
      outC->SM1_reset_act = _40_SM1_reset_act_partial;
      break;
    case SSM_st_Go_SM1 :
      if (tr_1_guard_Go_SM1) {
        _37_SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_Go_SM1) {
        _37_SM1_reset_act_partial = kcg_true;
      }
      else if (tr_3_guard_Go_SM1) {
        _37_SM1_reset_act_partial = kcg_true;
      }
      else {
        _37_SM1_reset_act_partial = tr_4_guard_Go_SM1;
      }
      outC->SM1_reset_act = _37_SM1_reset_act_partial;
      break;
    case SSM_st_depart_SM1 :
      if (tr_1_guard_depart_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else if (tr_2_guard_depart_SM1) {
        SM1_reset_act_partial = kcg_true;
      }
      else {
        SM1_reset_act_partial = tr_3_guard_depart_SM1;
      }
      outC->SM1_reset_act = SM1_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_AfterTurn_SM1 :
      outC->ARRIVINGV = _31_ARRIVINGV_partial;
      kcg_copy_wheelsTy_Robot(&outC->Rotationalspeed, &_32_Rotationalspeed_partial);
      outC->SM1_state_nxt = _33_SM1_state_nxt_partial;
      break;
    case SSM_st_GoAHead_SM1 :
      outC->ARRIVINGV = _26_ARRIVINGV_partial;
      kcg_copy_wheelsTy_Robot(&outC->Rotationalspeed, &_27_Rotationalspeed_partial);
      outC->SM1_state_nxt = _28_SM1_state_nxt_partial;
      break;
    case SSM_st_Amber_SM1 :
      outC->ARRIVINGV = _21_ARRIVINGV_partial;
      kcg_copy_wheelsTy_Robot(&outC->Rotationalspeed, &_22_Rotationalspeed_partial);
      outC->SM1_state_nxt = _23_SM1_state_nxt_partial;
      break;
    case SSM_st_light_SM1 :
      outC->ARRIVINGV = _16_ARRIVINGV_partial;
      kcg_copy_wheelsTy_Robot(&outC->Rotationalspeed, &_17_Rotationalspeed_partial);
      outC->SM1_state_nxt = _18_SM1_state_nxt_partial;
      break;
    case SSM_st_Stop_SM1 :
      outC->ARRIVINGV = _11_ARRIVINGV_partial;
      kcg_copy_wheelsTy_Robot(&outC->Rotationalspeed, &_12_Rotationalspeed_partial);
      outC->SM1_state_nxt = _13_SM1_state_nxt_partial;
      break;
    case SSM_st_turn_SM1 :
      outC->ARRIVINGV = _6_ARRIVINGV_partial;
      kcg_copy_wheelsTy_Robot(&outC->Rotationalspeed, &_7_Rotationalspeed_partial);
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      break;
    case SSM_st_Go_SM1 :
      if (outC->SM1_reset_act) {
        /* SM1:Go:_L17=(Robot::GoAction#6)/ */
        GoAction_reset_Robot(&outC->Context_GoAction_6);
      }
      /* SM1:Go:_L17=(Robot::GoAction#6)/ */
      GoAction_Robot(
        &outC->_L15_Go_SM1,
        outC->_L16_Go_SM1,
        &outC->Context_GoAction_6);
      kcg_copy_wheelsTy_Robot(
        &outC->_L17_Go_SM1,
        &outC->Context_GoAction_6.WheelsSpd);
      kcg_copy_wheelsTy_Robot(&_2_Rotationalspeed_partial, &outC->_L17_Go_SM1);
      outC->_L14_Go_SM1 = kcg_false;
      _1_ARRIVINGV_partial = outC->_L14_Go_SM1;
      outC->ARRIVINGV = _1_ARRIVINGV_partial;
      kcg_copy_wheelsTy_Robot(&outC->Rotationalspeed, &_2_Rotationalspeed_partial);
      outC->SM1_state_nxt = _3_SM1_state_nxt_partial;
      break;
    case SSM_st_depart_SM1 :
      kcg_copy_wheelsTy_Robot(&Rotationalspeed_partial, &last_Rotationalspeed);
      ARRIVINGV_partial = last_ARRIVINGV;
      SM1_fired_partial = outC->SM1_fired_strong;
      SM1_reset_nxt_partial = kcg_false;
      SM1_state_nxt_partial = SSM_st_depart_SM1;
      outC->ARRIVINGV = ARRIVINGV_partial;
      kcg_copy_wheelsTy_Robot(&outC->Rotationalspeed, &Rotationalspeed_partial);
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_AfterTurn_SM1 :
      outC->SM1_reset_nxt = _34_SM1_reset_nxt_partial;
      outC->SM1_fired = _35_SM1_fired_partial;
      break;
    case SSM_st_GoAHead_SM1 :
      outC->SM1_reset_nxt = _29_SM1_reset_nxt_partial;
      outC->SM1_fired = _30_SM1_fired_partial;
      break;
    case SSM_st_Amber_SM1 :
      outC->SM1_reset_nxt = _24_SM1_reset_nxt_partial;
      outC->SM1_fired = _25_SM1_fired_partial;
      break;
    case SSM_st_light_SM1 :
      outC->SM1_reset_nxt = _19_SM1_reset_nxt_partial;
      outC->SM1_fired = _20_SM1_fired_partial;
      break;
    case SSM_st_Stop_SM1 :
      outC->SM1_reset_nxt = _14_SM1_reset_nxt_partial;
      outC->SM1_fired = _15_SM1_fired_partial;
      break;
    case SSM_st_turn_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_Go_SM1 :
      outC->SM1_reset_nxt = _4_SM1_reset_nxt_partial;
      outC->SM1_fired = _5_SM1_fired_partial;
      break;
    case SSM_st_depart_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  kcg_copy_wheelsTy_Robot(&outC->_L14, &outC->Rotationalspeed);
  kcg_copy_wheelsTy_Robot(&outC->Rotatioalspeed, &outC->_L14);
  outC->_L1 = outC->ARRIVINGV;
  outC->ARRIVING = outC->_L1;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ia_init_Robot(outC_ia_Robot *outC)
{
  kcg_size idx;

  outC->_L122 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L120 = kcg_true;
  outC->_L119 = kcg_true;
  outC->_L118 = kcg_true;
  outC->_L117 = go_Robot;
  outC->_L25 = kcg_true;
  outC->_L110 = kcg_lit_float64(0.0);
  outC->_L109 = kcg_true;
  outC->_L46.red = kcg_lit_uint8(0);
  outC->_L46.green = kcg_lit_uint8(0);
  outC->_L46.blue = kcg_lit_uint8(0);
  outC->_L40 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L44.red = kcg_lit_uint8(0);
  outC->_L44.green = kcg_lit_uint8(0);
  outC->_L44.blue = kcg_lit_uint8(0);
  outC->_L45.red = kcg_lit_uint8(0);
  outC->_L45.green = kcg_lit_uint8(0);
  outC->_L45.blue = kcg_lit_uint8(0);
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_lit_int32(0);
  outC->_L31.red = kcg_lit_uint8(0);
  outC->_L31.green = kcg_lit_uint8(0);
  outC->_L31.blue = kcg_lit_uint8(0);
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L13 = go_Robot;
  for (idx = 0; idx < 50; idx++) {
    outC->_L12[idx].action = go_Robot;
    outC->_L12[idx].param = kcg_lit_float64(0.0);
  }
  outC->_L5.red = kcg_lit_uint8(0);
  outC->_L5.green = kcg_lit_uint8(0);
  outC->_L5.blue = kcg_lit_uint8(0);
  outC->_L18 = go_Robot;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L4.roadColor.red = kcg_lit_uint8(0);
  outC->_L4.roadColor.green = kcg_lit_uint8(0);
  outC->_L4.roadColor.blue = kcg_lit_uint8(0);
  outC->_L4.frontColor.red = kcg_lit_uint8(0);
  outC->_L4.frontColor.green = kcg_lit_uint8(0);
  outC->_L4.frontColor.blue = kcg_lit_uint8(0);
  outC->_L4.sonar = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9.red = kcg_lit_uint8(0);
  outC->_L9.green = kcg_lit_uint8(0);
  outC->_L9.blue = kcg_lit_uint8(0);
  outC->_L8.red = kcg_lit_uint8(0);
  outC->_L8.green = kcg_lit_uint8(0);
  outC->_L8.blue = kcg_lit_uint8(0);
  outC->_L14.left = kcg_lit_float64(0.0);
  outC->_L14.right = kcg_lit_float64(0.0);
  outC->nearRoad = kcg_true;
  outC->endGreen = kcg_true;
  outC->beginGOrR = kcg_true;
  outC->notAmber = kcg_true;
  outC->amber = kcg_true;
  outC->isGOrNR = kcg_true;
  outC->sonar = kcg_lit_int32(0);
  outC->frontcolor.red = kcg_lit_uint8(0);
  outC->frontcolor.green = kcg_lit_uint8(0);
  outC->frontcolor.blue = kcg_lit_uint8(0);
  outC->light = kcg_true;
  outC->endTurn = kcg_true;
  outC->isStop = kcg_true;
  outC->isTurn = kcg_true;
  outC->isGo = kcg_true;
  outC->roadColor.red = kcg_lit_uint8(0);
  outC->roadColor.green = kcg_lit_uint8(0);
  outC->roadColor.blue = kcg_lit_uint8(0);
  outC->action = go_Robot;
  outC->value = kcg_lit_float64(0.0);
  outC->SM1_fired = _6_SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = _6_SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_depart_SM1;
  outC->SM1_state_sel = SSM_st_depart_SM1;
  outC->_L1_AfterTurn_SM1.left = kcg_lit_float64(0.0);
  outC->_L1_AfterTurn_SM1.right = kcg_lit_float64(0.0);
  outC->_L2_AfterTurn_SM1 = kcg_lit_float64(0.0);
  outC->_L2_GoAHead_SM1.left = kcg_lit_float64(0.0);
  outC->_L2_GoAHead_SM1.right = kcg_lit_float64(0.0);
  outC->_L3_GoAHead_SM1 = kcg_lit_float64(0.0);
  outC->_L4_Amber_SM1 = kcg_lit_float64(0.0);
  outC->_L3_Amber_SM1.left = kcg_lit_float64(0.0);
  outC->_L3_Amber_SM1.right = kcg_lit_float64(0.0);
  outC->_L2_light_SM1 = kcg_lit_float64(0.0);
  outC->_L1_light_SM1.left = kcg_lit_float64(0.0);
  outC->_L1_light_SM1.right = kcg_lit_float64(0.0);
  outC->_L1_Stop_SM1.left = kcg_lit_float64(0.0);
  outC->_L1_Stop_SM1.right = kcg_lit_float64(0.0);
  outC->_L2_Stop_SM1 = kcg_lit_float64(0.0);
  outC->_L3_Stop_SM1 = kcg_true;
  outC->_L1_turn_SM1.left = kcg_lit_float64(0.0);
  outC->_L1_turn_SM1.right = kcg_lit_float64(0.0);
  outC->_L4_turn_SM1 = kcg_lit_float64(0.0);
  outC->_L14_Go_SM1 = kcg_true;
  outC->_L17_Go_SM1.left = kcg_lit_float64(0.0);
  outC->_L17_Go_SM1.right = kcg_lit_float64(0.0);
  outC->_L16_Go_SM1 = kcg_lit_float64(0.0);
  outC->_L15_Go_SM1.red = kcg_lit_uint8(0);
  outC->_L15_Go_SM1.green = kcg_lit_uint8(0);
  outC->_L15_Go_SM1.blue = kcg_lit_uint8(0);
  outC->_L24 = kcg_true;
  outC->init = kcg_true;
  outC->ARRIVING = kcg_true;
  outC->Rotatioalspeed.left = kcg_lit_float64(0.0);
  outC->Rotatioalspeed.right = kcg_lit_float64(0.0);
  /* SM1:Go:_L17=(Robot::GoAction#6)/ */
  GoAction_init_Robot(&outC->Context_GoAction_6);
  /* SM1:turn:_L1=(Robot::Turn#1)/ */ Turn_init_Robot(&outC->Context_Turn_1);
  /* SM1:Stop:_L1=(Robot::StopAction#1)/ */
  StopAction_init_Robot(&outC->Context_StopAction_1);
  /* SM1:light:_L1=(Robot::StopAction#2)/ */
  StopAction_init_Robot(&outC->Context_StopAction_2);
  /* SM1:Amber:_L3=(Robot::StopAction#4)/ */
  StopAction_init_Robot(&outC->Context_StopAction_4);
  /* SM1:GoAHead:_L2=(Robot::GoAHead#1)/ */
  GoAHead_init_Robot(&outC->Context_GoAHead_1);
  /* SM1:AfterTurn:_L1=(Robot::GoAHead#9)/ */
  GoAHead_init_Robot(&outC->Context_GoAHead_9);
  /* _L15=(Robot::isAction#1)/ */ isAction_init_Robot(&outC->Context_isAction_1);
  /* _L21=(Robot::TurnAction#4)/ */
  TurnAction_init_Robot(&outC->Context_TurnAction_4);
  /* _L13=(Robot::ColorDetect#1)/ */
  ColorDetect_init_Robot(&outC->Context_ColorDetect_1);
  /* _L27=(Robot::FrontDitect#1)/ */
  FrontDitect_init_Robot(&outC->Context_FrontDitect_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_depart_SM1;
  outC->ARRIVINGV = kcg_false;
  outC->Rotationalspeed.left = kcg_lit_float64(0.0);
  outC->Rotationalspeed.right = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void ia_reset_Robot(outC_ia_Robot *outC)
{
  outC->init = kcg_true;
  /* SM1:Go:_L17=(Robot::GoAction#6)/ */
  GoAction_reset_Robot(&outC->Context_GoAction_6);
  /* SM1:turn:_L1=(Robot::Turn#1)/ */ Turn_reset_Robot(&outC->Context_Turn_1);
  /* SM1:Stop:_L1=(Robot::StopAction#1)/ */
  StopAction_reset_Robot(&outC->Context_StopAction_1);
  /* SM1:light:_L1=(Robot::StopAction#2)/ */
  StopAction_reset_Robot(&outC->Context_StopAction_2);
  /* SM1:Amber:_L3=(Robot::StopAction#4)/ */
  StopAction_reset_Robot(&outC->Context_StopAction_4);
  /* SM1:GoAHead:_L2=(Robot::GoAHead#1)/ */
  GoAHead_reset_Robot(&outC->Context_GoAHead_1);
  /* SM1:AfterTurn:_L1=(Robot::GoAHead#9)/ */
  GoAHead_reset_Robot(&outC->Context_GoAHead_9);
  /* _L15=(Robot::isAction#1)/ */ isAction_reset_Robot(&outC->Context_isAction_1);
  /* _L21=(Robot::TurnAction#4)/ */
  TurnAction_reset_Robot(&outC->Context_TurnAction_4);
  /* _L13=(Robot::ColorDetect#1)/ */
  ColorDetect_reset_Robot(&outC->Context_ColorDetect_1);
  /* _L27=(Robot::FrontDitect#1)/ */
  FrontDitect_reset_Robot(&outC->Context_FrontDitect_1);
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_state_nxt = SSM_st_depart_SM1;
  outC->ARRIVINGV = kcg_false;
  outC->Rotationalspeed.left = kcg_lit_float64(0.0);
  outC->Rotationalspeed.right = kcg_lit_float64(0.0);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ia_Robot.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

