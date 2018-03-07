/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */
#ifndef _TheChallenge_H_
#define _TheChallenge_H_

#include "kcg_types.h"
#include "ScoringB_City.h"
#include "Sounds.h"
#include "ScoringA_City.h"
#include "WallClock_City.h"
#include "readIti_Robot.h"
#include "SmartCityControl_City.h"
#include "IndividualRobotControl_Robot.h"

/* ========================  input structure  ====================== */
typedef struct {
  phaseTy /* InitialPhase/ */ InitialPhase;
  kcg_bool /* top/ */ top;
  kcg_int32 /* mapid/ */ mapid;
  kcg_int32 /* itiid/ */ itiid;
} inC_TheChallenge;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  phaseTy /* RobotPhase/ */ RobotPhase;
  statusTy /* RobotStatus/ */ RobotStatus;
  sigTy /* Signalization/ */ Signalization;
  eventTy /* Events/ */ Events;
  kcg_int32 /* scoreA/ */ scoreA;
  kcg_int32 /* scoreB/ */ scoreB;
  kcg_float64 /* time/ */ time;
  array_char_255 /* team/ */ team;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  sensorsTy /* _L15/ */ _L15;
  interTy /* _L14/ */ _L14;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Sounds /* _=(Sounds#3)/ */ Context_Sounds_3;
  outC_ScoringB_City /* _L40=(City::ScoringB#3)/ */ Context_ScoringB_3;
  outC_ScoringA_City /* _L37=(City::ScoringA#3)/ */ Context_ScoringA_3;
  outC_SmartCityControl_City /* _L13=(City::SmartCityControl#1)/ */ Context_SmartCityControl_1;
  outC_WallClock_City /* _L36=(City::WallClock#3)/ */ Context_WallClock_3;
  outC_IndividualRobotControl_Robot /* _L11=(Robot::IndividualRobotControl#1)/ */ Context_IndividualRobotControl_1;
  outC_readIti_Robot /* _L21=(Robot::readIti#1)/ */ Context_readIti_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  phaseTy /* _L7/ */ _L7;
  statusTy /* _L12/ */ _L12;
  phaseTy /* _L11/ */ _L11;
  eventTy /* _L16/ */ _L16;
  sigTy /* _L13/ */ _L13;
  kcg_bool /* _L8/ */ _L8;
  itiElemArr_Robot /* _L21/ */ _L21;
  interTy /* _L25/ */ _L25;
  sensorsTy /* _L26/ */ _L26;
  array_char_255 /* _L28/ */ _L28;
  phaseTy /* _L42/ */ _L42;
  kcg_int32 /* _L40/ */ _L40;
  statusTy /* _L39/ */ _L39;
  eventTy /* _L38/ */ _L38;
  kcg_int32 /* _L37/ */ _L37;
  kcg_float64 /* _L36/ */ _L36;
  kcg_float64 /* _L43/ */ _L43;
} outC_TheChallenge;

/* ===========  node initialization and cycle functions  =========== */
/* TheChallenge/ */
extern void TheChallenge(inC_TheChallenge *inC, outC_TheChallenge *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TheChallenge_reset(outC_TheChallenge *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TheChallenge_init(outC_TheChallenge *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TheChallenge_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TheChallenge.h
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

