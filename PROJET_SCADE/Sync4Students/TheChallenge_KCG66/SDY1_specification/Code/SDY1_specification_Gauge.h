/*********************************************************
 **
 ** File  SDY1_specification_Gauge.h
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Gauge.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2018-01-13T10:58:27
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY1_specification\Code -prefix SDY1_specification_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\specification.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 *********************************************************/

#ifndef SDY1_SPECIFICATION_GAUGE_H
#define SDY1_SPECIFICATION_GAUGE_H

#include "sgl_types.h"
#include "kcg_assign.h"

#include "SDY1_specification_ColorBase.h"
#include "SDY1_specification_GaugeHorizontal.h"
#include "SDY1_specification_GaugeVertical.h"

/* Accessors */
#define SDY1_specification_Gauge_G_SizeX(_C_) (_C_)->SizeX
#define SDY1_specification_Gauge_S_SizeX(_C_,_V_) (_C_)->SizeX = (_V_)
#define SDY1_specification_Gauge_G_SizeY(_C_) (_C_)->SizeY
#define SDY1_specification_Gauge_S_SizeY(_C_,_V_) (_C_)->SizeY = (_V_)
#define SDY1_specification_Gauge_G_Style(_C_) (_C_)->Style
#define SDY1_specification_Gauge_S_Style(_C_,_V_) (_C_)->Style = (_V_)
#define SDY1_specification_Gauge_G_ColorStyle(_C_) (_C_)->ColorStyle
#define SDY1_specification_Gauge_S_ColorStyle(_C_,_V_) (_C_)->ColorStyle = (_V_)
#define SDY1_specification_Gauge_G_BackColor(_C_) (_C_)->BackColor
#define SDY1_specification_Gauge_S_BackColor(_C_,_V_) (_C_)->BackColor = (_V_)
#define SDY1_specification_Gauge_G_FrontColor(_C_) (_C_)->FrontColor
#define SDY1_specification_Gauge_S_FrontColor(_C_,_V_) (_C_)->FrontColor = (_V_)
#define SDY1_specification_Gauge_G_Font(_C_) (_C_)->Font
#define SDY1_specification_Gauge_S_Font(_C_,_V_) (_C_)->Font = (_V_)
#define SDY1_specification_Gauge_G_TextColor(_C_) (_C_)->TextColor
#define SDY1_specification_Gauge_S_TextColor(_C_,_V_) (_C_)->TextColor = (_V_)
#define SDY1_specification_Gauge_G_Value(_C_) (_C_)->Value
#define SDY1_specification_Gauge_S_Value(_C_,_V_) (_C_)->Value = (_V_)
#define SDY1_specification_Gauge_G_MinValue(_C_) (_C_)->MinValue
#define SDY1_specification_Gauge_S_MinValue(_C_,_V_) (_C_)->MinValue = (_V_)
#define SDY1_specification_Gauge_G_MaxValue(_C_) (_C_)->MaxValue
#define SDY1_specification_Gauge_S_MaxValue(_C_,_V_) (_C_)->MaxValue = (_V_)
#define SDY1_specification_Gauge_G_Orientation(_C_) (_C_)->Orientation
#define SDY1_specification_Gauge_S_Orientation(_C_,_V_) (_C_)->Orientation = (_V_)
#define SDY1_specification_Gauge_G_ShowGraduation(_C_) (_C_)->ShowGraduation
#define SDY1_specification_Gauge_S_ShowGraduation(_C_,_V_) (_C_)->ShowGraduation = (_V_)
#define SDY1_specification_Gauge_G_ShowValue(_C_) (_C_)->ShowValue
#define SDY1_specification_Gauge_S_ShowValue(_C_,_V_) (_C_)->ShowValue = (_V_)
#define SDY1_specification_Gauge_G_Legend(_C_) (*(_C_)->Legend)
#define SDY1_specification_Gauge_S_Legend(_C_,_V_) (_C_)->Legend = &(_V_)
#define SDY1_specification_Gauge_G_BaseColor(_C_) (_C_)->BaseColor
#define SDY1_specification_Gauge_S_BaseColor(_C_,_V_) (_C_)->BaseColor = (_V_)
#define SDY1_specification_Gauge_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct SDY1_specification_typ_Gauge_ {
  /* ------------------------- inputs --------------------------- */
  SGLfloat SizeX;
  SGLfloat SizeY;
  SGLint32 Style;
  SGLint32 ColorStyle;
  SGLint32 BackColor;
  SGLint32 FrontColor;
  SGLint32 Font;
  SGLint32 TextColor;
  SGLfloat Value;
  SGLfloat MinValue;
  SGLfloat MaxValue;
  SGLint32 Orientation;
  SGLint32 ShowGraduation;
  SGLbool ShowValue;
  SGLuint8 (*Legend)[255UL];
  /* ------------------------- locals --------------------------- */
  SGLint32 BaseColor;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
  /* ------------------------- subcontexts ---------------------- */
  SDY1_specification_typ_GaugeHorizontal _LEFT_TO_RIGHT__;
  SDY1_specification_typ_GaugeHorizontal _RIGHT_TO_LEFT__;
  SDY1_specification_typ_GaugeVertical _BOTTOM_TO_TOP__;
  SDY1_specification_typ_GaugeVertical _TOP_TO_BOTTOM__;
} SDY1_specification_typ_Gauge;

/* Associated functions */
extern void SDY1_specification_Gauge_init(SDY1_specification_typ_Gauge *pContext);
extern void SDY1_specification_Gauge_predraw(SDY1_specification_typ_Gauge *pContext);
extern void SDY1_specification_Gauge_draw(SDY1_specification_typ_Gauge *pContext, SGLint32 pPriority);
extern SDY1_specification_typ_Gauge * SDY1_specification_Gauge_alloc(void);
extern void SDY1_specification_Gauge_free(SDY1_specification_typ_Gauge *pContext);

#endif /* SDY1_SPECIFICATION_GAUGE_H */

/*********************************************************
 ** End of file
 ** End of generation: 2018-01-13T10:58:27
 *********************************************************/
