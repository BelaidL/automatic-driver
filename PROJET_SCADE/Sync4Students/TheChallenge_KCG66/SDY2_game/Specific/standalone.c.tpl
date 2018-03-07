/* ============================================================================
   (C) 2016 ESTEREL TECHNOLOGIES SAS.  ALL RIGHTS RESERVED
    This source file may be used and distributed without restriction provided 
	that this copyright statement is not removed from the file and that any 
	derivative work contains this copyright notice.
 
   Warranty
   ESTEREL TECHNOLOGIES SAS makes no warranty of any kind with regard to the
   use of this Software, either expressed or implied, including, but not 
   limited to the fitness for a particular purpose.
 =========================================================================== */

#include <stddef.h>
#include "sgl_types.h"
#include "sglConstants.h"
#include "sdy_events.h"
#include "sdy_application.h"

/*****************************************************************************
Parameters for simulation
*****************************************************************************/

@@SIMULATION_PARAMETERS@@

/*****************************************************************************
EXE entry point for SDY standalone execution
*****************************************************************************/

#include <time.h>
#include <stdio.h>
#include <windows.h>

int main(int argc, char** argv) 
{
    sdy_application_t *pThis = NULL;

    clock_t start, finish;
    long loc_cycle_period = g_application_data.target_periodicity;
    long lDuration, loc_time_sleep;
    int i;

    /* Parse options */
    for (i = 1; i < argc; i++) {
        if ((strcmp(argv[i], "-period") == 0) && ((i + 1) < argc)) {
            i += 1;
            loc_cycle_period = (long) atoi(argv[i]);
        }
        else if (i+1 == argc) {
            loc_cycle_period = (long) atoi(argv[i]);
        }
    }

    /* Initialize the drawing */
    pThis = Application_Allocate(&g_application_data, GetModuleHandle(NULL));
    Application_UseSystemEvents(pThis, SGL_TRUE);
    Application_CreateWindow(pThis, NULL);

    while (!Application_Cancelled(pThis)){
        start = clock();
        Application_Draw(pThis);
        finish = clock();
        lDuration = (long)((double)(finish - start) / CLOCKS_PER_SEC * 1000.0);
        loc_time_sleep = loc_cycle_period - lDuration;

        /* Sleep loc_time_sleep */
        if ( loc_time_sleep > 0 ){
            SleepEx(loc_time_sleep, FALSE);
        }
    }

    Application_Free(pThis);
	TerminateProcess(GetCurrentProcess(), 0);	
    return 0;
}
