/*********************************************************
 **
 ** File  SDY1_specification_Gauge.c
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Gauge.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2018-01-13T10:58:27
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY1_specification\Code -prefix SDY1_specification_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\specification.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 *********************************************************/

#include "SDY1_specification_Gauge.h"
#include "SDY1_specification_imported_functions.h"
#include "sgl_simu.h"


#include <stdlib.h>
#include <string.h>

SDY1_specification_typ_Gauge * SDY1_specification_Gauge_alloc(void)
{
  SDY1_specification_typ_Gauge *lContext = malloc(sizeof(SDY1_specification_typ_Gauge));
  memset(lContext, 0L, sizeof(SDY1_specification_typ_Gauge));
  return lContext;
}

void SDY1_specification_Gauge_free(SDY1_specification_typ_Gauge *pContext)
{
  free(pContext);
}


void SDY1_specification_Gauge_init(SDY1_specification_typ_Gauge *pContext)
{
  SDY1_specification_Gauge_S_SizeX(pContext, 250.0F);
  SDY1_specification_Gauge_S_SizeY(pContext, 50.0F);
  SDY1_specification_Gauge_S_Style(pContext, 1L);
  SDY1_specification_Gauge_S_ColorStyle(pContext, 0L);
  SDY1_specification_Gauge_S_BackColor(pContext, -1L);
  SDY1_specification_Gauge_S_FrontColor(pContext, -1L);
  SDY1_specification_Gauge_S_Font(pContext, 21L);
  SDY1_specification_Gauge_S_TextColor(pContext, -1L);
  SDY1_specification_Gauge_S_Value(pContext, 75.0F);
  SDY1_specification_Gauge_S_MinValue(pContext, 0.0F);
  SDY1_specification_Gauge_S_MaxValue(pContext, 100.0F);
  SDY1_specification_Gauge_S_Orientation(pContext, 1L);
  SDY1_specification_Gauge_S_ShowGraduation(pContext, 2L);
  SDY1_specification_Gauge_S_ShowValue(pContext, 1);
  {
    static SGLuint8 lArray0[255UL] = {71U,97U,117U,103U,101U};
    SDY1_specification_Gauge_S_Legend(pContext, lArray0);
  }
  SDY1_specification_Gauge_S_BaseColor(pContext, 1000L);

  pContext->_parentPriority = 0L;

  SDY1_specification_GaugeHorizontal_init(&(pContext->_LEFT_TO_RIGHT__));
  SDY1_specification_GaugeHorizontal_init(&(pContext->_RIGHT_TO_LEFT__));
  SDY1_specification_GaugeVertical_init(&(pContext->_BOTTOM_TO_TOP__));
  SDY1_specification_GaugeVertical_init(&(pContext->_TOP_TO_BOTTOM__));
}

void SDY1_specification_Gauge_predraw(SDY1_specification_typ_Gauge *pContext)
{
  SDY1_specification_Gauge_S_BaseColor(pContext, 1000L);

  SDY1_specification_GaugeHorizontal_predraw(&(pContext->_LEFT_TO_RIGHT__));
  SDY1_specification_GaugeHorizontal_predraw(&(pContext->_RIGHT_TO_LEFT__));
  SDY1_specification_GaugeVertical_predraw(&(pContext->_BOTTOM_TO_TOP__));
  SDY1_specification_GaugeVertical_predraw(&(pContext->_TOP_TO_BOTTOM__));
}

