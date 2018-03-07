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

#include "SDY1_specification_color_table.h"
#include "SDY1_specification_line_width_table.h"
#include "SDY1_specification_line_stipple_table.h"
#include "SDY1_specification_texture_table.h"
#include "SDY1_specification_font_table.h"
#include "SDY1_specification_control_panel.h"

static sdy_layer_data_t g_layers_data[] = {
{
"control_panel", 1.00000F, 1.00000F,
(T_RETURN_PTR_FUNCTION)&SDY1_specification_control_panel_alloc,
(T_VOIDPTR_FUNCTION)&SDY1_specification_control_panel_free,
(T_VOIDPTR_FUNCTION)&SDY1_specification_control_panel_init,
(T_VOIDPTR_FUNCTION)&SDY1_specification_control_panel_predraw,
(T_VOIDPTR_INT_FUNCTION)&SDY1_specification_control_panel_draw,
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
"specification",
SGL_TRUE,
SGL_FALSE,
SGL_TRUE,
SGL_TRUE,
768, 768,
1024, 1024,
33,
&BHVR_Reset, &BHVR_Step, &BHVR_SetAsynchronousACK, &BHVR_Pointer, &BHVR_Keyboard, &BHVR_CursorPosRequest,
SDY1_specification_color_table, SDY1_specification_color_table_size, SDY1_specification_color_table_background_index,
SDY1_specification_line_width_table, SDY1_specification_line_width_table_size,
SDY1_specification_line_stipple_table, SDY1_specification_line_stipple_table_size,
&SDY1_specification_font_table,
&SDY1_specification_texture_table, SDY1_specification_texture_table_size,
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

int SDY1_specification__lockio() {
    Application_EnterIOMutex(pGlobalCosimuContext);
    return 0;
}

int SDY1_specification__unlockio() {
    Application_EndIOMutex(pGlobalCosimuContext);
    return 0;
}

int SDY1_specification__init() {
    Application_UseSystemEvents(pGlobalCosimuContext, SGL_TRUE);
    return (Application_CreateWindow(pGlobalCosimuContext, NULL) != 0);
}

int SDY1_specification__refreshCallback(T_COSIM_REFRESH_CALLBACK f) {
    return Application_RefreshCallback(pGlobalCosimuContext, f);
}

int SDY1_specification__draw() {
    Application_EndIOMutex(pGlobalCosimuContext);
    return Application_Draw(pGlobalCosimuContext);
}

int SDY1_specification__cancelled() {
    return Application_Cancelled(pGlobalCosimuContext);
}

SDY1_specification_typ_control_panel * SDY1_specification_L_control_panel(void){
return Application_GetLayerContext(pGlobalCosimuContext, 0);
}


