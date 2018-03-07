/*********************************************************
 **
 ** File  SDY1_specification_GaugeVertical.c
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\GaugeVertical.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2018-01-13T10:58:27
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY1_specification\Code -prefix SDY1_specification_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\specification.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 *********************************************************/

/* Inlined constants:
   GRAD_SIZE=10.0
   INNER_THICKNESS=1.0
   OUTER_THICKNESS=2.0
   OUTLINE_RADIUS=8.0
   WL_BACK1=2
   WL_BACK3=4
   WL_GRADUATION_OUT=16
   WL_LEGEND=15
   WL_SELECT_BACK=7
   WL_SELECT_BACK2=8
   WL_WHITE=0
 */

#include "SDY1_specification_GaugeVertical.h"
#include "SDY1_specification_imported_functions.h"
#include "sgl_simu.h"


#include <stdlib.h>
#include <string.h>

SDY1_specification_typ_GaugeVertical * SDY1_specification_GaugeVertical_alloc(void)
{
  SDY1_specification_typ_GaugeVertical *lContext = malloc(sizeof(SDY1_specification_typ_GaugeVertical));
  memset(lContext, 0L, sizeof(SDY1_specification_typ_GaugeVertical));
  return lContext;
}

void SDY1_specification_GaugeVertical_free(SDY1_specification_typ_GaugeVertical *pContext)
{
  free(pContext);
}


void SDY1_specification_GaugeVertical_init(SDY1_specification_typ_GaugeVertical *pContext)
{
  SDY1_specification_GaugeVertical_S_SizeX(pContext, 50.0F);
  SDY1_specification_GaugeVertical_S_SizeY(pContext, 250.0F);
  SDY1_specification_GaugeVertical_S_Value(pContext, 70.0F);
  SDY1_specification_GaugeVertical_S_MaxValue(pContext, 100.0F);
  SDY1_specification_GaugeVertical_S_MinValue(pContext, 0.0F);
  SDY1_specification_GaugeVertical_S_Style(pContext, 1L);
  SDY1_specification_GaugeVertical_S_BaseColor(pContext, 1000L);
  SDY1_specification_GaugeVertical_S_BackColor(pContext, -1L);
  SDY1_specification_GaugeVertical_S_FrontColor(pContext, -1L);
  SDY1_specification_GaugeVertical_S_FontColor(pContext, -1L);
  SDY1_specification_GaugeVertical_S_Font(pContext, 21L);
  SDY1_specification_GaugeVertical_S_DisplayGraduation(pContext, 2L);
  SDY1_specification_GaugeVertical_S_DisplayValueAsDigits(pContext, 1);
  SDY1_specification_GaugeVertical_S_Mirror(pContext, 0);
  {
    static SGLuint8 lArray0[255UL] = {71U,97U,117U,103U,101U};
    SDY1_specification_GaugeVertical_S_Label(pContext, lArray0);
  }
  SDY1_specification_GaugeVertical_S_Integral(pContext, 7L);
  SDY1_specification_GaugeVertical_S_Fractional(pContext, 1L);
  SDY1_specification_GaugeVertical_S_Margin(pContext, 5.0F);
  SDY1_specification_GaugeVertical_S_FontSizeX(pContext, 0.0F);
  SDY1_specification_GaugeVertical_S_FontSizeY(pContext, 0.0F);
  {
    static SGLfloat lArray0[60UL] = {0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F};
    SDY1_specification_GaugeVertical_S_OriginPx(pContext, lArray0);
  }
  {
    static SGLfloat lArray0[120UL] = {0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F};
    SDY1_specification_GaugeVertical_S_unused1(pContext, lArray0);
  }
  {
    static SGLfloat lArray0[60UL] = {0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F,0.0F};
    SDY1_specification_GaugeVertical_S_ValueNb(pContext, lArray0);
  }
  {
    static SGLbool lArray0[60UL] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    SDY1_specification_GaugeVertical_S_ElemVisible(pContext, lArray0);
  }
  {
    static SGLbool lArray0[120UL] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    SDY1_specification_GaugeVertical_S_unused2(pContext, lArray0);
  }
  SDY1_specification_GaugeVertical_S_RunTimeMode(pContext, 0);
  SDY1_specification_GaugeVertical_S_LocGraduationColor(pContext, 1016L);

  pContext->_parentPriority = 0L;

  SDY1_specification_Scale_init(&(pContext->_Scale__));
  SDY1_specification_Graduation_element_init(&(pContext->_minmax__0));
  SDY1_specification_Graduation_element_init(&(pContext->_minmax__1));
}

