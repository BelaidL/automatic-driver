#ifndef _THECHALLENGE_MACRO_H_
#define _THECHALLENGE_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file TheChallenge_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "TheChallenge.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_TheChallenge inputs_ctx;
    outC_TheChallenge outputs_ctx;
} WU_TheChallenge;
#define WU_CTX_TYPE_TheChallenge WU_TheChallenge
#define WU_CTX_TYPE_TheChallenge_SIZE sizeof(WU_TheChallenge)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_TheChallenge() 

#define DECLARE_EXT_SENSORS_TheChallenge(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_TheChallenge_InitialPhase(context) context.inputs_ctx.InitialPhase  /* TheChallenge/InitialPhase */
#define VAR_TheChallenge_InitialPhase VARC_TheChallenge_InitialPhase(CTX_TheChallenge)

#define VARC_TheChallenge_top(context) context.inputs_ctx.top  /* TheChallenge/top */
#define VAR_TheChallenge_top VARC_TheChallenge_top(CTX_TheChallenge)

#define VARC_TheChallenge_mapid(context) context.inputs_ctx.mapid  /* TheChallenge/mapid */
#define VAR_TheChallenge_mapid VARC_TheChallenge_mapid(CTX_TheChallenge)

#define VARC_TheChallenge_itiid(context) context.inputs_ctx.itiid  /* TheChallenge/itiid */
#define VAR_TheChallenge_itiid VARC_TheChallenge_itiid(CTX_TheChallenge)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_TheChallenge_RobotPhase(context) context.outputs_ctx.RobotPhase  /* TheChallenge/RobotPhase */
#define VAR_TheChallenge_RobotPhase VARC_TheChallenge_RobotPhase(CTX_TheChallenge)

#define VARC_TheChallenge_RobotStatus(context) context.outputs_ctx.RobotStatus  /* TheChallenge/RobotStatus */
#define VAR_TheChallenge_RobotStatus VARC_TheChallenge_RobotStatus(CTX_TheChallenge)

#define VARC_TheChallenge_Signalization(context) context.outputs_ctx.Signalization  /* TheChallenge/Signalization */
#define VAR_TheChallenge_Signalization VARC_TheChallenge_Signalization(CTX_TheChallenge)

#define VARC_TheChallenge_Events(context) context.outputs_ctx.Events  /* TheChallenge/Events */
#define VAR_TheChallenge_Events VARC_TheChallenge_Events(CTX_TheChallenge)

#define VARC_TheChallenge_scoreA(context) context.outputs_ctx.scoreA  /* TheChallenge/scoreA */
#define VAR_TheChallenge_scoreA VARC_TheChallenge_scoreA(CTX_TheChallenge)

#define VARC_TheChallenge_scoreB(context) context.outputs_ctx.scoreB  /* TheChallenge/scoreB */
#define VAR_TheChallenge_scoreB VARC_TheChallenge_scoreB(CTX_TheChallenge)

#define VARC_TheChallenge_time(context) context.outputs_ctx.time  /* TheChallenge/time */
#define VAR_TheChallenge_time VARC_TheChallenge_time(CTX_TheChallenge)

#define VARC_TheChallenge_team(context) context.outputs_ctx.team  /* TheChallenge/team */
#define VAR_TheChallenge_team VARC_TheChallenge_team(CTX_TheChallenge)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_InitialPhase phaseTy
#define CPY_InitialPhase(DST, SRC) kcg_copy_phaseTy(DST, SRC)
#define T_top kcg_bool
#define CPY_top(DST, SRC) DST = SRC
#define T_mapid kcg_int32
#define CPY_mapid(DST, SRC) DST = SRC
#define T_itiid kcg_int32
#define CPY_itiid(DST, SRC) DST = SRC
#define T_RobotPhase phaseTy
#define CPY_RobotPhase(DST, SRC) kcg_copy_phaseTy(DST, SRC)
#define T_RobotStatus statusTy
#define CPY_RobotStatus(DST, SRC) DST = SRC
#define T_Signalization sigTy
#define CPY_Signalization(DST, SRC) kcg_copy_sigTy(DST, SRC)
#define T_Events eventTy
#define CPY_Events(DST, SRC) kcg_copy_eventTy(DST, SRC)
#define T_scoreA kcg_int32
#define CPY_scoreA(DST, SRC) DST = SRC
#define T_scoreB kcg_int32
#define CPY_scoreB(DST, SRC) DST = SRC
#define T_time kcg_float64
#define CPY_time(DST, SRC) DST = SRC
#define T_team array_char_255
#define CPY_team(DST, SRC) kcg_copy_array_char_255(DST, SRC)


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_TheChallenge(context)  WU_TheChallenge context;

#define DECLARE_CTXT_TheChallenge() DECLAREC_CTXT_TheChallenge(CTX_TheChallenge)

#define DECLAREC_EXT_CTXT_TheChallenge(MODE , context) MODE WU_TheChallenge context;

#define DECLARE_EXT_CTXT_TheChallenge(MODE) DECLAREC_EXT_CTXT_TheChallenge(MODE , CTX_TheChallenge)

#ifndef KCG_USER_DEFINED_INIT
    #define INITC_TheChallenge(context) TheChallenge_init(&context.outputs_ctx);
#else
    #ifndef KCG_NO_EXTERN_CALL_TO_RESET
        #define INITC_TheChallenge(context) TheChallenge_reset(&context.outputs_ctx);
    #else
        #define INITC_TheChallenge(context) 
    #endif
#endif

#define INIT_TheChallenge() INITC_TheChallenge(CTX_TheChallenge)

#define PERFORMC_TheChallenge(context)     TheChallenge( \
        &context.inputs_ctx /* input context */,\
        &context.outputs_ctx /* output/memories context */\
    )

#define PERFORM_TheChallenge() PERFORMC_TheChallenge(CTX_TheChallenge)

/*$************** SCADE Macro wrapper *********************
** End of file TheChallenge_macro.h
***********************************************************$*/

#endif /* _THECHALLENGE_MACRO_H_ */
