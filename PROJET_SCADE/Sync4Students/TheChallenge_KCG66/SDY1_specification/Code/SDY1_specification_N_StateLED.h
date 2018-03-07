/*********************************************************
 **
 ** File  SDY1_specification_N_StateLED.h
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\N-StateLED.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2018-01-13T10:58:25
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY1_specification\Code -prefix SDY1_specification_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\specification.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 *********************************************************/

/* Inlined constants:
   WL_BACK1=2
   WL_BACK3=4
   WL_LEGEND=15
   WL_WHITE=0
 */

#ifndef SDY1_SPECIFICATION_N_STATELED_H
#define SDY1_SPECIFICATION_N_STATELED_H

#include "sgl_types.h"
#include "kcg_assign.h"

#include "SDY1_specification_ColorBase.h"

/* Accessors */
#define SDY1_specification_N_StateLED_G_ColorStyle(_C_) (_C_)->ColorStyle
#define SDY1_specification_N_StateLED_S_ColorStyle(_C_,_V_) (_C_)->ColorStyle = (_V_)
#define SDY1_specification_N_StateLED_G_LEDState(_C_) (_C_)->LEDState
#define SDY1_specification_N_StateLED_S_LEDState(_C_,_V_) (_C_)->LEDState = (_V_)
#define SDY1_specification_N_StateLED_G_LEDColor1(_C_) (_C_)->LEDColor1
#define SDY1_specification_N_StateLED_S_LEDColor1(_C_,_V_) (_C_)->LEDColor1 = (_V_)
#define SDY1_specification_N_StateLED_G_LEDColor2(_C_) (_C_)->LEDColor2
#define SDY1_specification_N_StateLED_S_LEDColor2(_C_,_V_) (_C_)->LEDColor2 = (_V_)
#define SDY1_specification_N_StateLED_G_LEDColor3(_C_) (_C_)->LEDColor3
#define SDY1_specification_N_StateLED_S_LEDColor3(_C_,_V_) (_C_)->LEDColor3 = (_V_)
#define SDY1_specification_N_StateLED_G_LEDColor4(_C_) (_C_)->LEDColor4
#define SDY1_specification_N_StateLED_S_LEDColor4(_C_,_V_) (_C_)->LEDColor4 = (_V_)
#define SDY1_specification_N_StateLED_G_LEDColor5(_C_) (_C_)->LEDColor5
#define SDY1_specification_N_StateLED_S_LEDColor5(_C_,_V_) (_C_)->LEDColor5 = (_V_)
#define SDY1_specification_N_StateLED_G_LEDColor6(_C_) (_C_)->LEDColor6
#define SDY1_specification_N_StateLED_S_LEDColor6(_C_,_V_) (_C_)->LEDColor6 = (_V_)
#define SDY1_specification_N_StateLED_G_LEDColor7(_C_) (_C_)->LEDColor7
#define SDY1_specification_N_StateLED_S_LEDColor7(_C_,_V_) (_C_)->LEDColor7 = (_V_)
#define SDY1_specification_N_StateLED_G_LEDColor8(_C_) (_C_)->LEDColor8
#define SDY1_specification_N_StateLED_S_LEDColor8(_C_,_V_) (_C_)->LEDColor8 = (_V_)
#define SDY1_specification_N_StateLED_G_LEDColor9(_C_) (_C_)->LEDColor9
#define SDY1_specification_N_StateLED_S_LEDColor9(_C_,_V_) (_C_)->LEDColor9 = (_V_)
#define SDY1_specification_N_StateLED_G_Radius(_C_) (_C_)->Radius
#define SDY1_specification_N_StateLED_S_Radius(_C_,_V_) (_C_)->Radius = (_V_)
#define SDY1_specification_N_StateLED_G_Legend(_C_) (*(_C_)->Legend)
#define SDY1_specification_N_StateLED_S_Legend(_C_,_V_) (_C_)->Legend = &(_V_)
#define SDY1_specification_N_StateLED_G_LegendColor(_C_) (_C_)->LegendColor
#define SDY1_specification_N_StateLED_S_LegendColor(_C_,_V_) (_C_)->LegendColor = (_V_)
#define SDY1_specification_N_StateLED_G_Font(_C_) (_C_)->Font
#define SDY1_specification_N_StateLED_S_Font(_C_,_V_) (_C_)->Font = (_V_)
#define SDY1_specification_N_StateLED_G_LEDColor(_C_) (_C_)->LEDColor
#define SDY1_specification_N_StateLED_S_LEDColor(_C_,_V_) (_C_)->LEDColor = (_V_)
#define SDY1_specification_N_StateLED_G_BaseColor(_C_) (_C_)->BaseColor
#define SDY1_specification_N_StateLED_S_BaseColor(_C_,_V_) (_C_)->BaseColor = (_V_)
#define SDY1_specification_N_StateLED_G_BorderThickness(_C_) (_C_)->BorderThickness
#define SDY1_specification_N_StateLED_S_BorderThickness(_C_,_V_) (_C_)->BorderThickness = (_V_)
#define SDY1_specification_N_StateLED_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct SDY1_specification_typ_N_StateLED_ {
  /* ------------------------- inputs --------------------------- */
  SGLint32 ColorStyle;
  SGLint32 LEDState;
  SGLint32 LEDColor1;
  SGLint32 LEDColor2;
  SGLint32 LEDColor3;
  SGLint32 LEDColor4;
  SGLint32 LEDColor5;
  SGLint32 LEDColor6;
  SGLint32 LEDColor7;
  SGLint32 LEDColor8;
  SGLint32 LEDColor9;
  SGLfloat Radius;
  SGLuint8 (*Legend)[255UL];
  SGLint32 LegendColor;
  SGLint32 Font;
  /* ------------------------- locals --------------------------- */
  SGLint32 LEDColor;
  SGLint32 BaseColor;
  SGLfloat BorderThickness;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
} SDY1_specification_typ_N_StateLED;

/* Associated functions */
extern void SDY1_specification_N_StateLED_init(SDY1_specification_typ_N_StateLED *pContext);
extern void SDY1_specification_N_StateLED_predraw(SDY1_specification_typ_N_StateLED *pContext);
extern void SDY1_specification_N_StateLED_draw(SDY1_specification_typ_N_StateLED *pContext, SGLint32 pPriority);
extern SDY1_specification_typ_N_StateLED * SDY1_specification_N_StateLED_alloc(void);
extern void SDY1_specification_N_StateLED_free(SDY1_specification_typ_N_StateLED *pContext);

#endif /* SDY1_SPECIFICATION_N_STATELED_H */

/*********************************************************
 ** End of file
 ** End of generation: 2018-01-13T10:58:25
 *********************************************************/
