/*********************************************************
 **
 ** File  SDY1_specification_InfiniteKnob.h
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2018-01-13T10:58:27
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY1_specification\Code -prefix SDY1_specification_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\specification.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 *********************************************************/

#ifndef SDY1_SPECIFICATION_INFINITEKNOB_H
#define SDY1_SPECIFICATION_INFINITEKNOB_H

#include "sgl_types.h"
#include "kcg_assign.h"

#include "SDY1_specification_ColorBase.h"
#include "SDY1_specification_IndividualFocus.h"
#include "SDY1_specification_KeyEvent.h"
#include "wrapper_InfiniteKnob_mem.h"
#include "SDY1_specification_SliderThumb.h"

/* Accessors */
#define SDY1_specification_InfiniteKnob_G_WidgetId(_C_) (_C_)->WidgetId
#define SDY1_specification_InfiniteKnob_S_WidgetId(_C_,_V_) (_C_)->WidgetId = (_V_)
#define SDY1_specification_InfiniteKnob_G_NextWidgetId(_C_) (_C_)->NextWidgetId
#define SDY1_specification_InfiniteKnob_S_NextWidgetId(_C_,_V_) (_C_)->NextWidgetId = (_V_)
#define SDY1_specification_InfiniteKnob_G_Enabled(_C_) (_C_)->Enabled
#define SDY1_specification_InfiniteKnob_S_Enabled(_C_,_V_) (_C_)->Enabled = (_V_)
#define SDY1_specification_InfiniteKnob_G_ValuePerRevolution(_C_) (_C_)->ValuePerRevolution
#define SDY1_specification_InfiniteKnob_S_ValuePerRevolution(_C_,_V_) (_C_)->ValuePerRevolution = (_V_)
#define SDY1_specification_InfiniteKnob_G_ValueVisible(_C_) (_C_)->ValueVisible
#define SDY1_specification_InfiniteKnob_S_ValueVisible(_C_,_V_) (_C_)->ValueVisible = (_V_)
#define SDY1_specification_InfiniteKnob_G_KnobType(_C_) (_C_)->KnobType
#define SDY1_specification_InfiniteKnob_S_KnobType(_C_,_V_) (_C_)->KnobType = (_V_)
#define SDY1_specification_InfiniteKnob_G_Legend(_C_) (*(_C_)->Legend)
#define SDY1_specification_InfiniteKnob_S_Legend(_C_,_V_) (_C_)->Legend = &(_V_)
#define SDY1_specification_InfiniteKnob_G_Radius(_C_) (_C_)->Radius
#define SDY1_specification_InfiniteKnob_S_Radius(_C_,_V_) (_C_)->Radius = (_V_)
#define SDY1_specification_InfiniteKnob_G_Font(_C_) (_C_)->Font
#define SDY1_specification_InfiniteKnob_S_Font(_C_,_V_) (_C_)->Font = (_V_)
#define SDY1_specification_InfiniteKnob_G_TextColor(_C_) (_C_)->TextColor
#define SDY1_specification_InfiniteKnob_S_TextColor(_C_,_V_) (_C_)->TextColor = (_V_)
#define SDY1_specification_InfiniteKnob_G_BackColor(_C_) (_C_)->BackColor
#define SDY1_specification_InfiniteKnob_S_BackColor(_C_,_V_) (_C_)->BackColor = (_V_)
#define SDY1_specification_InfiniteKnob_G_ColorStyle(_C_) (_C_)->ColorStyle
#define SDY1_specification_InfiniteKnob_S_ColorStyle(_C_,_V_) (_C_)->ColorStyle = (_V_)
#define SDY1_specification_InfiniteKnob_G_Value(_C_) (_C_)->Value
#define SDY1_specification_InfiniteKnob_S_Value(_C_,_V_) (_C_)->Value = (_V_)
#define SDY1_specification_InfiniteKnob_G_AngleIn(_C_) (_C_)->AngleIn
#define SDY1_specification_InfiniteKnob_S_AngleIn(_C_,_V_) (_C_)->AngleIn = (_V_)
#define SDY1_specification_InfiniteKnob_G_AngleKnob(_C_) (_C_)->AngleKnob
#define SDY1_specification_InfiniteKnob_S_AngleKnob(_C_,_V_) (_C_)->AngleKnob = (_V_)
#define SDY1_specification_InfiniteKnob_G_InsideKnob(_C_) (_C_)->InsideKnob
#define SDY1_specification_InfiniteKnob_S_InsideKnob(_C_,_V_) (_C_)->InsideKnob = (_V_)
#define SDY1_specification_InfiniteKnob_G_MouseReleased(_C_) (_C_)->MouseReleased
#define SDY1_specification_InfiniteKnob_S_MouseReleased(_C_,_V_) (_C_)->MouseReleased = (_V_)
#define SDY1_specification_InfiniteKnob_G_State(_C_) (_C_)->State
#define SDY1_specification_InfiniteKnob_S_State(_C_,_V_) (_C_)->State = (_V_)
#define SDY1_specification_InfiniteKnob_G_KnobState(_C_) (_C_)->KnobState
#define SDY1_specification_InfiniteKnob_S_KnobState(_C_,_V_) (_C_)->KnobState = (_V_)
#define SDY1_specification_InfiniteKnob_G_MousePressed(_C_) (_C_)->MousePressed
#define SDY1_specification_InfiniteKnob_S_MousePressed(_C_,_V_) (_C_)->MousePressed = (_V_)
#define SDY1_specification_InfiniteKnob_G_KnobRadius(_C_) (_C_)->KnobRadius
#define SDY1_specification_InfiniteKnob_S_KnobRadius(_C_,_V_) (_C_)->KnobRadius = (_V_)
#define SDY1_specification_InfiniteKnob_G_InsideWidget(_C_) (_C_)->InsideWidget
#define SDY1_specification_InfiniteKnob_S_InsideWidget(_C_,_V_) (_C_)->InsideWidget = (_V_)
#define SDY1_specification_InfiniteKnob_G_HasFocus(_C_) (_C_)->HasFocus
#define SDY1_specification_InfiniteKnob_S_HasFocus(_C_,_V_) (_C_)->HasFocus = (_V_)
#define SDY1_specification_InfiniteKnob_G_KeyEvent(_C_) (_C_)->KeyEvent
#define SDY1_specification_InfiniteKnob_S_KeyEvent(_C_,_V_) (_C_)->KeyEvent = (_V_)
#define SDY1_specification_InfiniteKnob_G_KeyCode(_C_) (_C_)->KeyCode
#define SDY1_specification_InfiniteKnob_S_KeyCode(_C_,_V_) (_C_)->KeyCode = (_V_)
#define SDY1_specification_InfiniteKnob_G_BaseColor(_C_) (_C_)->BaseColor
#define SDY1_specification_InfiniteKnob_S_BaseColor(_C_,_V_) (_C_)->BaseColor = (_V_)
#define SDY1_specification_InfiniteKnob_G_MiddleRadius(_C_) (_C_)->MiddleRadius
#define SDY1_specification_InfiniteKnob_S_MiddleRadius(_C_,_V_) (_C_)->MiddleRadius = (_V_)
#define SDY1_specification_InfiniteKnob_G_CenterRadius(_C_) (_C_)->CenterRadius
#define SDY1_specification_InfiniteKnob_S_CenterRadius(_C_,_V_) (_C_)->CenterRadius = (_V_)
#define SDY1_specification_InfiniteKnob_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct SDY1_specification_typ_InfiniteKnob_ {
  /* ------------------------- inputs --------------------------- */
  SGLint32 WidgetId;
  SGLint32 NextWidgetId;
  SGLbool Enabled;
  SGLfloat ValuePerRevolution;
  SGLbool ValueVisible;
  SGLint32 KnobType;
  SGLuint8 (*Legend)[255UL];
  SGLfloat Radius;
  SGLint32 Font;
  SGLint32 TextColor;
  SGLint32 BackColor;
  SGLint32 ColorStyle;
  /* ------------------------- outputs -------------------------- */
  SGLfloat Value;
  /* ------------------------- locals --------------------------- */
  SGLfloat AngleIn;
  SGLfloat AngleKnob;
  SGLbool InsideKnob;
  SGLbool MouseReleased;
  SGLint32 State;
  SGLint32 KnobState;
  SGLbool MousePressed;
  SGLfloat KnobRadius;
  SGLbool InsideWidget;
  SGLint32 HasFocus;
  SGLbool KeyEvent;
  SGLint32 KeyCode;
  SGLint32 BaseColor;
  SGLfloat MiddleRadius;
  SGLfloat CenterRadius;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
  /* ------------------------- subcontexts ---------------------- */
  SDY1_specification_typ_IndividualFocus _IndividualFocus__;
  SDY1_specification_typ_KeyEvent _KeyEvent__;
  wrapper_InfiniteKnob_mem _wrapper_InfiniteKnob__;
  SDY1_specification_typ_SliderThumb _SliderThumb__;
} SDY1_specification_typ_InfiniteKnob;

/* Associated functions */
extern void SDY1_specification_InfiniteKnob_init(SDY1_specification_typ_InfiniteKnob *pContext);
extern void SDY1_specification_InfiniteKnob_predraw(SDY1_specification_typ_InfiniteKnob *pContext);
extern void SDY1_specification_InfiniteKnob_draw(SDY1_specification_typ_InfiniteKnob *pContext, SGLint32 pPriority);
extern SDY1_specification_typ_InfiniteKnob * SDY1_specification_InfiniteKnob_alloc(void);
extern void SDY1_specification_InfiniteKnob_free(SDY1_specification_typ_InfiniteKnob *pContext);

#endif /* SDY1_SPECIFICATION_INFINITEKNOB_H */

/*********************************************************
 ** End of file
 ** End of generation: 2018-01-13T10:58:27
 *********************************************************/

