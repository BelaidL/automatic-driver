/*********************************************************
 **
 ** File  SDY1_specification_Slider.h
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Slider.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2018-01-13T10:58:27
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY1_specification\Code -prefix SDY1_specification_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\specification.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 *********************************************************/

/* Inlined constants:
   FOCUS_WIDTH=1.5
   WL_BACK1=2
   WL_BACK2=3
   WL_BACK3=4
   WL_FOCUS=14
   WL_GRADUATION_OUT=16
   WL_LEGEND=15
   WL_WHITE=0
 */

#ifndef SDY1_SPECIFICATION_SLIDER_H
#define SDY1_SPECIFICATION_SLIDER_H

#include "sgl_types.h"
#include "kcg_assign.h"

#include "SDY1_specification_IndividualFocus.h"
#include "SDY1_specification_KeyEvent.h"
#include "wrapper_Slider_mem.h"
#include "SDY1_specification_ColorBase.h"
#include "SDY1_specification_Scale.h"
#include "SDY1_specification_FrameShape.h"
#include "SDY1_specification_SliderThumb.h"

/* Accessors */
#define SDY1_specification_Slider_G_WidgetId(_C_) (_C_)->WidgetId
#define SDY1_specification_Slider_S_WidgetId(_C_,_V_) (_C_)->WidgetId = (_V_)
#define SDY1_specification_Slider_G_NextWidgetId(_C_) (_C_)->NextWidgetId
#define SDY1_specification_Slider_S_NextWidgetId(_C_,_V_) (_C_)->NextWidgetId = (_V_)
#define SDY1_specification_Slider_G_SizeX(_C_) (_C_)->SizeX
#define SDY1_specification_Slider_S_SizeX(_C_,_V_) (_C_)->SizeX = (_V_)
#define SDY1_specification_Slider_G_SizeY(_C_) (_C_)->SizeY
#define SDY1_specification_Slider_S_SizeY(_C_,_V_) (_C_)->SizeY = (_V_)
#define SDY1_specification_Slider_G_Enable(_C_) (_C_)->Enable
#define SDY1_specification_Slider_S_Enable(_C_,_V_) (_C_)->Enable = (_V_)
#define SDY1_specification_Slider_G_Style(_C_) (_C_)->Style
#define SDY1_specification_Slider_S_Style(_C_,_V_) (_C_)->Style = (_V_)
#define SDY1_specification_Slider_G_ColorStyle(_C_) (_C_)->ColorStyle
#define SDY1_specification_Slider_S_ColorStyle(_C_,_V_) (_C_)->ColorStyle = (_V_)
#define SDY1_specification_Slider_G_TextColor(_C_) (_C_)->TextColor
#define SDY1_specification_Slider_S_TextColor(_C_,_V_) (_C_)->TextColor = (_V_)
#define SDY1_specification_Slider_G_Font(_C_) (_C_)->Font
#define SDY1_specification_Slider_S_Font(_C_,_V_) (_C_)->Font = (_V_)
#define SDY1_specification_Slider_G_BackColor(_C_) (_C_)->BackColor
#define SDY1_specification_Slider_S_BackColor(_C_,_V_) (_C_)->BackColor = (_V_)
#define SDY1_specification_Slider_G_InValue(_C_) (_C_)->InValue
#define SDY1_specification_Slider_S_InValue(_C_,_V_) (_C_)->InValue = (_V_)
#define SDY1_specification_Slider_G_MinValue(_C_) (_C_)->MinValue
#define SDY1_specification_Slider_S_MinValue(_C_,_V_) (_C_)->MinValue = (_V_)
#define SDY1_specification_Slider_G_MaxValue(_C_) (_C_)->MaxValue
#define SDY1_specification_Slider_S_MaxValue(_C_,_V_) (_C_)->MaxValue = (_V_)
#define SDY1_specification_Slider_G_ValueDelta(_C_) (_C_)->ValueDelta
#define SDY1_specification_Slider_S_ValueDelta(_C_,_V_) (_C_)->ValueDelta = (_V_)
#define SDY1_specification_Slider_G_Orientation(_C_) (_C_)->Orientation
#define SDY1_specification_Slider_S_Orientation(_C_,_V_) (_C_)->Orientation = (_V_)
#define SDY1_specification_Slider_G_GraduationsPosition(_C_) (_C_)->GraduationsPosition
#define SDY1_specification_Slider_S_GraduationsPosition(_C_,_V_) (_C_)->GraduationsPosition = (_V_)
#define SDY1_specification_Slider_G_ShowGraduations(_C_) (_C_)->ShowGraduations
#define SDY1_specification_Slider_S_ShowGraduations(_C_,_V_) (_C_)->ShowGraduations = (_V_)
#define SDY1_specification_Slider_G_InValueSet(_C_) (_C_)->InValueSet
#define SDY1_specification_Slider_S_InValueSet(_C_,_V_) (_C_)->InValueSet = (_V_)
#define SDY1_specification_Slider_G_Legend(_C_) (*(_C_)->Legend)
#define SDY1_specification_Slider_S_Legend(_C_,_V_) (_C_)->Legend = &(_V_)
#define SDY1_specification_Slider_G_Value(_C_) (_C_)->Value
#define SDY1_specification_Slider_S_Value(_C_,_V_) (_C_)->Value = (_V_)
#define SDY1_specification_Slider_G_ValueChangeEmit(_C_) (_C_)->ValueChangeEmit
#define SDY1_specification_Slider_S_ValueChangeEmit(_C_,_V_) (_C_)->ValueChangeEmit = (_V_)
#define SDY1_specification_Slider_G_Hover(_C_) (_C_)->Hover
#define SDY1_specification_Slider_S_Hover(_C_,_V_) (_C_)->Hover = (_V_)
#define SDY1_specification_Slider_G_MouseReleased(_C_) (_C_)->MouseReleased
#define SDY1_specification_Slider_S_MouseReleased(_C_,_V_) (_C_)->MouseReleased = (_V_)
#define SDY1_specification_Slider_G_MousePressed(_C_) (_C_)->MousePressed
#define SDY1_specification_Slider_S_MousePressed(_C_,_V_) (_C_)->MousePressed = (_V_)
#define SDY1_specification_Slider_G_ClickedValueX(_C_) (_C_)->ClickedValueX
#define SDY1_specification_Slider_S_ClickedValueX(_C_,_V_) (_C_)->ClickedValueX = (_V_)
#define SDY1_specification_Slider_G_ClickedValueY(_C_) (_C_)->ClickedValueY
#define SDY1_specification_Slider_S_ClickedValueY(_C_,_V_) (_C_)->ClickedValueY = (_V_)
#define SDY1_specification_Slider_G_MouseButton(_C_) (_C_)->MouseButton
#define SDY1_specification_Slider_S_MouseButton(_C_,_V_) (_C_)->MouseButton = (_V_)
#define SDY1_specification_Slider_G_InsideThumb(_C_) (_C_)->InsideThumb
#define SDY1_specification_Slider_S_InsideThumb(_C_,_V_) (_C_)->InsideThumb = (_V_)
#define SDY1_specification_Slider_G_HasFocus(_C_) (_C_)->HasFocus
#define SDY1_specification_Slider_S_HasFocus(_C_,_V_) (_C_)->HasFocus = (_V_)
#define SDY1_specification_Slider_G_KeyBackward(_C_) (_C_)->KeyBackward
#define SDY1_specification_Slider_S_KeyBackward(_C_,_V_) (_C_)->KeyBackward = (_V_)
#define SDY1_specification_Slider_G_KeyForward(_C_) (_C_)->KeyForward
#define SDY1_specification_Slider_S_KeyForward(_C_,_V_) (_C_)->KeyForward = (_V_)
#define SDY1_specification_Slider_G_KeyCode(_C_) (_C_)->KeyCode
#define SDY1_specification_Slider_S_KeyCode(_C_,_V_) (_C_)->KeyCode = (_V_)
#define SDY1_specification_Slider_G_KeyEvent(_C_) (_C_)->KeyEvent
#define SDY1_specification_Slider_S_KeyEvent(_C_,_V_) (_C_)->KeyEvent = (_V_)
#define SDY1_specification_Slider_G_SliderPressed(_C_) (_C_)->SliderPressed
#define SDY1_specification_Slider_S_SliderPressed(_C_,_V_) (_C_)->SliderPressed = (_V_)
#define SDY1_specification_Slider_G_BaseColor(_C_) (_C_)->BaseColor
#define SDY1_specification_Slider_S_BaseColor(_C_,_V_) (_C_)->BaseColor = (_V_)
#define SDY1_specification_Slider_G_LocTextColorLegend(_C_) (_C_)->LocTextColorLegend
#define SDY1_specification_Slider_S_LocTextColorLegend(_C_,_V_) (_C_)->LocTextColorLegend = (_V_)
#define SDY1_specification_Slider_G_LocOuterColor(_C_) (_C_)->LocOuterColor
#define SDY1_specification_Slider_S_LocOuterColor(_C_,_V_) (_C_)->LocOuterColor = (_V_)
#define SDY1_specification_Slider_G_LocBackColor(_C_) (_C_)->LocBackColor
#define SDY1_specification_Slider_S_LocBackColor(_C_,_V_) (_C_)->LocBackColor = (_V_)
#define SDY1_specification_Slider_G_LocGradColor(_C_) (_C_)->LocGradColor
#define SDY1_specification_Slider_S_LocGradColor(_C_,_V_) (_C_)->LocGradColor = (_V_)
#define SDY1_specification_Slider_G_Thickness(_C_) (_C_)->Thickness
#define SDY1_specification_Slider_S_Thickness(_C_,_V_) (_C_)->Thickness = (_V_)
#define SDY1_specification_Slider_G_ThumbWidth(_C_) (_C_)->ThumbWidth
#define SDY1_specification_Slider_S_ThumbWidth(_C_,_V_) (_C_)->ThumbWidth = (_V_)
#define SDY1_specification_Slider_G_ThumbLength(_C_) (_C_)->ThumbLength
#define SDY1_specification_Slider_S_ThumbLength(_C_,_V_) (_C_)->ThumbLength = (_V_)
#define SDY1_specification_Slider_G_LocStyle(_C_) (_C_)->LocStyle
#define SDY1_specification_Slider_S_LocStyle(_C_,_V_) (_C_)->LocStyle = (_V_)
#define SDY1_specification_Slider_G_LocOrientation(_C_) (_C_)->LocOrientation
#define SDY1_specification_Slider_S_LocOrientation(_C_,_V_) (_C_)->LocOrientation = (_V_)
#define SDY1_specification_Slider_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct SDY1_specification_typ_Slider_ {
  /* ------------------------- inputs --------------------------- */
  SGLint32 WidgetId;
  SGLint32 NextWidgetId;
  SGLfloat SizeX;
  SGLfloat SizeY;
  SGLbool Enable;
  SGLint32 Style;
  SGLint32 ColorStyle;
  SGLint32 TextColor;
  SGLint32 Font;
  SGLint32 BackColor;
  SGLfloat InValue;
  SGLfloat MinValue;
  SGLfloat MaxValue;
  SGLfloat ValueDelta;
  SGLint32 Orientation;
  SGLint32 GraduationsPosition;
  SGLint32 ShowGraduations;
  SGLbool InValueSet;
  SGLuint8 (*Legend)[255UL];
  /* ------------------------- outputs -------------------------- */
  SGLfloat Value;
  SGLbool ValueChangeEmit;
  /* ------------------------- locals --------------------------- */
  SGLbool Hover;
  SGLbool MouseReleased;
  SGLbool MousePressed;
  SGLfloat ClickedValueX;
  SGLfloat ClickedValueY;
  SGLint32 MouseButton;
  SGLbool InsideThumb;
  SGLint32 HasFocus;
  SGLbool KeyBackward;
  SGLbool KeyForward;
  SGLint32 KeyCode;
  SGLbool KeyEvent;
  SGLbool SliderPressed;
  SGLint32 BaseColor;
  SGLint32 LocTextColorLegend;
  SGLint32 LocOuterColor;
  SGLint32 LocBackColor;
  SGLint32 LocGradColor;
  SGLfloat Thickness;
  SGLfloat ThumbWidth;
  SGLfloat ThumbLength;
  SGLint32 LocStyle;
  SGLint32 LocOrientation;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
  /* ------------------------- subcontexts ---------------------- */
  SDY1_specification_typ_IndividualFocus _IndividualFocus__;
  SDY1_specification_typ_KeyEvent _KeyEvent__;
  wrapper_Slider_mem _wrapper_Slider__;
  SDY1_specification_typ_Scale _Scale__;
  SDY1_specification_typ_SliderThumb _SliderThumb__;
  SDY1_specification_typ_Scale _Scale_1__;
  SDY1_specification_typ_SliderThumb _SliderThumb_1__;
  SDY1_specification_typ_Scale _Scale_2__;
  SDY1_specification_typ_SliderThumb _SliderThumb_2__;
  SDY1_specification_typ_Scale _Scale_3__;
  SDY1_specification_typ_SliderThumb _SliderThumb_3__;
} SDY1_specification_typ_Slider;

/* Associated functions */
extern void SDY1_specification_Slider_init(SDY1_specification_typ_Slider *pContext);
extern void SDY1_specification_Slider_predraw(SDY1_specification_typ_Slider *pContext);
extern void SDY1_specification_Slider_draw(SDY1_specification_typ_Slider *pContext, SGLint32 pPriority);
extern SDY1_specification_typ_Slider * SDY1_specification_Slider_alloc(void);
extern void SDY1_specification_Slider_free(SDY1_specification_typ_Slider *pContext);

#endif /* SDY1_SPECIFICATION_SLIDER_H */

/*********************************************************
 ** End of file
 ** End of generation: 2018-01-13T10:58:27
 *********************************************************/

