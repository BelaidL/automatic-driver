/*==============================================================================================
 *
 *  sdy_application.h 
 *  -------------------
 *
 *  Copyright (C) 2007 by Esterel Technologies SAS.
 *  All Rights Reserved.
 *
 *  UNAUTHORIZED ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS PROHIBITED.
 *============================================================================================*/

#ifndef __SDY_APPLICATION_H__
#define __SDY_APPLICATION_H__

#include "sdy_events.h"

/* Definition of function pointers */
typedef void (*T_VOID_FUNCTION) (void);
typedef void *(*T_RETURN_PTR_FUNCTION) (void);
typedef void (*T_VOIDPTR_FUNCTION) (void*);
typedef void (*T_VOIDPTR_INT_FUNCTION) (void*,SGLint32);
typedef void (*T_POINTER_EVENT_FUNCTION)(const sdy_pointer_event_t *evt);
typedef void (*T_KEYBOARD_EVENT_FUNCTION)(const sdy_keyboard_event_t *evt);
typedef void (*T_CURSOR_POS_REQUEST_FUNCTION)(T_CURSOR_POS_REQUEST_CALLBACK cb, void *data);

/* Simulation context */
struct simu_structure_type;

/* Layer parametrization */
typedef struct {
    /* Layer characteristics */
    const char layer_name[1024];
    SGLfloat ratio_x;
    SGLfloat ratio_y;
    /* Layer functions */
    T_RETURN_PTR_FUNCTION alloc_context;
    T_VOIDPTR_FUNCTION free_context;
    T_VOIDPTR_FUNCTION layer_init;
    T_VOIDPTR_FUNCTION layer_predraw;
    T_VOIDPTR_INT_FUNCTION layer_draw;
    /* Simulation context */
    const struct simu_structure_type *context;
} sdy_layer_data_t;

/* Device parametrization */
typedef struct {
    /* Device characteristics */
    const char device_name[128];
    SGLint32 device_id;
} sdy_device_data_t;

/* Application parametrization */
typedef struct {
    /* Application characteristics */
    const char specification_name[1024];
    SGLbool asynchronous;
    SGLbool transparent_background;
    SGLbool smooth_mode;
    SGLbool adjusted_text;
    SGLuint32 target_screen_width;
    SGLuint32 target_screen_height;
    SGLuint32 texture_max_width;
    SGLuint32 texture_max_height;
    SGLuint32 target_periodicity;
    /* Behavior functions */
    T_VOID_FUNCTION BHVR_Reset;
    T_VOID_FUNCTION BHVR_Step;
    T_VOID_FUNCTION BHVR_SetAsynchronousACK;
    T_POINTER_EVENT_FUNCTION BHVR_Pointer;
    T_KEYBOARD_EVENT_FUNCTION BHVR_Keyboard;
    T_CURSOR_POS_REQUEST_FUNCTION BHVR_CursorPosRequest;
    /* Resource tables */
    const sgl_color *color_table;
    const SGLuint32 color_table_size;
    const SGLuint32 color_table_background_index;
    const sgl_line_width *line_width_table;
    const SGLuint32 line_width_table_size;
    const sgl_linestipple *line_stipple_table;
    const SGLuint32 line_stipple_table_size;
    const void *font_table;
    T_VOID_FUNCTION texture_table;
    const SGLuint32 texture_table_size;
    /* Layer data */
    const SGLuint32 layers_number;
    const sdy_layer_data_t *layers;
    /* Device data */
    const SGLuint32 pointers_number;
    const sdy_device_data_t *pointers;
    const SGLuint32 keyboards_number;
    const sdy_device_data_t *keyboards;
	const SGLuint32 nb_of_priorities;
} sdy_application_data_t;


/* Opaque structure for graphical application */
typedef struct sdy_application_struct sdy_application_t;



extern sdy_application_t *Application_Allocate(const sdy_application_data_t *params, void *moduleHandle);
extern void Application_Free(sdy_application_t *pThis);

extern int Application_CreateWindow(sdy_application_t *pThis, void *pParent);
extern void *Application_CreateBuffer(sdy_application_t *pThis);

extern void Application_Reset(sdy_application_t *pThis);
extern int Application_Draw(sdy_application_t *pThis);

extern int Application_Cancelled(sdy_application_t *pThis);
extern int Application_RefreshCallback(sdy_application_t *pThis, T_COSIM_REFRESH_CALLBACK pCallback);

extern void Application_setBackgroundColorIndex(sdy_application_t *pThis, const void* colormap, SGLulong index);

extern void Application_EnterIOMutex(sdy_application_t *pThis);
extern void Application_EndIOMutex(sdy_application_t *pThis);

const sdy_application_data_t *Application_GetParams(sdy_application_t *pThis);
extern void *Application_GetWindow(sdy_application_t *pThis);
void *Application_GetLayerContext(sdy_application_t *pThis, SGLuint32 index);
sdy_keyboard_event_t *Application_GetKeyboardContext(sdy_application_t *pThis, SGLuint32 index);
sdy_pointer_event_t *Application_GetPointerContext(sdy_application_t *pThis, SGLuint32 index);

extern double Application_GetMousePosX(sdy_application_t *pThis);
extern double Application_GetMousePosY(sdy_application_t *pThis);

extern void Application_UseSystemEvents(sdy_application_t *pThis, SGLbool flag);
extern void Application_ShowEventCursors(sdy_application_t *pThis, SGLbool flag);

extern int Application_TakeSnapshot(sdy_application_t *pThis, const char *pPath);

/* Declarations for SCADE behaviors */
extern void BHVR_SetAsynchronousACK(void);
extern void BHVR_Keyboard(const sdy_keyboard_event_t *evt);
extern void BHVR_Pointer(const sdy_pointer_event_t *evt);
extern void BHVR_CursorPosRequest(T_CURSOR_POS_REQUEST_CALLBACK cb, void *data);
extern void BHVR_Step(void);
extern void BHVR_Reset(void);

#endif
