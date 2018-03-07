/*********************************************************
 **
 ** File  SDY1_specification_LED.h
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\LED.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2018-01-13T10:58:27
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY1_specification\Code -prefix SDY1_specification_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\specification.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 *********************************************************/

/* Inlined constants:
   WL_BACK1=2
   WL_BACK3=4
   WL_LEGEND=15
   WL_WHITE=0
 */

#ifndef SDY1_SPECIFICATION_LED_H
#define SDY1_SPECIFICATION_LED_H

#include "sgl_types.h"
#include "kcg_assign.h"

#include "SDY1_specification_ColorBase.h"
#include "SDY1_specification_FrameShape.h"

/* Accessors */
#define SDY1_specification_LED_G_SizeX(_C_) (_C_)->SizeX
#define SDY1_specification_LED_S_SizeX(_C_,_V_) (_C_)->SizeX = (_V_)
#define SDY1_specification_LED_G_SizeY(_C_) (_C_)->SizeY
#define SDY1_specification_LED_S_SizeY(_C_,_V_) (_C_)->SizeY = (_V_)
#define SDY1_specification_LED_G_Style(_C_) (_C_)->Style
#define SDY1_specification_LED_S_Style(_C_,_V_) (_C_)->Style = (_V_)
#define SDY1_specification_LED_G_ColorStyle(_C_) (_C_)->ColorStyle
#define SDY1_specification_LED_S_ColorStyle(_C_,_V_) (_C_)->ColorStyle = (_V_)
#define SDY1_specification_LED_G_LEDOn(_C_) (_C_)->LEDOn
#define SDY1_specification_LED_S_LEDOn(_C_,_V_) (_C_)->LEDOn = (_V_)
#define SDY1_specification_LED_G_LEDColor(_C_) (_C_)->LEDColor
#define SDY1_specification_LED_S_LEDColor(_C_,_V_) (_C_)->LEDColor = (_V_)
#define SDY1_specification_LED_G_Legend(_C_) (*(_C_)->Legend)
#define SDY1_specification_LED_S_Legend(_C_,_V_) (_C_)->Legend = &(_V_)
#define SDY1_specification_LED_G_LegendColor(_C_) (_C_)->LegendColor
#define SDY1_specification_LED_S_LegendColor(_C_,_V_) (_C_)->LegendColor = (_V_)
#define SDY1_specification_LED_G_Font(_C_) (_C_)->Font
#define SDY1_specification_LED_S_Font(_C_,_V_) (_C_)->Font = (_V_)
#define SDY1_specification_LED_G_BaseColor(_C_) (_C_)->BaseColor
#define SDY1_specification_LED_S_BaseColor(_C_,_V_) (_C_)->BaseColor = (_V_)
#define SDY1_specification_LED_G_BorderThickness0(_C_) (_C_)->BorderThickness0
#define SDY1_specification_LED_S_BorderThickness0(_C_,_V_) (_C_)->BorderThickness0 = (_V_)
#define SDY1_specification_LED_G_BorderThickness(_C_) (_C_)->BorderThickness
#define SDY1_specification_LED_S_BorderThickness(_C_,_V_) (_C_)->BorderThickness = (_V_)
#define SDY1_specification_LED_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct SDY1_specification_typ_LED_ {
  /* ------------------------- inputs --------------------------- */
  SGLfloat SizeX;
  SGLfloat SizeY;
  SGLint32 Style;
  SGLint32 ColorStyle;
  SGLbool LEDOn;
  SGLint32 LEDColor;
  SGLuint8 (*Legend)[255UL];
  SGLint32 LegendColor;
  SGLint32 Font;
  /* ------------------------- locals --------------------------- */
  SGLint32 BaseColor;
  SGLfloat BorderThickness0;
  SGLfloat BorderThickness;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
} SDY1_specification_typ_LED;

/* Associated functions */
extern void SDY1_specification_LED_init(SDY1_specification_typ_LED *pContext);
extern void SDY1_specification_LED_predraw(SDY1_specification_typ_LED *pContext);
extern void SDY1_specification_LED_draw(SDY1_specification_typ_LED *pContext, SGLint32 pPriority);
extern SDY1_specification_typ_LED * SDY1_specification_LED_alloc(void);
extern void SDY1_specification_LED_free(SDY1_specification_typ_LED *pContext);

#endif /* SDY1_SPECIFICATION_LED_H */

/*********************************************************
 ** End of file
 ** End of generation: 2018-01-13T10:58:27
 *********************************************************/

