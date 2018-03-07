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

#ifndef _SDY2_game_H
#define _SDY2_game_H

#include "sdy_events.h"

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API extern
#endif

DLL_API int SDY2_game__lockio();
DLL_API int SDY2_game__unlockio();
DLL_API int SDY2_game__init();
DLL_API int SDY2_game__draw();
DLL_API int SDY2_game__cancelled();
DLL_API int SDY2_game__refreshCallback(T_COSIM_REFRESH_CALLBACK f);

#include "SDY2_game_arena.h"
DLL_API SDY2_game_typ_arena * SDY2_game_L_arena(void);


#endif

