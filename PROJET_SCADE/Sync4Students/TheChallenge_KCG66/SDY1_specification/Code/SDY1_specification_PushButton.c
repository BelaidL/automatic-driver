/*********************************************************
 **
 ** File  SDY1_specification_PushButton.c
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\PushButton.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2018-01-13T10:58:26
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY1_specification\Code -prefix SDY1_specification_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\specification.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\InfiniteKnob.wgfx
 *********************************************************/

/* Inlined constants:
   FOCUS_WIDTH=3.4
   INNERBORDER_WIDTH=0.6
   OUTLINE_RADIUS=8.0
   TEXT_MARGIN=5.0
   WL_BACK1=2
   WL_BLACK=1
   WL_DISABLE_ALPHA=11
   WL_FOCUS=14
   WL_INNER=9
   WL_TEXT_UNSEL=13
 */

#include "SDY1_specification_PushButton.h"
#include "SDY1_specification_imported_functions.h"
#include "sgl_simu.h"


#include <stdlib.h>
#include <string.h>

SDY1_specification_typ_PushButton * SDY1_specification_PushButton_alloc(void)
{
  SDY1_specification_typ_PushButton *lContext = malloc(sizeof(SDY1_specification_typ_PushButton));
  memset(lContext, 0L, sizeof(SDY1_specification_typ_PushButton));
  return lContext;
}

void SDY1_specification_PushButton_free(SDY1_specification_typ_PushButton *pContext)
{
  free(pContext);
}


void SDY1_specification_PushButton_init(SDY1_specification_typ_PushButton *pContext)
{
  SDY1_specification_PushButton_S_WidgetId(pContext, 0L);
  SDY1_specification_PushButton_S_NextWidgetId(pContext, 0L);
  SDY1_specification_PushButton_S_SizeX(pContext, 150.0F);
  SDY1_specification_PushButton_S_SizeY(pContext, 50.0F);
  SDY1_specification_PushButton_S_Enable(pContext, 1);
  SDY1_specification_PushButton_S_Style(pContext, 2L);
  SDY1_specification_PushButton_S_ColorStyle(pContext, 0L);
  {
    static SGLuint8 lArray0[255UL] = {76U,97U,98U,101U,108U};
    SDY1_specification_PushButton_S_LabelString(pContext, lArray0);
  }
  SDY1_specification_PushButton_S_ButtonColor(pContext, -1L);
  SDY1_specification_PushButton_S_Font(pContext, 21L);
  SDY1_specification_PushButton_S_TextColor(pContext, -1L);
  SDY1_specification_PushButton_S_TextAlignment(pContext, 1L);
  SDY1_specification_PushButton_S_EmitCondition(pContext, 2L);
  SDY1_specification_PushButton_S_Selection(pContext, 0);
  SDY1_specification_PushButton_S_MouseInside(pContext, 0);
  SDY1_specification_PushButton_S_MouseReleased(pContext, 0);
  SDY1_specification_PushButton_S_MousePressed(pContext, 0);
  SDY1_specification_PushButton_S_ButtonPressed(pContext, 0);
  SDY1_specification_PushButton_S_HasFocus(pContext, 0L);
  SDY1_specification_PushButton_S_KeyCode(pContext, 0L);
  SDY1_specification_PushButton_S_KeyReleased(pContext, 0);
  SDY1_specification_PushButton_S_KeyPressed(pContext, 0);
  SDY1_specification_PushButton_S_BaseColor(pContext, 1000L);
  SDY1_specification_PushButton_S_LocTextColorUnselected(pContext, 1013L);
  SDY1_specification_PushButton_S_LocOuterColor(pContext, 1002L);
  SDY1_specification_PushButton_S_LocInnerColor(pContext, 1009L);
  SDY1_specification_PushButton_S_LocBackColor(pContext, 1009L);
  SDY1_specification_PushButton_S_LocGradColor(pContext, 1002L);

  pContext->_parentPriority = 0L;

  SDY1_specification_IndividualFocus_init(&(pContext->_IndividualFocus__));
  SDY1_specification_KeyEvent_init(&(pContext->_KeyEvent__));
  wrapper_PushButton_reset(&(pContext->_wrapper_PushButton__));
}

