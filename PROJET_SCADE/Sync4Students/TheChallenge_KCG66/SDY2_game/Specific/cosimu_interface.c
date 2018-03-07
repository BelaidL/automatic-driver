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
#include "cosimu_interface.h"
#include "sdy_events.h"
#include "sdy_application.h"

/* Global context for cosimulation */
static sdy_application_t * pGlobalCosimuContext = NULL;

/*****************************************************************************
Parameters for simulation
*****************************************************************************/

#include "SDY2_game_color_table.h"
#include "SDY2_game_line_width_table.h"
#include "SDY2_game_line_stipple_table.h"
#include "SDY2_game_texture_table.h"
#include "SDY2_game_font_table.h"
#include "SDY2_game_arena.h"

static sdy_layer_data_t g_layers_data[] = {
{
"arena", 1.00000F, 1.00000F,
(T_RETURN_PTR_FUNCTION)&SDY2_game_arena_alloc,
(T_VOIDPTR_FUNCTION)&SDY2_game_arena_free,
(T_VOIDPTR_FUNCTION)&SDY2_game_arena_init,
(T_VOIDPTR_FUNCTION)&SDY2_game_arena_predraw,
(T_VOIDPTR_INT_FUNCTION)&SDY2_game_arena_draw,
SGL_NULL,
},
};
static sdy_device_data_t g_pointers_data[] = {
{"_ptr0", 0},
};
static sdy_device_data_t g_keyboards_data[] = {
{"_kbd0", 0},
};
static sdy_application_data_t g_application_data = {
"game",
SGL_TRUE,
SGL_FALSE,
SGL_TRUE,
SGL_TRUE,
1280, 768,
1024, 1024,
33,
SGL_NULL, SGL_NULL, &BHVR_SetAsynchronousACK, SGL_NULL, SGL_NULL, SGL_NULL,
SDY2_game_color_table, SDY2_game_color_table_size, SDY2_game_color_table_background_index,
SDY2_game_line_width_table, SDY2_game_line_width_table_size,
SDY2_game_line_stipple_table, SDY2_game_line_stipple_table_size,
&SDY2_game_font_table,
&SDY2_game_texture_table, SDY2_game_texture_table_size,
1, g_layers_data,
1, g_pointers_data,
1, g_keyboards_data,
3,
};

/*****************************************************************************
DLL entry point
*****************************************************************************/

#include <windows.h>

BOOL APIENTRY DllMain(HANDLE hModule, 
                      DWORD  ul_reason_for_call, 
                      LPVOID lpReserved)
{
    switch (ul_reason_for_call) {

case DLL_PROCESS_ATTACH:
    pGlobalCosimuContext = Application_Allocate(&g_application_data, hModule);
    break;
case DLL_PROCESS_DETACH:
    Application_Free(pGlobalCosimuContext);
    break;
case DLL_THREAD_ATTACH:
    break;
case DLL_THREAD_DETACH:
    break;
    }
    return TRUE;
}

/*****************************************************************************
DLL functions for SDY co-simulation
*****************************************************************************/

int SDY2_game__lockio() {
    Application_EnterIOMutex(pGlobalCosimuContext);
    return 0;
}

int SDY2_game__unlockio() {
    Application_EndIOMutex(pGlobalCosimuContext);
    return 0;
}

int SDY2_game__init() {
    Application_UseSystemEvents(pGlobalCosimuContext, SGL_TRUE);
    return (Application_CreateWindow(pGlobalCosimuContext, NULL) != 0);
}

int SDY2_game__refreshCallback(T_COSIM_REFRESH_CALLBACK f) {
    return Application_RefreshCallback(pGlobalCosimuContext, f);
}

int SDY2_game__draw() {
    Application_EndIOMutex(pGlobalCosimuContext);
    return Application_Draw(pGlobalCosimuContext);
}

int SDY2_game__cancelled() {
    return Application_Cancelled(pGlobalCosimuContext);
}

SDY2_game_typ_arena * SDY2_game_L_arena(void){
return Application_GetLayerContext(pGlobalCosimuContext, 0);
}


