/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/challenge/SyncContest/TestEffects_KCG66/config.txt
** Generation date: 2016-12-20T13:13:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SoundEffects.h"
#include <WinDef.h>
#include <mmsystem.h>
#include <stdlib.h>
#include <stdio.h>

/* SoundEffects/ */
void SoundEffects(/* code/ */ kcg_int32 code, outC_SoundEffects *outC)
{
  //plays one of 5 standard sounds 

  if (code>=0 && code< NUMNUM)
	PlaySound(outC->mem[code], NULL, SND_MEMORY|SND_ASYNC);	
}

void SoundEffects_init(outC_SoundEffects *outC)
{
  /* filling the buffers with 5 waves*/
	char* wavnames[NUMNUM]={"collision","light","speed","direction","exit"};
    	int i;
	char fname[200];
	char *buf;
	for(i=0;i<NUMNUM;i++){
		  sprintf(fname, "%s/%s.wav", DIR_INPUTS, wavnames[i]);
		  FILE *fp = fopen(fname, "rb");

		  fseek(fp, 0, SEEK_END);
		  long fsize = ftell(fp);
		  rewind(fp);
		  
		  buf = malloc(fsize + 1);
		  fread(buf, fsize, 1, fp);
		  fclose(fp);
		  buf[fsize] = 0;
		  outC->mem[i]=buf;
	}
}

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SoundEffects_reset(outC_SoundEffects *outC)
{
  /* free wave buffers */
	int i;
	for(i=0;i<NUMNUM;i++)
		free(outC->mem[i]);			
}

#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SoundEffects.dc
** Generation date: 2016-12-20T13:13:57
*************************************************************$ */

