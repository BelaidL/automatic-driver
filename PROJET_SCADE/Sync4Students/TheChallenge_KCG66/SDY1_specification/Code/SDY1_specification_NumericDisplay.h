/*********************************************************
 **
 ** File  SDY1_specification_NumericDisplay.h
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\NumericDisplay.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2018-01-13T10:58:27
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY1_specification\Code -prefix SDY1_specification_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\specification.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 *********************************************************/

#ifndef SDY1_SPECIFICATION_NUMERICDISPLAY_H
#define SDY1_SPECIFICATION_NUMERICDISPLAY_H

#include "sgl_types.h"
#include "kcg_assign.h"


/* Accessors */
#define SDY1_specification_NumericDisplay_G_Value(_C_) (_C_)->Value
#define SDY1_specification_NumericDisplay_S_Value(_C_,_V_) (_C_)->Value = (_V_)
#define SDY1_specification_NumericDisplay_G_ValueColor(_C_) (_C_)->ValueColor
#define SDY1_specification_NumericDisplay_S_ValueColor(_C_,_V_) (_C_)->ValueColor = (_V_)
#define SDY1_specification_NumericDisplay_G_BackColor(_C_) (_C_)->BackColor
#define SDY1_specification_NumericDisplay_S_BackColor(_C_,_V_) (_C_)->BackColor = (_V_)
#define SDY1_specification_NumericDisplay_G_NumberFormat(_C_) (_C_)->NumberFormat
#define SDY1_specification_NumericDisplay_S_NumberFormat(_C_,_V_) (_C_)->NumberFormat = (_V_)
#define SDY1_specification_NumericDisplay_G_Legend(_C_) (*(_C_)->Legend)
#define SDY1_specification_NumericDisplay_S_Legend(_C_,_V_) (_C_)->Legend = &(_V_)
#define SDY1_specification_NumericDisplay_G_LegendColor(_C_) (_C_)->LegendColor
#define SDY1_specification_NumericDisplay_S_LegendColor(_C_,_V_) (_C_)->LegendColor = (_V_)
#define SDY1_specification_NumericDisplay_G_Unit(_C_) (*(_C_)->Unit)
#define SDY1_specification_NumericDisplay_S_Unit(_C_,_V_) (_C_)->Unit = &(_V_)
#define SDY1_specification_NumericDisplay_G_UnitColor(_C_) (_C_)->UnitColor
#define SDY1_specification_NumericDisplay_S_UnitColor(_C_,_V_) (_C_)->UnitColor = (_V_)
#define SDY1_specification_NumericDisplay_G_Font(_C_) (_C_)->Font
#define SDY1_specification_NumericDisplay_S_Font(_C_,_V_) (_C_)->Font = (_V_)
#define SDY1_specification_NumericDisplay_G_Width(_C_) (_C_)->Width
#define SDY1_specification_NumericDisplay_S_Width(_C_,_V_) (_C_)->Width = (_V_)
#define SDY1_specification_NumericDisplay_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct SDY1_specification_typ_NumericDisplay_ {
  /* ------------------------- inputs --------------------------- */
  SGLfloat Value;
  SGLint32 ValueColor;
  SGLint32 BackColor;
  SGLint32 NumberFormat;
  SGLuint8 (*Legend)[255UL];
  SGLint32 LegendColor;
  SGLuint8 (*Unit)[255UL];
  SGLint32 UnitColor;
  SGLint32 Font;
  SGLfloat Width;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
} SDY1_specification_typ_NumericDisplay;

/* Associated functions */
extern void SDY1_specification_NumericDisplay_init(SDY1_specification_typ_NumericDisplay *pContext);
extern void SDY1_specification_NumericDisplay_predraw(SDY1_specification_typ_NumericDisplay *pContext);
extern void SDY1_specification_NumericDisplay_draw(SDY1_specification_typ_NumericDisplay *pContext, SGLint32 pPriority);
extern SDY1_specification_typ_NumericDisplay * SDY1_specification_NumericDisplay_alloc(void);
extern void SDY1_specification_NumericDisplay_free(SDY1_specification_typ_NumericDisplay *pContext);

#endif /* SDY1_SPECIFICATION_NUMERICDISPLAY_H */

/*********************************************************
 ** End of file
 ** End of generation: 2018-01-13T10:58:27
 *********************************************************/

