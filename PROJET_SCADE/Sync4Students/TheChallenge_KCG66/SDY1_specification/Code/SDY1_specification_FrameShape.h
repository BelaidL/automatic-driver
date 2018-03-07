/*********************************************************
 **
 ** File  SDY1_specification_FrameShape.h
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\FrameShape.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2018-01-13T10:58:26
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY1_specification\Code -prefix SDY1_specification_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\specification.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 *********************************************************/

#ifndef SDY1_SPECIFICATION_FRAMESHAPE_H
#define SDY1_SPECIFICATION_FRAMESHAPE_H

#include "sgl_types.h"


/* Accessors */
#define SDY1_specification_FrameShape_G_SizeX(_C_) (_C_)->SizeX
#define SDY1_specification_FrameShape_S_SizeX(_C_,_V_) (_C_)->SizeX = (_V_)
#define SDY1_specification_FrameShape_G_SizeY(_C_) (_C_)->SizeY
#define SDY1_specification_FrameShape_S_SizeY(_C_,_V_) (_C_)->SizeY = (_V_)
#define SDY1_specification_FrameShape_G_Color(_C_) (_C_)->Color
#define SDY1_specification_FrameShape_S_Color(_C_,_V_) (_C_)->Color = (_V_)
#define SDY1_specification_FrameShape_G_OutlineColor(_C_) (_C_)->OutlineColor
#define SDY1_specification_FrameShape_S_OutlineColor(_C_,_V_) (_C_)->OutlineColor = (_V_)
#define SDY1_specification_FrameShape_G_Style(_C_) (_C_)->Style
#define SDY1_specification_FrameShape_S_Style(_C_,_V_) (_C_)->Style = (_V_)
#define SDY1_specification_FrameShape_G_OutlineRadius(_C_) (_C_)->OutlineRadius
#define SDY1_specification_FrameShape_S_OutlineRadius(_C_,_V_) (_C_)->OutlineRadius = (_V_)
#define SDY1_specification_FrameShape_G_Texture(_C_) (_C_)->Texture
#define SDY1_specification_FrameShape_S_Texture(_C_,_V_) (_C_)->Texture = (_V_)
#define SDY1_specification_FrameShape_G_Orientation(_C_) (_C_)->Orientation
#define SDY1_specification_FrameShape_S_Orientation(_C_,_V_) (_C_)->Orientation = (_V_)
#define SDY1_specification_FrameShape_G_Opacity(_C_) (_C_)->Opacity
#define SDY1_specification_FrameShape_S_Opacity(_C_,_V_) (_C_)->Opacity = (_V_)
#define SDY1_specification_FrameShape_G_OutlineOpacity(_C_) (_C_)->OutlineOpacity
#define SDY1_specification_FrameShape_S_OutlineOpacity(_C_,_V_) (_C_)->OutlineOpacity = (_V_)
#define SDY1_specification_FrameShape_G_OutlineWidth(_C_) (_C_)->OutlineWidth
#define SDY1_specification_FrameShape_S_OutlineWidth(_C_,_V_) (_C_)->OutlineWidth = (_V_)
#define SDY1_specification_FrameShape_G_OffsetPos(_C_) (_C_)->OffsetPos
#define SDY1_specification_FrameShape_S_OffsetPos(_C_,_V_) (_C_)->OffsetPos = (_V_)
#define SDY1_specification_FrameShape_HOOK(_C_,_F_,_D_) 

/* Context type */
typedef struct SDY1_specification_typ_FrameShape_ {
  /* ------------------------- inputs --------------------------- */
  SGLfloat SizeX;
  SGLfloat SizeY;
  SGLint32 Color;
  SGLint32 OutlineColor;
  SGLint32 Style;
  SGLfloat OutlineRadius;
  SGLint32 Texture;
  SGLint32 Orientation;
  SGLint32 Opacity;
  SGLint32 OutlineOpacity;
  SGLint32 OutlineWidth;
  /* ------------------------- locals --------------------------- */
  SGLfloat OffsetPos;
  /* ------------------------- parent priority ------------------ */
  SGLint32 _parentPriority;
} SDY1_specification_typ_FrameShape;

/* Associated functions */
extern void SDY1_specification_FrameShape_init(SDY1_specification_typ_FrameShape *pContext);
extern void SDY1_specification_FrameShape_predraw(SDY1_specification_typ_FrameShape *pContext);
extern void SDY1_specification_FrameShape_draw(SDY1_specification_typ_FrameShape *pContext, SGLint32 pPriority);
extern SDY1_specification_typ_FrameShape * SDY1_specification_FrameShape_alloc(void);
extern void SDY1_specification_FrameShape_free(SDY1_specification_typ_FrameShape *pContext);

#endif /* SDY1_SPECIFICATION_FRAMESHAPE_H */

/*********************************************************
 ** End of file
 ** End of generation: 2018-01-13T10:58:26
 *********************************************************/

