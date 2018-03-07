/*==============================================================================================
 *
 *  sdy_simulation.h
 *  -------------------
 *
 *  Copyright (C) 2008-2014 by Esterel Technologies.
 *  All Rights Reserved.
 *
 *  UNAUTHORIZED ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS PROHIBITED.
 *============================================================================================*/

#ifndef _SDY_SIMULATION_H_
#define _SDY_SIMULATION_H_

#include <stdlib.h>
#include <wchar.h>

#include "sgl_types.h"
#include "sdy_events.h"
#include "sdy_application.h"

/* Definition of simulation types */

typedef enum {
    BOOL_SIMUTYPE,
    CHAR_SIMUTYPE,
    WCHAR_SIMUTYPE,
    INT_SIMUTYPE,
    REAL_SIMUTYPE,
    INT8_SIMUTYPE,
    INT16_SIMUTYPE,
    INT32_SIMUTYPE,
    INT64_SIMUTYPE,
    UINT8_SIMUTYPE,
    UINT16_SIMUTYPE,
    UINT32_SIMUTYPE,
    UINT64_SIMUTYPE,
    FLOAT32_SIMUTYPE,
    FLOAT64_SIMUTYPE,
    ARRAY_SIMUTYPE,
    VARRAY_SIMUTYPE,
    POINTER_SIMUTYPE,
    STRUCTURE_SIMUTYPE,
} simu_types_t;

typedef struct {
    simu_types_t kind;
} simu_abstract_type_t;

typedef struct {
    simu_types_t kind;
    size_t basicsize;
} simu_basic_type_t;

typedef struct {
    simu_types_t kind;
    void *subtype;
} simu_pointer_type_t;

typedef struct {
    simu_types_t kind;
    size_t length;
    void *subtype;
} simu_array_type_t;

typedef struct {
    simu_types_t kind;
    char *dimname;
    void *dimtype;
    const size_t dimoffset;
    void *subtype;
} simu_varray_type_t;

typedef enum {
    INPUT_SIMUSCOPE   = (1<<0),
    OUTPUT_SIMUSCOPE  = (1<<1),
    LOCAL_SIMUSCOPE   = (1<<2),
    PROBE_SIMUSCOPE   = (1<<3),
    SENSOR_SIMUSCOPE  = (1<<4),
    GROUP_SIMUSCOPE   = (1<<5),
    CONTEXT_SIMUSCOPE = (1<<6),
    BEHAVIOR_SIMUSCOPE = (1<<7),
} simu_scope_t;

typedef struct {
    const char name[1024];
    simu_scope_t scope;
    const void *type;
    const size_t offset;
} simu_structure_field_t;

typedef struct simu_structure_type {
    simu_types_t kind;
    const SGLuint32 fields_number;
    const simu_structure_field_t *fields;
} simu_structure_type_t;

typedef struct simu_parameters {
    const char *cosimu_behavior_path;
	const char *cosimu_scade_install_path;
	const char *cosimu_project_path;
	const char *cosimu_target_name;
	const char *cosimu_operator;
} simu_parameters_t;

/* Declaration of basic simulation types */
extern simu_basic_type_t bool_simu_t;
extern simu_basic_type_t char_simu_t;
extern simu_basic_type_t wchar_simu_t;
extern simu_basic_type_t int_simu_t;
extern simu_basic_type_t real_simu_t;
extern simu_basic_type_t uint8_simu_t;
extern simu_basic_type_t uint16_simu_t;
extern simu_basic_type_t uint32_simu_t;
extern simu_basic_type_t uint64_simu_t;
extern simu_basic_type_t int8_simu_t;
extern simu_basic_type_t int16_simu_t;
extern simu_basic_type_t int32_simu_t;
extern simu_basic_type_t int64_simu_t;
extern simu_basic_type_t float32_simu_t;
extern simu_basic_type_t float64_simu_t;

/* Opaque structure for simulation */
typedef struct sdy_simulation_struct sdy_simulation_t;

extern sdy_simulation_t *Simulation_Allocate(sdy_application_t * pApplication, const simu_parameters_t *pSimuParams);
extern void Simulation_Free(sdy_simulation_t *pThis);

extern void Simulation_GetObservables(sdy_simulation_t *pThis, const char *kind, T_ENUM_STRING_CALLBACK cb);
extern const char *Simulation_GetVariableType(sdy_simulation_t *pThis, const char *name);
extern const char *Simulation_GetVariableValue(sdy_simulation_t *pThis, const char *name);

extern int Simulation_SetVariableValue(sdy_simulation_t *pThis, const char *name, const wchar_t *value);

/* For SCADE Cosimulation of behaviors */
extern int SdyCosimulation_BehaviorInit(void*);
extern int SdyCosimulation_BehaviorStep(void*,void*);
extern int SdyCosimulation_BehaviorReset();

/* For Errors detection */
extern int has_errors;

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API extern
#endif

DLL_API void *SimuCreateContext(void) ;
DLL_API void SimuDeleteContext(void *pContext);
DLL_API int SimuGetScreenWidth(void);
DLL_API int SimuGetScreenHeight(void);
DLL_API void *SimuCreateWindow(void *pContext, void *pParent);
DLL_API void *SimuCreateBuffer(void *pContext);
DLL_API void SimuReset(void *pContext);
DLL_API void SimuCycle(void *pContext);
DLL_API int SimuSetValue(void *pContext, const char *pVariable, const wchar_t *pValue);
DLL_API const char *SimuGetValue(void *pContext, const char *pVariable);
DLL_API const char *SimuGetType(void *pContext, const char *pVariable);
DLL_API void SimuGetObs(void *pContext, const char *pKind, T_ENUM_STRING_CALLBACK pCallback);
DLL_API void SimuUseInteractiveEvents(void *pContext, int pFlag);
DLL_API void SimuShowEventCursors(void *pContext, int pFlag);
DLL_API int SimuTakeSnapshot(void *pContext, const char *pPath);
DLL_API int SimuHasEncounteredErrors(void);

#endif
