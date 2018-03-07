/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/challenge/SyncContest/TestEffects_KCG66/config.txt
** Generation date: 2016-12-20T13:13:57
*************************************************************$ */
#ifndef _SoundEffects_H_
#define _SoundEffects_H_

#include "kcg_types.h"
#define NUMNUM 5 

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -------------  insert eventual inits and memories  -------------- */
char* mem[NUMNUM];
} outC_SoundEffects;

/* ===========  node initialization and cycle functions  =========== */
/* SoundEffects/ */
extern void SoundEffects(/* code/ */ kcg_int32 code, outC_SoundEffects *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SoundEffects_reset(outC_SoundEffects *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void SoundEffects_init(outC_SoundEffects *outC);



#endif /* _SoundEffects_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SoundEffects.dh
** Generation date: 2016-12-20T13:13:57
*************************************************************$ */

