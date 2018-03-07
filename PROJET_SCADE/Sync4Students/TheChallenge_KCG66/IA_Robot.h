/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */
#ifndef _ia_Robot_H_
#define _ia_Robot_H_

#include "kcg_types.h"
#include "FrontDitect_Robot.h"
#include "TurnAction_Robot.h"
#include "ColorDetect_Robot.h"
#include "isAction_Robot.h"
#include "GoAHead_Robot.h"
#include "StopAction_Robot.h"
#include "Turn_Robot.h"
#include "GoAction_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  wheelsTy_Robot /* Rotatioalspeed/ */ Rotatioalspeed;
  kcg_bool /* ARRIVING/ */ ARRIVING;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_bool /* ARRIVINGV/ */ ARRIVINGV;
  wheelsTy_Robot /* Rotationalspeed/ */ Rotationalspeed;
  kcg_bool /* _L24/ */ _L24;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GoAction_Robot /* SM1:Go:_L17=(Robot::GoAction#6)/ */ Context_GoAction_6;
  outC_Turn_Robot /* SM1:turn:_L1=(Robot::Turn#1)/ */ Context_Turn_1;
  outC_StopAction_Robot /* SM1:Stop:_L1=(Robot::StopAction#1)/ */ Context_StopAction_1;
  outC_StopAction_Robot /* SM1:light:_L1=(Robot::StopAction#2)/ */ Context_StopAction_2;
  outC_StopAction_Robot /* SM1:Amber:_L3=(Robot::StopAction#4)/ */ Context_StopAction_4;
  outC_GoAHead_Robot /* SM1:GoAHead:_L2=(Robot::GoAHead#1)/ */ Context_GoAHead_1;
  outC_GoAHead_Robot /* SM1:AfterTurn:_L1=(Robot::GoAHead#9)/ */ Context_GoAHead_9;
  outC_isAction_Robot /* _L15=(Robot::isAction#1)/ */ Context_isAction_1;
  outC_TurnAction_Robot /* _L21=(Robot::TurnAction#4)/ */ Context_TurnAction_4;
  outC_ColorDetect_Robot /* _L13=(Robot::ColorDetect#1)/ */ Context_ColorDetect_1;
  outC_FrontDitect_Robot /* _L27=(Robot::FrontDitect#1)/ */ Context_FrontDitect_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  colorTy /* SM1:Go:_L15/ */ _L15_Go_SM1;
  kcg_float64 /* SM1:Go:_L16/ */ _L16_Go_SM1;
  wheelsTy_Robot /* SM1:Go:_L17/ */ _L17_Go_SM1;
  kcg_bool /* SM1:Go:_L14/ */ _L14_Go_SM1;
  kcg_float64 /* SM1:turn:_L4/ */ _L4_turn_SM1;
  wheelsTy_Robot /* SM1:turn:_L1/ */ _L1_turn_SM1;
  kcg_bool /* SM1:Stop:_L3/ */ _L3_Stop_SM1;
  kcg_float64 /* SM1:Stop:_L2/ */ _L2_Stop_SM1;
  wheelsTy_Robot /* SM1:Stop:_L1/ */ _L1_Stop_SM1;
  wheelsTy_Robot /* SM1:light:_L1/ */ _L1_light_SM1;
  kcg_float64 /* SM1:light:_L2/ */ _L2_light_SM1;
  wheelsTy_Robot /* SM1:Amber:_L3/ */ _L3_Amber_SM1;
  kcg_float64 /* SM1:Amber:_L4/ */ _L4_Amber_SM1;
  kcg_float64 /* SM1:GoAHead:_L3/ */ _L3_GoAHead_SM1;
  wheelsTy_Robot /* SM1:GoAHead:_L2/ */ _L2_GoAHead_SM1;
  kcg_float64 /* SM1:AfterTurn:_L2/ */ _L2_AfterTurn_SM1;
  wheelsTy_Robot /* SM1:AfterTurn:_L1/ */ _L1_AfterTurn_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_float64 /* value/ */ value;
  actionTy_Robot /* action/ */ action;
  colorTy /* roadColor/ */ roadColor;
  kcg_bool /* isGo/ */ isGo;
  kcg_bool /* isTurn/ */ isTurn;
  kcg_bool /* isStop/ */ isStop;
  kcg_bool /* endTurn/ */ endTurn;
  kcg_bool /* light/ */ light;
  colorTy /* frontcolor/ */ frontcolor;
  kcg_int32 /* sonar/ */ sonar;
  kcg_bool /* isGOrNR/ */ isGOrNR;
  kcg_bool /* amber/ */ amber;
  kcg_bool /* notAmber/ */ notAmber;
  kcg_bool /* beginGOrR/ */ beginGOrR;
  kcg_bool /* endGreen/ */ endGreen;
  kcg_bool /* nearRoad/ */ nearRoad;
  wheelsTy_Robot /* _L14/ */ _L14;
  colorTy /* _L8/ */ _L8;
  colorTy /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  sensorsTy /* _L4/ */ _L4;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  actionTy_Robot /* _L18/ */ _L18;
  colorTy /* _L5/ */ _L5;
  itiElemArr_Robot /* _L12/ */ _L12;
  actionTy_Robot /* _L13/ */ _L13;
  kcg_float64 /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  colorTy /* _L31/ */ _L31;
  kcg_int32 /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  colorTy /* _L45/ */ _L45;
  colorTy /* _L44/ */ _L44;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L40/ */ _L40;
  colorTy /* _L46/ */ _L46;
  kcg_bool /* _L109/ */ _L109;
  kcg_float64 /* _L110/ */ _L110;
  kcg_bool /* _L25/ */ _L25;
  actionTy_Robot /* _L117/ */ _L117;
  kcg_bool /* _L118/ */ _L118;
  kcg_bool /* _L119/ */ _L119;
  kcg_bool /* _L120/ */ _L120;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L122/ */ _L122;
} outC_ia_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::ia/ */
extern void ia_Robot(
  /* Itinerary/ */
  itiElemArr_Robot *Itinerary,
  /* SensorsData/ */
  sensorsTy *SensorsData,
  outC_ia_Robot *outC);

extern void ia_reset_Robot(outC_ia_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ia_init_Robot(outC_ia_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ia_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ia_Robot.h
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

