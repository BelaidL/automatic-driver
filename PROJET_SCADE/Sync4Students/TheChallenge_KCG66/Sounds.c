/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/blagha85/Desktop/PROJET_SCADE/Sync4Students/TheChallenge_KCG66/config.txt
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Sounds.h"

/* Sounds/ */
void Sounds(
  /* events/ */
  eventTy *events,
  /* status/ */
  statusTy status,
  outC_Sounds *outC)
{
  /* wav/ */
  kcg_int32 wav_partial;
  /* wav/ */
  kcg_int32 _1_wav_partial;
  /* wav/ */
  kcg_int32 _2_wav_partial;
  /* wav/ */
  kcg_int32 _3_wav_partial;
  /* wav/ */
  kcg_int32 _4_wav_partial;
  /* wav/ */
  kcg_int32 _5_wav_partial;
  /* wav/ */
  kcg_int32 _6_wav_partial;
  /* wav/ */
  kcg_int32 _7_wav_partial;
  /* wav/ */
  kcg_int32 _8_wav_partial;
  /* wav/ */
  kcg_int32 _9_wav_partial;
  /* wav/ */
  kcg_int32 _10_wav_partial;
  /* wav/ */
  kcg_int32 _11_wav_partial;

  outC->IfBlock1_clock = status == Preparing;
  kcg_copy_eventTy(&outC->_L1, events);
  /* _L2=(Utilities::EventEdge#1)/ */
  EventEdge_Utilities(&outC->_L1, &outC->Context_EventEdge_1);
  kcg_copy_eventTy(&outC->_L2, &outC->Context_EventEdge_1.eventE);
  kcg_copy_eventTy(&outC->eve, &outC->_L2);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = kcg_lit_int32(-1);
    wav_partial = outC->_L1_then_IfBlock1;
    outC->wav = wav_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->eve.collisionEvent;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = kcg_lit_int32(0);
      _11_wav_partial = outC->_L3_then_else_IfBlock1;
      _1_wav_partial = _11_wav_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = outC->eve.lightRun;
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L4_then_else_else_IfBlock1 = kcg_lit_int32(1);
        _2_wav_partial = outC->_L4_then_else_else_IfBlock1;
        _10_wav_partial = _2_wav_partial;
      }
      else {
        outC->else_clock_else_else_IfBlock1 = outC->eve.speedExcess;
        /* IfBlock1:else:else:else: */
        if (outC->else_clock_else_else_IfBlock1) {
          outC->_L3_then_else_else_else_IfBlock1 = kcg_lit_int32(2);
          _9_wav_partial = outC->_L3_then_else_else_else_IfBlock1;
          _3_wav_partial = _9_wav_partial;
        }
        else {
          outC->else_clock_else_else_else_IfBlock1 = outC->eve.dirEvent;
          /* IfBlock1:else:else:else:else: */
          if (outC->else_clock_else_else_else_IfBlock1) {
            outC->_L3_then_else_else_else_else_IfBlock1 = kcg_lit_int32(3);
            _4_wav_partial = outC->_L3_then_else_else_else_else_IfBlock1;
            _8_wav_partial = _4_wav_partial;
          }
          else {
            outC->else_clock_else_else_else_else_IfBlock1 = outC->eve.exitRoad;
            /* IfBlock1:else:else:else:else:else: */
            if (outC->else_clock_else_else_else_else_IfBlock1) {
              outC->_L3_then_else_else_else_else_else_IfBlock1 = kcg_lit_int32(4);
              _7_wav_partial = outC->_L3_then_else_else_else_else_else_IfBlock1;
              _5_wav_partial = _7_wav_partial;
            }
            else {
              outC->_L1_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(-1);
              _6_wav_partial = outC->_L1_else_else_else_else_else_else_IfBlock1;
              _5_wav_partial = _6_wav_partial;
            }
            _8_wav_partial = _5_wav_partial;
          }
          _3_wav_partial = _8_wav_partial;
        }
        _10_wav_partial = _3_wav_partial;
      }
      _1_wav_partial = _10_wav_partial;
    }
    outC->wav = _1_wav_partial;
  }
  outC->_L4 = outC->wav;
  /* _=(SoundEffects#1)/ */
  SoundEffects(outC->_L4, &outC->Context_SoundEffects_1);
}

#ifndef KCG_USER_DEFINED_INIT
void Sounds_init(outC_Sounds *outC)
{
  outC->_L4 = kcg_lit_int32(0);
  outC->_L2.lightRun = kcg_true;
  outC->_L2.speedExcess = kcg_true;
  outC->_L2.exitRoad = kcg_true;
  outC->_L2.collisionEvent = kcg_true;
  outC->_L2.dirEvent = kcg_true;
  outC->_L1.lightRun = kcg_true;
  outC->_L1.speedExcess = kcg_true;
  outC->_L1.exitRoad = kcg_true;
  outC->_L1.collisionEvent = kcg_true;
  outC->_L1.dirEvent = kcg_true;
  outC->wav = kcg_lit_int32(0);
  outC->eve.lightRun = kcg_true;
  outC->eve.speedExcess = kcg_true;
  outC->eve.exitRoad = kcg_true;
  outC->eve.collisionEvent = kcg_true;
  outC->eve.dirEvent = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L3_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_else_else_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_else_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_else_else_IfBlock1 = kcg_true;
  outC->_L4_then_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int32(0);
  /* _=(SoundEffects#1)/ */ SoundEffects_init(&outC->Context_SoundEffects_1);
  /* _L2=(Utilities::EventEdge#1)/ */
  EventEdge_init_Utilities(&outC->Context_EventEdge_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Sounds_reset(outC_Sounds *outC)
{
  /* _=(SoundEffects#1)/ */ SoundEffects_reset(&outC->Context_SoundEffects_1);
  /* _L2=(Utilities::EventEdge#1)/ */
  EventEdge_reset_Utilities(&outC->Context_EventEdge_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Sounds.c
** Generation date: 2018-01-13T10:57:49
*************************************************************$ */