void SDY1_specification_PushButton_predraw(SDY1_specification_typ_PushButton *pContext)
{
  SDY1_specification_PushButton_S_MouseInside(pContext, 0);
  SDY1_specification_PushButton_S_MouseReleased(pContext, 0);
  SDY1_specification_PushButton_S_MousePressed(pContext, 0);

  SDY1_specification_IndividualFocus_predraw(&(pContext->_IndividualFocus__));
  SDY1_specification_KeyEvent_predraw(&(pContext->_KeyEvent__));
}

void SDY1_specification_PushButton_draw(SDY1_specification_typ_PushButton *pContext, SGLint32 pPriority)
{
  SGLuint32 _lParentMasks = f065();
  if (SGLint32_eq(pPriority, pContext->_parentPriority)) {

    /* Object: PushButton, Type: container, OID: f663571f-7ff0-4a44-b429-930d250a02dc */
    {
      /* A PushButton widget is a momentary switched Button, which enables the user to
         launch an action.
         
         the output Selection is true for exactly one cycle when the widget is selected.
         
         the parameter Emitcondition controls if the selection occurs when the mouse is pressed or released. */


      /* Object: rectangle_area, Type: rectangleArea, OID: 11d9aa35-b1db-44a8-a73c-be4e225ffcb0 */
      {
        if (SDY1_specification_PushButton_G_Enable(pContext)) {
          {
            SGLfloat lX = 0.0F;
            SGLfloat lY = 0.0F;
            SDY1_specification_locate(-1L, &lX, &lY);
            SDY1_specification_PushButton_G_MouseInside(pContext) = f044(lX, lY, 0.0F, 0.0F, SDY1_specification_PushButton_G_SizeX(pContext), SDY1_specification_PushButton_G_SizeY(pContext));
          }
        }
      }

      /* Object: IndividualFocus, Type: referenceContainer, OID: c096c9cd-4f0e-4a6e-afa2-c18508ea018d */
      {
        SDY1_specification_typ_IndividualFocus *_lSubContext = &(pContext->_IndividualFocus__);
        SDY1_specification_IndividualFocus_S_IsContainer(_lSubContext, 0);
        SDY1_specification_IndividualFocus_S_NextWidgetId(_lSubContext, SDY1_specification_PushButton_G_NextWidgetId(pContext));
        SDY1_specification_IndividualFocus_S_RequestNoFocus(_lSubContext, 0);
        SDY1_specification_IndividualFocus_S_Requestfocus(_lSubContext, SGLbool_and(SDY1_specification_PushButton_G_MouseInside(pContext), SDY1_specification_PushButton_G_Enable(pContext)));
        SDY1_specification_IndividualFocus_S_WidgetId_in(_lSubContext, SDY1_specification_PushButton_G_WidgetId(pContext));
        _lSubContext->_parentPriority = pContext->_parentPriority;
        SDY1_specification_IndividualFocus_draw(_lSubContext, pPriority);
        SDY1_specification_PushButton_G_HasFocus(pContext) = SDY1_specification_IndividualFocus_G_HasFocus(_lSubContext);
        SDY1_specification_PushButton_G_MousePressed(pContext) = SDY1_specification_IndividualFocus_G_Pressed(_lSubContext);
        SDY1_specification_PushButton_G_MouseReleased(pContext) = SDY1_specification_IndividualFocus_G_Released(_lSubContext);
      }

      /* Object: KeyEvent, Type: referenceContainer, OID: ea5d131c-7125-4778-9f3a-2a040c2fc9da */
      {
        f056(_lParentMasks);
        f073(0.0F, 0.5F);
        {
          SDY1_specification_typ_KeyEvent *_lSubContext = &(pContext->_KeyEvent__);
          SDY1_specification_KeyEvent_S_EmitCondition(_lSubContext, SDY1_specification_PushButton_G_EmitCondition(pContext));
          SDY1_specification_KeyEvent_S_HasFocus(_lSubContext, SDY1_specification_PushButton_G_HasFocus(pContext));
          _lSubContext->_parentPriority = pContext->_parentPriority;
          SDY1_specification_KeyEvent_draw(_lSubContext, pPriority);
          SDY1_specification_PushButton_G_KeyCode(pContext) = SDY1_specification_KeyEvent_G_Code(_lSubContext);
          SDY1_specification_PushButton_G_KeyPressed(pContext) = SDY1_specification_KeyEvent_G_Pressed(_lSubContext);
          SDY1_specification_PushButton_G_KeyReleased(pContext) = SDY1_specification_KeyEvent_G_Released(_lSubContext);
        }
        f074();
      }

      /* Object: ColorBase, Type: referenceContainer, OID: 0ee4b7f7-4d1a-4f58-9cf1-e32f2c57f4bd */
      {
        f056(_lParentMasks);
        {
          SDY1_specification_typ_ColorBase _lSubContextVar;
          SDY1_specification_typ_ColorBase *_lSubContext = &_lSubContextVar;
          SDY1_specification_ColorBase_init(_lSubContext);
          SDY1_specification_ColorBase_S_ColorStyle(_lSubContext, SDY1_specification_PushButton_G_ColorStyle(pContext));
          _lSubContext->_parentPriority = pContext->_parentPriority;
          SDY1_specification_ColorBase_draw(_lSubContext, pPriority);
          SDY1_specification_PushButton_G_BaseColor(pContext) = SDY1_specification_ColorBase_G_ColorBase(_lSubContext);
        }
      }

      /* Object: FrameComponent, Type: container, OID: bdb2e66e-713f-4ad1-a70f-4cbda9395e77 */
      {

        /* Object: OuterColor, Type: assignment, OID: 280bc1a3-29ea-4650-b266-96245309eea3 */
        {
          SDY1_specification_PushButton_G_LocOuterColor(pContext) = (SGLint32_ne(SDY1_specification_PushButton_G_HasFocus(pContext), 0L) ? SGLint32_add(SDY1_specification_PushButton_G_BaseColor(pContext), 14L) : SGLint32_add(SDY1_specification_PushButton_G_BaseColor(pContext), 2L));
        }

        /* Object: InnerColor, Type: assignment, OID: cc967983-894a-4ea5-afe3-4cf4e3253548 */
        {
          SDY1_specification_PushButton_G_LocInnerColor(pContext) = SGLint32_add(SDY1_specification_PushButton_G_BaseColor(pContext), 9L);
        }

        /* Object: BackColor, Type: assignment, OID: 7e6c6e54-2867-4e66-b6a8-9edf6f47ec1e */
        {
          SDY1_specification_PushButton_G_LocBackColor(pContext) = (SGLint32_ge(SDY1_specification_PushButton_G_ButtonColor(pContext), 0L) ? SDY1_specification_PushButton_G_ButtonColor(pContext) : SGLint32_add(SDY1_specification_PushButton_G_BaseColor(pContext), 9L));
        }

        /* Object: GradColor, Type: assignment, OID: 4094d242-6767-4d37-95d9-381adf0585bc */
        {
          SDY1_specification_PushButton_G_LocGradColor(pContext) = (SGLint32_ge(SDY1_specification_PushButton_G_ButtonColor(pContext), 0L) ? SGLint32_add(SDY1_specification_PushButton_G_BaseColor(pContext), 1L) : SGLint32_add(SDY1_specification_PushButton_G_BaseColor(pContext), 2L));
        }

        /* Object: OuterBorder_or_Focus, Type: referenceContainer, OID: 9536b9cd-fa77-44c7-8510-af0725d5fc96 */
        {
          f056(_lParentMasks);
          {
            SDY1_specification_typ_FrameShape _lSubContextVar;
            SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
            SDY1_specification_FrameShape_init(_lSubContext);
            SDY1_specification_FrameShape_S_Color(_lSubContext, SDY1_specification_PushButton_G_LocOuterColor(pContext));
            SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, SDY1_specification_PushButton_G_LocOuterColor(pContext));
            SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 8.0F);
            SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_SizeX(_lSubContext, SDY1_specification_PushButton_G_SizeX(pContext));
            SDY1_specification_FrameShape_S_SizeY(_lSubContext, SDY1_specification_PushButton_G_SizeY(pContext));
            SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_PushButton_G_Style(pContext));
            SDY1_specification_FrameShape_S_Texture(_lSubContext, -1L);
            _lSubContext->_parentPriority = pContext->_parentPriority;
            SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
          }
        }

        /* Object: InnerBorder, Type: referenceContainer, OID: 613c68fb-3e6b-4750-bb4f-e25ab0fa9bd3 */
        {
          f056(_lParentMasks);
          f073(3.4F, 3.4F);
          {
            SDY1_specification_typ_FrameShape _lSubContextVar;
            SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
            SDY1_specification_FrameShape_init(_lSubContext);
            SDY1_specification_FrameShape_S_Color(_lSubContext, SDY1_specification_PushButton_G_LocInnerColor(pContext));
            SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, SDY1_specification_PushButton_G_LocInnerColor(pContext));
            SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 4.6F);
            SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_SizeX(_lSubContext, SGLfloat_sub(SDY1_specification_PushButton_G_SizeX(pContext), 6.8F));
            SDY1_specification_FrameShape_S_SizeY(_lSubContext, SGLfloat_sub(SDY1_specification_PushButton_G_SizeY(pContext), 6.8F));
            SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_PushButton_G_Style(pContext));
            SDY1_specification_FrameShape_S_Texture(_lSubContext, -1L);
            _lSubContext->_parentPriority = pContext->_parentPriority;
            SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
          }
          f074();
        }

        /* Object: MiddleBack, Type: referenceContainer, OID: feed9515-807c-4b3d-85d8-88f03c62f276 */
        {
          f056(_lParentMasks);
          f073(4.0F, 4.0F);
          {
            SDY1_specification_typ_FrameShape _lSubContextVar;
            SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
            SDY1_specification_FrameShape_init(_lSubContext);
            SDY1_specification_FrameShape_S_Color(_lSubContext, SDY1_specification_PushButton_G_LocBackColor(pContext));
            SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, SDY1_specification_PushButton_G_LocInnerColor(pContext));
            SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 4.0F);
            SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_SizeX(_lSubContext, SGLfloat_sub(SDY1_specification_PushButton_G_SizeX(pContext), 8.0F));
            SDY1_specification_FrameShape_S_SizeY(_lSubContext, SGLfloat_sub(SDY1_specification_PushButton_G_SizeY(pContext), 8.0F));
            SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_PushButton_G_Style(pContext));
            SDY1_specification_FrameShape_S_Texture(_lSubContext, -1L);
            _lSubContext->_parentPriority = pContext->_parentPriority;
            SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
          }
          f074();
        }

        /* Object: MiddleGrad, Type: referenceContainer, OID: 8984728a-4a74-426b-9b9b-310834d48177 */
        {
          if (SGLbool_or(SGLbool_or(SGLbool_not(SDY1_specification_PushButton_G_MouseInside(pContext)), SDY1_specification_PushButton_G_ButtonPressed(pContext)), SGLbool_not(SDY1_specification_PushButton_G_Enable(pContext)))) {
            f056(_lParentMasks);
            f073(4.0F, 4.0F);
            {
              SDY1_specification_typ_FrameShape _lSubContextVar;
              SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
              SDY1_specification_FrameShape_init(_lSubContext);
              SDY1_specification_FrameShape_S_Color(_lSubContext, SDY1_specification_PushButton_G_LocGradColor(pContext));
              if (SGLint32_gt(SDY1_specification_PushButton_G_ButtonColor(pContext), 0L)) {
                SDY1_specification_FrameShape_S_Opacity(_lSubContext, 64L);
              }
              else {
                SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
              }
              SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
              SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, SDY1_specification_PushButton_G_LocInnerColor(pContext));
              SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
              SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 4.0F);
              SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
              SDY1_specification_FrameShape_S_SizeX(_lSubContext, SGLfloat_sub(SDY1_specification_PushButton_G_SizeX(pContext), 8.0F));
              SDY1_specification_FrameShape_S_SizeY(_lSubContext, SGLfloat_sub(SDY1_specification_PushButton_G_SizeY(pContext), 8.0F));
              SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_PushButton_G_Style(pContext));
              if (SDY1_specification_PushButton_G_ButtonPressed(pContext)) {
                SDY1_specification_FrameShape_S_Texture(_lSubContext, 240L);
              }
              else {
                SDY1_specification_FrameShape_S_Texture(_lSubContext, 247L);
              }
              _lSubContext->_parentPriority = pContext->_parentPriority;
              SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
            }
            f074();
          }
        }
      }

      /* Object: assignment_ColorUnselected, Type: assignment, OID: 9e9ccb31-052e-4b90-9174-64e7dc867461 */
      {
        SDY1_specification_PushButton_G_LocTextColorUnselected(pContext) = (SGLint32_eq(SDY1_specification_PushButton_G_TextColor(pContext), -1L) ? SGLint32_add(SDY1_specification_PushButton_G_BaseColor(pContext), 13L) : SDY1_specification_PushButton_G_TextColor(pContext));
      }

      /* Object: ClippedLabel, Type: referenceContainer, OID: a3ffb86d-cdc5-49fc-97b7-00b0bd3c2dc0 */
      {
        f056(_lParentMasks);
        f073(5.0F, 0.0F);
        {
          SDY1_specification_typ_ClippedLabel _lSubContextVar;
          SDY1_specification_typ_ClippedLabel *_lSubContext = &_lSubContextVar;
          SDY1_specification_ClippedLabel_init(_lSubContext);
          SDY1_specification_ClippedLabel_S_Alignment(_lSubContext, SDY1_specification_PushButton_G_TextAlignment(pContext));
          SDY1_specification_ClippedLabel_S_AlignmentVertical(_lSubContext, 1L);
          SDY1_specification_ClippedLabel_S_BackColor(_lSubContext, -1L);
          SDY1_specification_ClippedLabel_S_Font(_lSubContext, SDY1_specification_PushButton_G_Font(pContext));
          SDY1_specification_ClippedLabel_S_LabelString(_lSubContext, SDY1_specification_PushButton_G_LabelString(pContext));
          SDY1_specification_ClippedLabel_S_SizeX(_lSubContext, SGLfloat_sub(SDY1_specification_PushButton_G_SizeX(pContext), 10.0F));
          SDY1_specification_ClippedLabel_S_SizeY(_lSubContext, SDY1_specification_PushButton_G_SizeY(pContext));
          SDY1_specification_ClippedLabel_S_TextColor(_lSubContext, SDY1_specification_PushButton_G_LocTextColorUnselected(pContext));
          SDY1_specification_ClippedLabel_S_TextSizeX(_lSubContext, 120.0F);
          SDY1_specification_ClippedLabel_S_TextSizeY(_lSubContext, 30.0F);
          SDY1_specification_ClippedLabel_S_TextType(_lSubContext, 1L);
          _lSubContext->_parentPriority = pContext->_parentPriority;
          SDY1_specification_ClippedLabel_draw(_lSubContext, pPriority);
        }
        f074();
      }

      /* Object: Disable, Type: referenceContainer, OID: 1cbe40a7-81f9-4f3b-b343-78389f9bfb4b */
      {
        if (SGLbool_not(SDY1_specification_PushButton_G_Enable(pContext))) {
          f056(_lParentMasks);
          {
            SDY1_specification_typ_FrameShape _lSubContextVar;
            SDY1_specification_typ_FrameShape *_lSubContext = &_lSubContextVar;
            SDY1_specification_FrameShape_init(_lSubContext);
            SDY1_specification_FrameShape_S_Color(_lSubContext, SGLint32_add(SDY1_specification_PushButton_G_BaseColor(pContext), 11L));
            SDY1_specification_FrameShape_S_Opacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_Orientation(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_OutlineColor(_lSubContext, SGLint32_add(SDY1_specification_PushButton_G_BaseColor(pContext), 11L));
            SDY1_specification_FrameShape_S_OutlineOpacity(_lSubContext, 255L);
            SDY1_specification_FrameShape_S_OutlineRadius(_lSubContext, 8.0F);
            SDY1_specification_FrameShape_S_OutlineWidth(_lSubContext, 0L);
            SDY1_specification_FrameShape_S_SizeX(_lSubContext, SDY1_specification_PushButton_G_SizeX(pContext));
            SDY1_specification_FrameShape_S_SizeY(_lSubContext, SDY1_specification_PushButton_G_SizeY(pContext));
            SDY1_specification_FrameShape_S_Style(_lSubContext, SDY1_specification_PushButton_G_Style(pContext));
            SDY1_specification_FrameShape_S_Texture(_lSubContext, -1L);
            _lSubContext->_parentPriority = pContext->_parentPriority;
            SDY1_specification_FrameShape_draw(_lSubContext, pPriority);
          }
        }
      }

      /* Object: wrapper_PushButton, Type: importedFunction, OID: 8ce8e4aa-83d1-4075-8648-a58a466c03c9 */
      {
        f056(_lParentMasks);
        wrapper_PushButton(SDY1_specification_PushButton_G_EmitCondition(pContext), SDY1_specification_PushButton_G_MouseInside(pContext), SDY1_specification_PushButton_G_MousePressed(pContext), SDY1_specification_PushButton_G_MouseReleased(pContext), SDY1_specification_PushButton_G_KeyPressed(pContext), SDY1_specification_PushButton_G_KeyCode(pContext), SDY1_specification_PushButton_G_KeyReleased(pContext), &(SDY1_specification_PushButton_G_Selection(pContext)), &(SDY1_specification_PushButton_G_ButtonPressed(pContext)), &(pContext->_wrapper_PushButton__));
      }
    }
  }
}


/*********************************************************
 ** End of file
 ** End of generation: 2018-01-13T10:58:26
 *********************************************************/

