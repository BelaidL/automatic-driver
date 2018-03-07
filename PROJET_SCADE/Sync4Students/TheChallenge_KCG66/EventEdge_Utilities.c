/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EventEdge_Utilities.h"

/* Utilities::EventEdge/ */
void EventEdge_Utilities(
  /* event/ */
  eventTy *event,
  outC_EventEdge_Utilities *outC)
{
  kcg_copy_eventTy(&outC->_L1, event);
  outC->_L6 = outC->_L1.collisionEvent;
  /* _L17=(digital::RisingEdge#5)/ */
  RisingEdge_digital(outC->_L6, &outC->Context_RisingEdge_5);
  outC->_L17 = outC->Context_RisingEdge_5.RE_Output;
  outC->_L5 = outC->_L1.dirEvent;
  /* _L16=(digital::RisingEdge#4)/ */
  RisingEdge_digital(outC->_L5, &outC->Context_RisingEdge_4);
  outC->_L16 = outC->Context_RisingEdge_4.RE_Output;
  outC->_L4 = outC->_L1.exitRoad;
  /* _L15=(digital::RisingEdge#3)/ */
  RisingEdge_digital(outC->_L4, &outC->Context_RisingEdge_3);
  outC->_L15 = outC->Context_RisingEdge_3.RE_Output;
  outC->_L3 = outC->_L1.speedExcess;
  /* _L14=(digital::RisingEdge#2)/ */
  RisingEdge_digital(outC->_L3, &outC->Context_RisingEdge_2);
  outC->_L14 = outC->Context_RisingEdge_2.RE_Output;
  outC->_L2 = outC->_L1.lightRun;
  /* _L13=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L2, &outC->Context_RisingEdge_1);
  outC->_L13 = outC->Context_RisingEdge_1.RE_Output;
  outC->_L12.lightRun = outC->_L13;
  outC->_L12.speedExcess = outC->_L14;
  outC->_L12.exitRoad = outC->_L15;
  outC->_L12.collisionEvent = outC->_L17;
  outC->_L12.dirEvent = outC->_L16;
  kcg_copy_eventTy(&outC->eventE, &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void EventEdge_init_Utilities(outC_EventEdge_Utilities *outC)
{
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12.lightRun = kcg_true;
  outC->_L12.speedExcess = kcg_true;
  outC->_L12.exitRoad = kcg_true;
  outC->_L12.collisionEvent = kcg_true;
  outC->_L12.dirEvent = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L1.lightRun = kcg_true;
  outC->_L1.speedExcess = kcg_true;
  outC->_L1.exitRoad = kcg_true;
  outC->_L1.collisionEvent = kcg_true;
  outC->_L1.dirEvent = kcg_true;
  outC->eventE.lightRun = kcg_true;
  outC->eventE.speedExcess = kcg_true;
  outC->eventE.exitRoad = kcg_true;
  outC->eventE.collisionEvent = kcg_true;
  outC->eventE.dirEvent = kcg_true;
  /* _L13=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
  /* _L14=(digital::RisingEdge#2)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_2);
  /* _L15=(digital::RisingEdge#3)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_3);
  /* _L16=(digital::RisingEdge#4)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_4);
  /* _L17=(digital::RisingEdge#5)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_5);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EventEdge_reset_Utilities(outC_EventEdge_Utilities *outC)
{
  /* _L13=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
  /* _L14=(digital::RisingEdge#2)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_2);
  /* _L15=(digital::RisingEdge#3)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_3);
  /* _L16=(digital::RisingEdge#4)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_4);
  /* _L17=(digital::RisingEdge#5)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_5);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EventEdge_Utilities.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