void SDY1_specification_GaugeVertical_predraw(SDY1_specification_typ_GaugeVertical *pContext)
{
  SDY1_specification_GaugeVertical_S_Integral(pContext, 7L);
  SDY1_specification_GaugeVertical_S_Fractional(pContext, 1L);

  SDY1_specification_Scale_predraw(&(pContext->_Scale__));
  SDY1_specification_Graduation_element_predraw(&(pContext->_minmax__0));
  SDY1_specification_Graduation_element_predraw(&(pContext->_minmax__1));
}

void SDY1_specification_GaugeVertical_draw(SDY1_specification_typ_GaugeVertical *pContext, SGLint32 pPriority)
{
  SGLuint32 _lParentMasks = f065();
  if (SGLint32_eq(pPriority, pContext->_parentPriority)) {

    /* Object: GaugeVertical, Type: container, OID: a9a02e64-0a78-42e6-824e-aeb325478a64 */
    {

      /* Object: GetFontSize, Type: importedFunction, OID: b3eb2f71-8aa6-4344-86d8-568082a7b552 */
      {
        f019();
        GetFontSize_Strings(SDY1_specification_GaugeVertical_G_Font(pContext), &(SDY1_specification_GaugeVertical_G_FontSizeX(pContext)), &(SDY1_specification_GaugeVertical_G_FontSizeY(pContext)));
        f064();
        f020();
      }

      /* Object: wrapper_Scale, Type: importedFunction, OID: 98506132-a0d1-4c4a-91b9-183da1aa7766 */
      {
        f056(_lParentMasks);
        wrapper_Scale(SDY1_specification_GaugeVertical_G_SizeX(pContext), SGLfloat_div(SGLfloat_add(SDY1_specification_GaugeVertical_G_MaxValue(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)), 2.0F), SGLfloat_sub(SDY1_specification_GaugeVertical_G_MaxValue(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)), SDY1_specification_GaugeVertical_G_FontSizeX(pContext), 0.0F, 0L, &(SDY1_specification_GaugeVertical_G_OriginPx(pContext)), &(SDY1_specification_GaugeVertical_G_unused1(pContext)), &(SDY1_specification_GaugeVertical_G_ValueNb(pContext)), &(SDY1_specification_GaugeVertical_G_Integral(pContext)), &(SDY1_specification_GaugeVertical_G_Fractional(pContext)), &(SDY1_specification_GaugeVertical_G_ElemVisible(pContext)), &(SDY1_specification_GaugeVertical_G_unused2(pContext)), &(SDY1_specification_GaugeVertical_G_RunTimeMode(pContext)));
      }

      /* Object: Margin, Type: assignment, OID: 5431da26-25b7-4a9b-955f-f391f20187cd */
      {
        SDY1_specification_GaugeVertical_G_Margin(pContext) = (SGLfloat_le(SDY1_specification_GaugeVertical_G_SizeX(pContext), 20.0F) ? SGLfloat_div(SDY1_specification_GaugeVertical_G_SizeX(pContext), 4.0F) : 5.0F);
      }

      /* Object: GraduationColor, Type: assignment, OID: 13c10fd2-0d1f-42f6-bbc8-27afdf0568d0 */
      {
        SDY1_specification_GaugeVertical_G_LocGraduationColor(pContext) = (SGLint32_gt(SDY1_specification_GaugeVertical_G_FontColor(pContext), 0L) ? SDY1_specification_GaugeVertical_G_FontColor(pContext) : SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 16L));
      }

      /* Object: OuterBorder, Type: referenceContainer, OID: 50759443-01bc-4c58-b2a2-bdc18bfc8f3c */
      {
        SDY1_specification_typ_FrameShape _lSubContextVar;
        SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
        SDY1_specification_FrameShape_init(_lSubContext);
        SDY1_specification_FrameShape_S_Color(_lSubContext, SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 2L));
        SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
        SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
        SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 2L));
        SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
        SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 8.0F);
        SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
        SDY1_specification_FrameShape_S_SizeX(_lSubContext, SDY1_specification_GaugeVertical_G_SizeX(pContext));
        SDY1_specification_FrameShape_S_SizeY(_lSubContext, SDY1_specification_GaugeVertical_G_SizeY(pContext));
        SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_GaugeVertical_G_Style(pContext));
        SDY1_specification_FrameShape_S_Texture(_lSubContext, -1L);
        _lSubContext->_parentPriority = pContext->_parentPriority;
        SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
      }

      /* Object: InnerBorder, Type: referenceContainer, OID: f5318f48-bcc5-461b-9d3f-c61b0afee891 */
      {
        f056(_lParentMasks);
        f073(2.0F, 2.0F);
        {
          SDY1_specification_typ_FrameShape _lSubContextVar;
          SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
          SDY1_specification_FrameShape_init(_lSubContext);
          SDY1_specification_FrameShape_S_Color(_lSubContext, SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 4L));
          SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
          SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
          SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 4L));
          SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
          SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 7.0F);
          SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
          SDY1_specification_FrameShape_S_SizeX(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeX(pContext), 4.0F));
          SDY1_specification_FrameShape_S_SizeY(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 4.0F));
          SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_GaugeVertical_G_Style(pContext));
          SDY1_specification_FrameShape_S_Texture(_lSubContext, -1L);
          _lSubContext->_parentPriority = pContext->_parentPriority;
          SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
        }
        f074();
      }

      /* Object: BackGround, Type: referenceContainer, OID: 2b288320-f467-41ff-b0d9-72758c9eb9bc */
      {
        f056(_lParentMasks);
        f073(3.0F, 3.0F);
        {
          SDY1_specification_typ_FrameShape _lSubContextVar;
          SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
          SDY1_specification_FrameShape_init(_lSubContext);
          if (SGLint32_eq(SDY1_specification_GaugeVertical_G_BackColor(pContext), -1L)) {
            SDY1_specification_FrameShape_S_Color(_lSubContext, SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 2L));
          }
          else {
            SDY1_specification_FrameShape_S_Color(_lSubContext, SDY1_specification_GaugeVertical_G_BackColor(pContext));
          }
          SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
          SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
          SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 4L));
          SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
          SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 5.0F);
          SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
          SDY1_specification_FrameShape_S_SizeX(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeX(pContext), 6.0F));
          SDY1_specification_FrameShape_S_SizeY(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 6.0F));
          SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_GaugeVertical_G_Style(pContext));
          SDY1_specification_FrameShape_S_Texture(_lSubContext, -1L);
          _lSubContext->_parentPriority = pContext->_parentPriority;
          SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
        }
        f074();
      }

      /* Object: BackGrad, Type: referenceContainer, OID: 909932aa-97df-47f3-b97b-6f5043c425be */
      {
        f056(_lParentMasks);
        f073(3.0F, 3.0F);
        {
          SDY1_specification_typ_FrameShape _lSubContextVar;
          SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
          SDY1_specification_FrameShape_init(_lSubContext);
          SDY1_specification_FrameShape_S_Color(_lSubContext, SDY1_specification_GaugeVertical_G_BaseColor(pContext));
          SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
          SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
          if (SGLint32_eq(SDY1_specification_GaugeVertical_G_BackColor(pContext), -1L)) {
            SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 2L));
          }
          else {
            SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, SDY1_specification_GaugeVertical_G_BackColor(pContext));
          }
          SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
          SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 5.0F);
          SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
          SDY1_specification_FrameShape_S_SizeX(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeX(pContext), 6.0F));
          SDY1_specification_FrameShape_S_SizeY(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 6.0F));
          SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_GaugeVertical_G_Style(pContext));
          SDY1_specification_FrameShape_S_Texture(_lSubContext, 245L);
          _lSubContext->_parentPriority = pContext->_parentPriority;
          SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
        }
        f074();
      }

      /* Object: ForeGround, Type: referenceContainer, OID: a83b6aca-6980-4474-add3-43f5179c29c1 */
      {
        if (SGLfloat_gt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext))) {
          f056(_lParentMasks);
          f073(3.0F, (SDY1_specification_GaugeVertical_G_Mirror(pContext) ? SGLfloat_sub(SGLfloat_sub(SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 1.0F), 2.0F), (SGLfloat_gt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MaxValue(pContext)) ? SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 6.0F) : (SGLfloat_lt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)) ? 0.001F : SGLfloat_mul(SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 6.0F), SGLfloat_div(SGLfloat_add(SGLfloat_sub(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)), 0.001F), SGLfloat_sub(SDY1_specification_GaugeVertical_G_MaxValue(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext))))))) : 3.0F));
          {
            SDY1_specification_typ_FrameShape _lSubContextVar;
            SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
            SDY1_specification_FrameShape_init(_lSubContext);
            if (SGLint32_eq(SDY1_specification_GaugeVertical_G_FrontColor(pContext), -1L)) {
              SDY1_specification_FrameShape_S_Color(_lSubContext, SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 7L));
            }
            else {
              SDY1_specification_FrameShape_S_Color(_lSubContext, SDY1_specification_GaugeVertical_G_FrontColor(pContext));
            }
            SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, -1L);
            SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 5.0F);
            SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_SizeX(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeX(pContext), 6.0F));
            if (SGLfloat_gt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MaxValue(pContext))) {
              SDY1_specification_FrameShape_S_SizeY(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 6.0F));
            }
            else {
              if (SGLfloat_lt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext))) {
                SDY1_specification_FrameShape_S_SizeY(_lSubContext, 0.001F);
              }
              else {
                SDY1_specification_FrameShape_S_SizeY(_lSubContext, SGLfloat_mul(SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 6.0F), SGLfloat_div(SGLfloat_add(SGLfloat_sub(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)), 0.001F), SGLfloat_sub(SDY1_specification_GaugeVertical_G_MaxValue(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)))));
              }
            }
            SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_GaugeVertical_G_Style(pContext));
            SDY1_specification_FrameShape_S_Texture(_lSubContext, -1L);
            _lSubContext->_parentPriority = pContext->_parentPriority;
            SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
          }
          f074();
        }
      }

      /* Object: ForeGroundGrad, Type: referenceContainer, OID: 4add5965-303e-43da-951f-4fa716ea6a0f */
      {
        if (SGLfloat_gt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext))) {
          f056(_lParentMasks);
          f073(3.0F, (SDY1_specification_GaugeVertical_G_Mirror(pContext) ? SGLfloat_sub(SGLfloat_sub(SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 1.0F), 2.0F), (SGLfloat_gt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MaxValue(pContext)) ? SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 6.0F) : (SGLfloat_lt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)) ? 0.001F : SGLfloat_mul(SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 6.0F), SGLfloat_div(SGLfloat_add(SGLfloat_sub(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)), 0.001F), SGLfloat_sub(SDY1_specification_GaugeVertical_G_MaxValue(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext))))))) : 3.0F));
          {
            SDY1_specification_typ_FrameShape _lSubContextVar;
            SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
            SDY1_specification_FrameShape_init(_lSubContext);
            if (SGLint32_eq(SDY1_specification_GaugeVertical_G_FrontColor(pContext), -1L)) {
              SDY1_specification_FrameShape_S_Color(_lSubContext, SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 8L));
            }
            else {
              SDY1_specification_FrameShape_S_Color(_lSubContext, SDY1_specification_GaugeVertical_G_BaseColor(pContext));
            }
            SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, -1L);
            SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 5.0F);
            SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_SizeX(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeX(pContext), 6.0F));
            if (SGLfloat_gt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MaxValue(pContext))) {
              SDY1_specification_FrameShape_S_SizeY(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 6.0F));
            }
            else {
              if (SGLfloat_lt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext))) {
                SDY1_specification_FrameShape_S_SizeY(_lSubContext, 0.001F);
              }
              else {
                SDY1_specification_FrameShape_S_SizeY(_lSubContext, SGLfloat_mul(SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), 6.0F), SGLfloat_div(SGLfloat_add(SGLfloat_sub(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)), 0.001F), SGLfloat_sub(SDY1_specification_GaugeVertical_G_MaxValue(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)))));
              }
            }
            SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_GaugeVertical_G_Style(pContext));
            if (SGLint32_eq(SDY1_specification_GaugeVertical_G_FrontColor(pContext), -1L)) {
              SDY1_specification_FrameShape_S_Texture(_lSubContext, 247L);
            }
            else {
              SDY1_specification_FrameShape_S_Texture(_lSubContext, 242L);
            }
            _lSubContext->_parentPriority = pContext->_parentPriority;
            SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
          }
          f074();
        }
      }

      /* Object: Value, Type: bifont, OID: f9b68901-908f-47b9-b96e-2bdbd8f95520 */
      {
        if (SDY1_specification_GaugeVertical_G_DisplayValueAsDigits(pContext)) {
          f056(_lParentMasks);
          if (SGLint32_ge((SGLint32_eq(SDY1_specification_GaugeVertical_G_FontColor(pContext), -1L) ? SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 15L) : SDY1_specification_GaugeVertical_G_FontColor(pContext)), 0L)) {
            f013((SGLint32_eq(SDY1_specification_GaugeVertical_G_FontColor(pContext), -1L) ? SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 15L) : SDY1_specification_GaugeVertical_G_FontColor(pContext)));
            f085(-1L);
            f075(2L);
            f048(SDY1_specification_GaugeVertical_G_Font(pContext));
            f009(f150);
            f050(f206, f208);
            f049((SGLint32_eq(SDY1_specification_GaugeVertical_G_FontColor(pContext), -1L) ? SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 15L) : SDY1_specification_GaugeVertical_G_FontColor(pContext)), SDY1_specification_GaugeVertical_G_Font(pContext), 2L);
            {
              sgl_numeric_format lFormat;
              lFormat.l_integralPart = SDY1_specification_GaugeVertical_G_Integral(pContext);
              lFormat.l_fractionalPart = SDY1_specification_GaugeVertical_G_Fractional(pContext);
              lFormat.l_secondFontPos = 0L;
              lFormat.b_separator = 46U;
              lFormat.b_leadingZeros = 0;
              lFormat.l_displaySign = f202;
              f054(-10.0F, (SDY1_specification_GaugeVertical_G_Mirror(pContext) ? SGLfloat_sub(SDY1_specification_GaugeVertical_G_SizeY(pContext), (SGLfloat_gt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MaxValue(pContext)) ? SDY1_specification_GaugeVertical_G_SizeY(pContext) : (SGLfloat_lt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)) ? 0.0F : SGLfloat_mul(SDY1_specification_GaugeVertical_G_SizeY(pContext), SGLfloat_div(SGLfloat_sub(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)), SGLfloat_sub(SDY1_specification_GaugeVertical_G_MaxValue(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext))))))) : (SGLfloat_gt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MaxValue(pContext)) ? SDY1_specification_GaugeVertical_G_SizeY(pContext) : (SGLfloat_lt(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)) ? 0.0F : SGLfloat_mul(SDY1_specification_GaugeVertical_G_SizeY(pContext), SGLfloat_div(SGLfloat_sub(SDY1_specification_GaugeVertical_G_Value(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)), SGLfloat_sub(SDY1_specification_GaugeVertical_G_MaxValue(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext))))))), SDY1_specification_GaugeVertical_G_Value(pContext), &lFormat);
            }
          }
        }
      }

      /* Object: Graduation, Type: container, OID: 4a9b297c-b9fa-4e23-8eec-ed369455e352 */
      {
        f073(SGLfloat_add(SGLfloat_add(SDY1_specification_GaugeVertical_G_SizeX(pContext), 1.0F), 2.0F), 0.0F);

        /* Object: visi_all, Type: container, OID: a3480891-99c7-4226-893b-b94d5c01b340 */
        {
          if (SGLint32_eq(SDY1_specification_GaugeVertical_G_DisplayGraduation(pContext), 2L)) {

            /* Object: Scale, Type: referenceContainer, OID: 32e536f9-8b74-4c1e-a5cc-e8d170cc531b */
            {
              f056(_lParentMasks);
              f073(0.0F, (SDY1_specification_GaugeVertical_G_Mirror(pContext) ? SDY1_specification_GaugeVertical_G_SizeY(pContext) : 0.0F));
              {
                SDY1_specification_typ_Scale *_lSubContext = &(pContext->_Scale__);
                if (SDY1_specification_GaugeVertical_G_Mirror(pContext)) {
                  SDY1_specification_Scale_S_Angle(_lSubContext, 270.0F);
                }
                else {
                  SDY1_specification_Scale_S_Angle(_lSubContext, 90.0F);
                }
                SDY1_specification_Scale_S_DistLargeGrad(_lSubContext, 0.0F);
                SDY1_specification_Scale_S_Font(_lSubContext, SDY1_specification_GaugeVertical_G_Font(pContext));
                SDY1_specification_Scale_S_InvertTextSide(_lSubContext, SDY1_specification_GaugeVertical_G_Mirror(pContext));
                SDY1_specification_Scale_S_Length(_lSubContext, SDY1_specification_GaugeVertical_G_SizeY(pContext));
                SDY1_specification_Scale_S_NumberOfSmallGradPerLargeGrad(_lSubContext, 5L);
                SDY1_specification_Scale_S_Range(_lSubContext, SGLfloat_sub(SDY1_specification_GaugeVertical_G_MaxValue(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)));
                SDY1_specification_Scale_S_TextColor(_lSubContext, SDY1_specification_GaugeVertical_G_LocGraduationColor(pContext));
                SDY1_specification_Scale_S_Value(_lSubContext, SGLfloat_div(SGLfloat_add(SDY1_specification_GaugeVertical_G_MaxValue(pContext), SDY1_specification_GaugeVertical_G_MinValue(pContext)), 2.0F));
                SDY1_specification_Scale_S_Width(_lSubContext, 10.0F);
                _lSubContext->_parentPriority = pContext->_parentPriority;
                SDY1_specification_Scale_draw(_lSubContext, pPriority);
              }
              f074();
            }
          }
        }

        /* Object: visi_minmax, Type: container, OID: 470e4ccb-2c99-43ce-bbc5-fa4c1d25ea59 */
        {
          if (SGLint32_eq(SDY1_specification_GaugeVertical_G_DisplayGraduation(pContext), 1L)) {

            /* Object: minmax, Type: nplicatorContainer, OID: 18677195-fe4d-453a-ae63-503e5153d51f */
            {
              SGLfloat lArray0_minmax[2UL];
              SGLfloat lArray1_minmax[2UL];
              SGLfloat lArray2_minmax[2UL];
              lArray0_minmax[0UL] = 0.0F;
              lArray0_minmax[1UL] = SDY1_specification_GaugeVertical_G_SizeY(pContext);
              lArray1_minmax[0UL] = SDY1_specification_GaugeVertical_G_SizeY(pContext);
              lArray1_minmax[1UL] = 0.0F;
              lArray2_minmax[0UL] = SDY1_specification_GaugeVertical_G_MinValue(pContext);
              lArray2_minmax[1UL] = SDY1_specification_GaugeVertical_G_MaxValue(pContext);
              /* Instance 0 */
              f056(_lParentMasks);
              f073(0.0F, ((SDY1_specification_GaugeVertical_G_Mirror(pContext) ? lArray1_minmax : lArray0_minmax))[0UL]);
              {
                SDY1_specification_typ_Graduation_element *_lSubContext = &(pContext->_minmax__0);
                SDY1_specification_Graduation_element_S_Angle(_lSubContext, 0.0F);
                SDY1_specification_Graduation_element_S_Font(_lSubContext, SDY1_specification_GaugeVertical_G_Font(pContext));
                SDY1_specification_Graduation_element_S_FontColor(_lSubContext, SDY1_specification_GaugeVertical_G_LocGraduationColor(pContext));
                SDY1_specification_Graduation_element_S_Fractional(_lSubContext, SDY1_specification_GaugeVertical_G_Fractional(pContext));
                SDY1_specification_Graduation_element_S_Integral(_lSubContext, SDY1_specification_GaugeVertical_G_Integral(pContext));
                SDY1_specification_Graduation_element_S_OriginOffset(_lSubContext, 0.0F);
                SDY1_specification_Graduation_element_S_Size(_lSubContext, 10.0F);
                SDY1_specification_Graduation_element_S_Value(_lSubContext, lArray2_minmax[0UL]);
                _lSubContext->_parentPriority = pContext->_parentPriority;
                SDY1_specification_Graduation_element_draw(_lSubContext, pPriority);
              }
              f074();
              /* Instance 1 */
              f056(_lParentMasks);
              f073(0.0F, ((SDY1_specification_GaugeVertical_G_Mirror(pContext) ? lArray1_minmax : lArray0_minmax))[1UL]);
              {
                SDY1_specification_typ_Graduation_element *_lSubContext = &(pContext->_minmax__1);
                SDY1_specification_Graduation_element_S_Angle(_lSubContext, 0.0F);
                SDY1_specification_Graduation_element_S_Font(_lSubContext, SDY1_specification_GaugeVertical_G_Font(pContext));
                SDY1_specification_Graduation_element_S_FontColor(_lSubContext, SDY1_specification_GaugeVertical_G_LocGraduationColor(pContext));
                SDY1_specification_Graduation_element_S_Fractional(_lSubContext, SDY1_specification_GaugeVertical_G_Fractional(pContext));
                SDY1_specification_Graduation_element_S_Integral(_lSubContext, SDY1_specification_GaugeVertical_G_Integral(pContext));
                SDY1_specification_Graduation_element_S_OriginOffset(_lSubContext, 0.0F);
                SDY1_specification_Graduation_element_S_Size(_lSubContext, 10.0F);
                SDY1_specification_Graduation_element_S_Value(_lSubContext, lArray2_minmax[1UL]);
                _lSubContext->_parentPriority = pContext->_parentPriority;
                SDY1_specification_Graduation_element_draw(_lSubContext, pPriority);
              }
              f074();
            }
          }
        }
        f074();
      }

      /* Object: text, Type: text, OID: 4cee9306-a73a-4b70-84fb-5cdc194c3520 */
      {
        static SGLuint8 lArray0_text[255UL] = {69U,114U,114U,111U,114U,58U,32U,77U,105U,110U,86U,97U,108U,117U,101U,32U,62U,32U,77U,97U,120U,86U,97U,108U,117U,101U};
        if (SGLfloat_gt(SDY1_specification_GaugeVertical_G_MinValue(pContext), SDY1_specification_GaugeVertical_G_MaxValue(pContext))) {
          f056(_lParentMasks);
          f013(11L);
          f085(-1L);
          f075(2L);
          f048(21L);
          f008(f150);
          f050(f204, f209);
          f034(-142.0F, 110.0F, lArray0_text, 255L);
        }
      }

      /* Object: Label, Type: text, OID: f5cb1b3c-b23c-4a99-91ca-0f6be01948d0 */
      {
        if (SGLuint8_ne((SDY1_specification_GaugeVertical_G_Label(pContext))[0UL], 0U)) {
          f056(_lParentMasks);
          if (SGLint32_ge((SGLint32_eq(SDY1_specification_GaugeVertical_G_FontColor(pContext), -1L) ? SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 15L) : SDY1_specification_GaugeVertical_G_FontColor(pContext)), 0L)) {
            f013((SGLint32_eq(SDY1_specification_GaugeVertical_G_FontColor(pContext), -1L) ? SGLint32_add(SDY1_specification_GaugeVertical_G_BaseColor(pContext), 15L) : SDY1_specification_GaugeVertical_G_FontColor(pContext)));
            f085(-1L);
            f075(2L);
            f048(SDY1_specification_GaugeVertical_G_Font(pContext));
            f009(f150);
            f050(f204, f207);
            f034(0.0F, -10.0F, SDY1_specification_GaugeVertical_G_Label(pContext), 255L);
          }
        }
      }
    }
  }
}


/*********************************************************
 ** End of file
 ** End of generation: 2018-01-13T10:58:27
 *********************************************************/