void SDY1_specification_Gauge_draw(SDY1_specification_typ_Gauge *pContext, SGLint32 pPriority)
{
  SGLuint32 _lParentMasks = f065();
  if (SGLint32_eq(pPriority, pContext->_parentPriority)) {

    /* Object: Gauge, Type: container, OID: f663571f-7ff0-4a44-b429-930d250a02dc */
    {
      /* A Slider allows the user to select a value between the range of MinValue and MaxValue. The Slider can be displayed in either the horizontal or vertical axis.
         
         The Orientation specifies direction of increasing values. The event is reported upon selection by a user with a “click”. The thumb is then moved to the clicked position.
         
         MinorTickMultiple is the number of minor graduations between each major graduation.
         LsbMultiple is the number of discrete positions of the thumb between each minor graduation. */


      /* Object: ColorBase, Type: referenceContainer, OID: 87f8fd2a-2748-4684-8b6f-4ebcb124e5ef */
      {
        SDY1_specification_typ_ColorBase _lSubContextVar;
        SDY1_specification_typ_ColorBase *_lSubContext = &_lSubContextVar;
        SDY1_specification_ColorBase_init(_lSubContext);
        SDY1_specification_ColorBase_S_ColorStyle(_lSubContext, SDY1_specification_Gauge_G_ColorStyle(pContext));
        _lSubContext->_parentPriority = pContext->_parentPriority;
        SDY1_specification_ColorBase_draw(_lSubContext, pPriority);
        SDY1_specification_Gauge_G_BaseColor(pContext) = SDY1_specification_ColorBase_G_ColorBase(_lSubContext);
      }

      /* Object: Orientation, Type: conditional, OID: b4808f5d-4943-412a-8d1e-a77cc6eda153 */
      {
        switch (SDY1_specification_Gauge_G_Orientation(pContext)) {

        case 2L:

          /* Object: RIGHT_TO_LEFT, Type: referenceContainer, OID: 9dac97e5-9f20-4507-9bb2-362640df6d02 */
          {
            f056(_lParentMasks);
            f073(-3.0F, 1.0F);
            {
              SDY1_specification_typ_GaugeHorizontal *_lSubContext = &(pContext->_RIGHT_TO_LEFT__);
              SDY1_specification_GaugeHorizontal_S_BackColor(_lSubContext, SDY1_specification_Gauge_G_BackColor(pContext));
              SDY1_specification_GaugeHorizontal_S_BaseColor(_lSubContext, SDY1_specification_Gauge_G_BaseColor(pContext));
              if (SGLbool_and(SGLint32_ge(SDY1_specification_Gauge_G_ShowGraduation(pContext), 0L), SGLint32_le(SDY1_specification_Gauge_G_ShowGraduation(pContext), 2L))) {
                SDY1_specification_GaugeHorizontal_S_DisplayGraduation(_lSubContext, SDY1_specification_Gauge_G_ShowGraduation(pContext));
              }
              else {
                SDY1_specification_GaugeHorizontal_S_DisplayGraduation(_lSubContext, 2L);
              }
              SDY1_specification_GaugeHorizontal_S_DisplayValueAsDigits(_lSubContext, SDY1_specification_Gauge_G_ShowValue(pContext));
              SDY1_specification_GaugeHorizontal_S_Font(_lSubContext, SDY1_specification_Gauge_G_Font(pContext));
              SDY1_specification_GaugeHorizontal_S_FontColor(_lSubContext, SDY1_specification_Gauge_G_TextColor(pContext));
              SDY1_specification_GaugeHorizontal_S_FrontColor(_lSubContext, SDY1_specification_Gauge_G_FrontColor(pContext));
              SDY1_specification_GaugeHorizontal_S_Label(_lSubContext, SDY1_specification_Gauge_G_Legend(pContext));
              SDY1_specification_GaugeHorizontal_S_MaxValue(_lSubContext, SDY1_specification_Gauge_G_MaxValue(pContext));
              SDY1_specification_GaugeHorizontal_S_MinValue(_lSubContext, SDY1_specification_Gauge_G_MinValue(pContext));
              SDY1_specification_GaugeHorizontal_S_Mirror(_lSubContext, 1);
              SDY1_specification_GaugeHorizontal_S_SizeX(_lSubContext, SDY1_specification_Gauge_G_SizeX(pContext));
              SDY1_specification_GaugeHorizontal_S_SizeY(_lSubContext, SDY1_specification_Gauge_G_SizeY(pContext));
              if (SGLint32_eq(SDY1_specification_Gauge_G_Style(pContext), 2L)) {
                SDY1_specification_GaugeHorizontal_S_Style(_lSubContext, 2L);
              }
              else {
                SDY1_specification_GaugeHorizontal_S_Style(_lSubContext, 1L);
              }
              SDY1_specification_GaugeHorizontal_S_Value(_lSubContext, SDY1_specification_Gauge_G_Value(pContext));
              _lSubContext->_parentPriority = pContext->_parentPriority;
              SDY1_specification_GaugeHorizontal_draw(_lSubContext, pPriority);
            }
            f074();
          }
          break;

        case 3L:

          /* Object: BOTTOM_TO_TOP, Type: referenceContainer, OID: bcb79a6e-73e8-4631-a6fc-550bc90c3a35 */
          {
            f056(_lParentMasks);
            {
              SDY1_specification_typ_GaugeVertical *_lSubContext = &(pContext->_BOTTOM_TO_TOP__);
              SDY1_specification_GaugeVertical_S_BackColor(_lSubContext, SDY1_specification_Gauge_G_BackColor(pContext));
              SDY1_specification_GaugeVertical_S_BaseColor(_lSubContext, SDY1_specification_Gauge_G_BaseColor(pContext));
              if (SGLbool_and(SGLint32_ge(SDY1_specification_Gauge_G_ShowGraduation(pContext), 0L), SGLint32_le(SDY1_specification_Gauge_G_ShowGraduation(pContext), 2L))) {
                SDY1_specification_GaugeVertical_S_DisplayGraduation(_lSubContext, SDY1_specification_Gauge_G_ShowGraduation(pContext));
              }
              else {
                SDY1_specification_GaugeVertical_S_DisplayGraduation(_lSubContext, 2L);
              }
              SDY1_specification_GaugeVertical_S_DisplayValueAsDigits(_lSubContext, SDY1_specification_Gauge_G_ShowValue(pContext));
              SDY1_specification_GaugeVertical_S_Font(_lSubContext, SDY1_specification_Gauge_G_Font(pContext));
              SDY1_specification_GaugeVertical_S_FontColor(_lSubContext, SDY1_specification_Gauge_G_TextColor(pContext));
              SDY1_specification_GaugeVertical_S_FrontColor(_lSubContext, SDY1_specification_Gauge_G_FrontColor(pContext));
              SDY1_specification_GaugeVertical_S_Label(_lSubContext, SDY1_specification_Gauge_G_Legend(pContext));
              SDY1_specification_GaugeVertical_S_MaxValue(_lSubContext, SDY1_specification_Gauge_G_MaxValue(pContext));
              SDY1_specification_GaugeVertical_S_MinValue(_lSubContext, SDY1_specification_Gauge_G_MinValue(pContext));
              SDY1_specification_GaugeVertical_S_Mirror(_lSubContext, 0);
              SDY1_specification_GaugeVertical_S_SizeX(_lSubContext, SDY1_specification_Gauge_G_SizeX(pContext));
              SDY1_specification_GaugeVertical_S_SizeY(_lSubContext, SDY1_specification_Gauge_G_SizeY(pContext));
              if (SGLint32_eq(SDY1_specification_Gauge_G_Style(pContext), 2L)) {
                SDY1_specification_GaugeVertical_S_Style(_lSubContext, 2L);
              }
              else {
                SDY1_specification_GaugeVertical_S_Style(_lSubContext, 1L);
              }
              SDY1_specification_GaugeVertical_S_Value(_lSubContext, SDY1_specification_Gauge_G_Value(pContext));
              _lSubContext->_parentPriority = pContext->_parentPriority;
              SDY1_specification_GaugeVertical_draw(_lSubContext, pPriority);
            }
          }
          break;

        case 4L:

          /* Object: TOP_TO_BOTTOM, Type: referenceContainer, OID: d1256c5f-e411-4afc-87e8-8d7c163075a9 */
          {
            f056(_lParentMasks);
            {
              SDY1_specification_typ_GaugeVertical *_lSubContext = &(pContext->_TOP_TO_BOTTOM__);
              SDY1_specification_GaugeVertical_S_BackColor(_lSubContext, SDY1_specification_Gauge_G_BackColor(pContext));
              SDY1_specification_GaugeVertical_S_BaseColor(_lSubContext, SDY1_specification_Gauge_G_BaseColor(pContext));
              if (SGLbool_and(SGLint32_ge(SDY1_specification_Gauge_G_ShowGraduation(pContext), 0L), SGLint32_le(SDY1_specification_Gauge_G_ShowGraduation(pContext), 2L))) {
                SDY1_specification_GaugeVertical_S_DisplayGraduation(_lSubContext, SDY1_specification_Gauge_G_ShowGraduation(pContext));
              }
              else {
                SDY1_specification_GaugeVertical_S_DisplayGraduation(_lSubContext, 2L);
              }
              SDY1_specification_GaugeVertical_S_DisplayValueAsDigits(_lSubContext, SDY1_specification_Gauge_G_ShowValue(pContext));
              SDY1_specification_GaugeVertical_S_Font(_lSubContext, SDY1_specification_Gauge_G_Font(pContext));
              SDY1_specification_GaugeVertical_S_FontColor(_lSubContext, SDY1_specification_Gauge_G_TextColor(pContext));
              SDY1_specification_GaugeVertical_S_FrontColor(_lSubContext, SDY1_specification_Gauge_G_FrontColor(pContext));
              SDY1_specification_GaugeVertical_S_Label(_lSubContext, SDY1_specification_Gauge_G_Legend(pContext));
              SDY1_specification_GaugeVertical_S_MaxValue(_lSubContext, SDY1_specification_Gauge_G_MaxValue(pContext));
              SDY1_specification_GaugeVertical_S_MinValue(_lSubContext, SDY1_specification_Gauge_G_MinValue(pContext));
              SDY1_specification_GaugeVertical_S_Mirror(_lSubContext, 1);
              SDY1_specification_GaugeVertical_S_SizeX(_lSubContext, SDY1_specification_Gauge_G_SizeX(pContext));
              SDY1_specification_GaugeVertical_S_SizeY(_lSubContext, SDY1_specification_Gauge_G_SizeY(pContext));
              if (SGLint32_eq(SDY1_specification_Gauge_G_Style(pContext), 2L)) {
                SDY1_specification_GaugeVertical_S_Style(_lSubContext, 2L);
              }
              else {
                SDY1_specification_GaugeVertical_S_Style(_lSubContext, 1L);
              }
              SDY1_specification_GaugeVertical_S_Value(_lSubContext, SDY1_specification_Gauge_G_Value(pContext));
              _lSubContext->_parentPriority = pContext->_parentPriority;
              SDY1_specification_GaugeVertical_draw(_lSubContext, pPriority);
            }
          }
          break;

        default:
        /* case 1L */

          /* Object: LEFT_TO_RIGHT, Type: referenceContainer, OID: b1abfa5c-d628-4aa7-b681-248efb370e26 */
          {
            f056(_lParentMasks);
            f073(-3.0F, 1.0F);
            {
              SDY1_specification_typ_GaugeHorizontal *_lSubContext = &(pContext->_LEFT_TO_RIGHT__);
              SDY1_specification_GaugeHorizontal_S_BackColor(_lSubContext, SDY1_specification_Gauge_G_BackColor(pContext));
              SDY1_specification_GaugeHorizontal_S_BaseColor(_lSubContext, SDY1_specification_Gauge_G_BaseColor(pContext));
              if (SGLbool_and(SGLint32_ge(SDY1_specification_Gauge_G_ShowGraduation(pContext), 0L), SGLint32_le(SDY1_specification_Gauge_G_ShowGraduation(pContext), 2L))) {
                SDY1_specification_GaugeHorizontal_S_DisplayGraduation(_lSubContext, SDY1_specification_Gauge_G_ShowGraduation(pContext));
              }
              else {
                SDY1_specification_GaugeHorizontal_S_DisplayGraduation(_lSubContext, 2L);
              }
              SDY1_specification_GaugeHorizontal_S_DisplayValueAsDigits(_lSubContext, SDY1_specification_Gauge_G_ShowValue(pContext));
              SDY1_specification_GaugeHorizontal_S_Font(_lSubContext, SDY1_specification_Gauge_G_Font(pContext));
              SDY1_specification_GaugeHorizontal_S_FontColor(_lSubContext, SDY1_specification_Gauge_G_TextColor(pContext));
              SDY1_specification_GaugeHorizontal_S_FrontColor(_lSubContext, SDY1_specification_Gauge_G_FrontColor(pContext));
              SDY1_specification_GaugeHorizontal_S_Label(_lSubContext, SDY1_specification_Gauge_G_Legend(pContext));
              SDY1_specification_GaugeHorizontal_S_MaxValue(_lSubContext, SDY1_specification_Gauge_G_MaxValue(pContext));
              SDY1_specification_GaugeHorizontal_S_MinValue(_lSubContext, SDY1_specification_Gauge_G_MinValue(pContext));
              SDY1_specification_GaugeHorizontal_S_Mirror(_lSubContext, 0);
              SDY1_specification_GaugeHorizontal_S_SizeX(_lSubContext, SDY1_specification_Gauge_G_SizeX(pContext));
              SDY1_specification_GaugeHorizontal_S_SizeY(_lSubContext, SDY1_specification_Gauge_G_SizeY(pContext));
              if (SGLint32_eq(SDY1_specification_Gauge_G_Style(pContext), 2L)) {
                SDY1_specification_GaugeHorizontal_S_Style(_lSubContext, 2L);
              }
              else {
                SDY1_specification_GaugeHorizontal_S_Style(_lSubContext, 1L);
              }
              SDY1_specification_GaugeHorizontal_S_Value(_lSubContext, SDY1_specification_Gauge_G_Value(pContext));
              _lSubContext->_parentPriority = pContext->_parentPriority;
              SDY1_specification_GaugeHorizontal_draw(_lSubContext, pPriority);
            }
            f074();
          }
          break;
        }
      }

      /* Object: text, Type: text, OID: 9a9bf323-ed57-46fa-bad6-72cd93b589fd */
      {
        static SGLuint8 lArray0_text[255UL] = {69U,114U,114U,111U,114U,58U,32U,77U,105U,110U,86U,97U,108U,117U,101U,32U,62U,32U,77U,97U,120U,86U,97U,108U,117U,101U};
        if (SGLfloat_gt(SDY1_specification_Gauge_G_MinValue(pContext), SDY1_specification_Gauge_G_MaxValue(pContext))) {
          f056(_lParentMasks);
          f013(11L);
          f085(-1L);
          f075(2L);
          f048(SDY1_specification_Gauge_G_Font(pContext));
          f008(f150);
          f050(f205, f208);
          f034(SGLfloat_div(SDY1_specification_Gauge_G_SizeX(pContext), 2.0F), SGLfloat_div(SDY1_specification_Gauge_G_SizeY(pContext), 2.0F), lArray0_text, 255L);
        }
      }
    }
  }
}


/*********************************************************
 ** End of file
 ** End of generation: 2018-01-13T10:58:27
 *********************************************************/

