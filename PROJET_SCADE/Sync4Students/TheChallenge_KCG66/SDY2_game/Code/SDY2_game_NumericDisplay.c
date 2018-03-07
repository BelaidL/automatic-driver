/*********************************************************
 **
 ** File  SDY2_game_NumericDisplay.c
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\NumericDisplay.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2017-12-22T17:12:38
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY2_game\Code -prefix SDY2_game_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\game.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst
 *********************************************************/

#include "SDY2_game_NumericDisplay.h"
#include "SDY2_game_imported_functions.h"
#include "sgl_simu.h"


#include <stdlib.h>
#include <string.h>

SDY2_game_typ_NumericDisplay * SDY2_game_NumericDisplay_alloc(void)
{
  SDY2_game_typ_NumericDisplay *lContext = malloc(sizeof(SDY2_game_typ_NumericDisplay));
  memset(lContext, 0L, sizeof(SDY2_game_typ_NumericDisplay));
  return lContext;
}

void SDY2_game_NumericDisplay_free(SDY2_game_typ_NumericDisplay *pContext)
{
  free(pContext);
}


void SDY2_game_NumericDisplay_init(SDY2_game_typ_NumericDisplay *pContext)
{
  SDY2_game_NumericDisplay_S_Value(pContext, 0.0F);
  SDY2_game_NumericDisplay_S_ValueColor(pContext, 1L);
  SDY2_game_NumericDisplay_S_BackColor(pContext, 2L);
  SDY2_game_NumericDisplay_S_NumberFormat(pContext, 1L);
  {
    static SGLuint8 lArray0[255UL] = {78U,117U,109U,101U,114U,105U,99U,32U,68U,105U,115U,112U,108U,97U,121U};
    SDY2_game_NumericDisplay_S_Legend(pContext, lArray0);
  }
  SDY2_game_NumericDisplay_S_LegendColor(pContext, 2L);
  {
    static SGLuint8 lArray0[255UL] = {0U};
    SDY2_game_NumericDisplay_S_Unit(pContext, lArray0);
  }
  SDY2_game_NumericDisplay_S_UnitColor(pContext, 2L);
  SDY2_game_NumericDisplay_S_Font(pContext, 21L);
  SDY2_game_NumericDisplay_S_Width(pContext, 60.0F);

  pContext->_parentPriority = 0L;

}

void SDY2_game_NumericDisplay_predraw(SDY2_game_typ_NumericDisplay *pContext)
{

}

void SDY2_game_NumericDisplay_draw(SDY2_game_typ_NumericDisplay *pContext, SGLint32 pPriority)
{
  if (SGLint32_eq(pPriority, pContext->_parentPriority)) {

    /* Object: Display, Type: container, OID: 7b58d4cd-a19a-461d-930f-e2518b99d246 */
    {

      /* Object: label, Type: text, OID: 40a2efb6-cf6b-4c65-b288-f2369315f910 */
      {
        if (SGLuint8_ne((SDY2_game_NumericDisplay_G_Legend(pContext))[0UL], 0U)) {
          if (SGLint32_ge(SDY2_game_NumericDisplay_G_LegendColor(pContext), 0L)) {
            f013(SDY2_game_NumericDisplay_G_LegendColor(pContext));
            f085(-1L);
            f075(2L);
            f048(SDY2_game_NumericDisplay_G_Font(pContext));
            f009(f150);
            f050(f206, f209);
            f034(0.0F, 0.0F, SDY2_game_NumericDisplay_G_Legend(pContext), 255L);
          }
        }
      }

      /* Object: rectangle, Type: rectangle, OID: fe810eaf-db7c-4008-946b-e6846bcfaff0 */
      {
        if (SGLint32_ge(SDY2_game_NumericDisplay_G_BackColor(pContext), 0L)) {
          /* color object part */
          f013(SDY2_game_NumericDisplay_G_BackColor(pContext));
          f009(f224);
          f009(f148);
          f036(255L);
          f009(f167);
          f009(f230);
          /* fill object part */
          f009(f227);
          f001(f109);
          f035(10.0F, 14.0F);
          f035(SDY2_game_NumericDisplay_G_Width(pContext), 14.0F);
          f035(SDY2_game_NumericDisplay_G_Width(pContext), -5.0F);
          f035(10.0F, -5.0F);
          f002();
        }
        /* outline object part */
        f009(f167);
        f013(6L);
        f085(-1L);
        f015(0L);
        f014(0L);
        f009(f150);
        f068(f216);
        f036(255L);
        f001(f103);
        f035(10.0F, 14.0F);
        f035(SDY2_game_NumericDisplay_G_Width(pContext), 14.0F);
        f035(SDY2_game_NumericDisplay_G_Width(pContext), -5.0F);
        f035(10.0F, -5.0F);
        f002();
      }

      /* Object: Value, Type: container, OID: 36f4dc50-74de-44d4-8ac8-a4cd5f6256a8 */
      {
        f073(SDY2_game_NumericDisplay_G_Width(pContext), 0.0F);

        /* Object: NumberFormat, Type: conditional, OID: 61e568f3-70c9-410f-a9e4-e0cf40a5f2b6 */
        {
          f073(-5.0F, 4.0F);
          switch (SDY2_game_NumericDisplay_G_NumberFormat(pContext)) {

          case 1L:

            /* Object: Integer, Type: container, OID: af80737d-447e-4b48-b721-1d32e0b5e69d */
            {

              /* Object: Right, Type: bifont, OID: 35133a1d-58d8-43c5-a577-b02d873fc4b9 */
              {
                if (SGLint32_ge(SDY2_game_NumericDisplay_G_ValueColor(pContext), 0L)) {
                  f013(SDY2_game_NumericDisplay_G_ValueColor(pContext));
                  f075(2L);
                  f048(SDY2_game_NumericDisplay_G_Font(pContext));
                  f050(f206, f208);
                  f049(SDY2_game_NumericDisplay_G_ValueColor(pContext), SDY2_game_NumericDisplay_G_Font(pContext), 2L);
                  {
                    sgl_numeric_format lFormat;
                    lFormat.l_integralPart = 9L;
                    lFormat.l_fractionalPart = 0L;
                    lFormat.l_secondFontPos = 1L;
                    lFormat.b_separator = 46U;
                    lFormat.b_leadingZeros = 0;
                    lFormat.l_displaySign = f203;
                    f054(0.0F, 0.0F, SDY2_game_NumericDisplay_G_Value(pContext), &lFormat);
                  }
                }
              }
            }
            break;

          case 2L:

            /* Object: Float_One_Significant_Zero, Type: container, OID: 6228f30c-2804-407b-bbe8-de8b434e7989 */
            {

              /* Object: Right_1, Type: bifont, OID: 21314bd6-f734-47e7-a518-c0ece94c65ca */
              {
                if (SGLint32_ge(SDY2_game_NumericDisplay_G_ValueColor(pContext), 0L)) {
                  f013(SDY2_game_NumericDisplay_G_ValueColor(pContext));
                  f075(2L);
                  f048(SDY2_game_NumericDisplay_G_Font(pContext));
                  f050(f206, f208);
                  f049(SDY2_game_NumericDisplay_G_ValueColor(pContext), SDY2_game_NumericDisplay_G_Font(pContext), 2L);
                  {
                    sgl_numeric_format lFormat;
                    lFormat.l_integralPart = 9L;
                    lFormat.l_fractionalPart = 1L;
                    lFormat.l_secondFontPos = 2L;
                    lFormat.b_separator = 46U;
                    lFormat.b_leadingZeros = 0;
                    lFormat.l_displaySign = f203;
                    f054(0.0F, 0.0F, SDY2_game_NumericDisplay_G_Value(pContext), &lFormat);
                  }
                }
              }
            }
            break;

          case 3L:

            /* Object: Float_Two_Significant_Zero, Type: container, OID: db45c3a6-432b-492a-b12e-5d518ce0c8ee */
            {

              /* Object: Right_2, Type: bifont, OID: 9ed1fe5f-96a3-468b-b786-d08425335e53 */
              {
                if (SGLint32_ge(SDY2_game_NumericDisplay_G_ValueColor(pContext), 0L)) {
                  f013(SDY2_game_NumericDisplay_G_ValueColor(pContext));
                  f075(2L);
                  f048(SDY2_game_NumericDisplay_G_Font(pContext));
                  f050(f206, f208);
                  f049(SDY2_game_NumericDisplay_G_ValueColor(pContext), SDY2_game_NumericDisplay_G_Font(pContext), 2L);
                  {
                    sgl_numeric_format lFormat;
                    lFormat.l_integralPart = 9L;
                    lFormat.l_fractionalPart = 2L;
                    lFormat.l_secondFontPos = 3L;
                    lFormat.b_separator = 46U;
                    lFormat.b_leadingZeros = 0;
                    lFormat.l_displaySign = f203;
                    f054(0.0F, 0.0F, SDY2_game_NumericDisplay_G_Value(pContext), &lFormat);
                  }
                }
              }
            }
            break;

          case 4L:

            /* Object: Float_Three_Significant_Zero, Type: container, OID: 4686230e-93e7-45aa-a949-5512cc90de83 */
            {

              /* Object: Right_3, Type: bifont, OID: f5d04e8e-eebd-4e18-8fc7-099c23e5e86d */
              {
                if (SGLint32_ge(SDY2_game_NumericDisplay_G_ValueColor(pContext), 0L)) {
                  f013(SDY2_game_NumericDisplay_G_ValueColor(pContext));
                  f075(2L);
                  f048(SDY2_game_NumericDisplay_G_Font(pContext));
                  f050(f206, f208);
                  f049(SDY2_game_NumericDisplay_G_ValueColor(pContext), SDY2_game_NumericDisplay_G_Font(pContext), 2L);
                  {
                    sgl_numeric_format lFormat;
                    lFormat.l_integralPart = 9L;
                    lFormat.l_fractionalPart = 3L;
                    lFormat.l_secondFontPos = 4L;
                    lFormat.b_separator = 46U;
                    lFormat.b_leadingZeros = 0;
                    lFormat.l_displaySign = f203;
                    f054(0.0F, 0.0F, SDY2_game_NumericDisplay_G_Value(pContext), &lFormat);
                  }
                }
              }
            }
            break;

          default:
            /* Do nothing */
            break;
          }
          f074();
        }
        f074();
      }

      /* Object: Unit, Type: container, OID: 7e02d07f-ec90-4f9b-aa2d-fffd9bb0e57e */
      {
        if (SGLuint8_ne((SDY2_game_NumericDisplay_G_Unit(pContext))[0UL], 0U)) {
          f073(SDY2_game_NumericDisplay_G_Width(pContext), 0.0F);

          /* Object: group, Type: container, OID: 6a81428f-2817-44e2-aa7c-9c07555dfeff */
          {
            f073(5.0F, 0.0F);

            /* Object: text, Type: text, OID: 42f7d4f2-21cb-4b38-a061-46d7d437375b */
            {
              if (SGLint32_ge(SDY2_game_NumericDisplay_G_UnitColor(pContext), 0L)) {
                f013(SDY2_game_NumericDisplay_G_UnitColor(pContext));
                f075(2L);
                f048(SDY2_game_NumericDisplay_G_Font(pContext));
                f050(f204, f209);
                f034(0.0F, -0.5F, SDY2_game_NumericDisplay_G_Unit(pContext), 255L);
              }
            }
            f074();
          }
          f074();
        }
      }

      /* Object: Warning, Type: container, OID: 16e16a10-9944-444c-b445-9f61d8897a00 */
      {
        if (SGLbool_or(SGLfloat_ge(SDY2_game_NumericDisplay_G_Value(pContext), 1000000000.0F), SGLfloat_le(SDY2_game_NumericDisplay_G_Value(pContext), -1000000000.0F))) {

          /* Object: rectangle_1, Type: rectangle, OID: 4eada049-ffcc-4df8-a07b-efa016486daf */
          {
            /* color object part */
            f013(2L);
            f009(f224);
            f009(f148);
            f009(f230);
            /* fill object part */
            f009(f227);
            f001(f109);
            f035(10.0F, 14.0F);
            f035(SDY2_game_NumericDisplay_G_Width(pContext), 14.0F);
            f035(SDY2_game_NumericDisplay_G_Width(pContext), -5.0F);
            f035(10.0F, -5.0F);
            f002();
            /* outline object part */
            f013(11L);
            f036(128L);
            f001(f103);
            f035(10.0F, 14.0F);
            f035(SDY2_game_NumericDisplay_G_Width(pContext), 14.0F);
            f035(SDY2_game_NumericDisplay_G_Width(pContext), -5.0F);
            f035(10.0F, -5.0F);
            f002();
          }

          /* Object: text_1, Type: text, OID: 94088c78-d11b-40f0-af01-cd682e54def0 */
          {
            static SGLuint8 lArray0_text_1[255UL] = {79U,118U,101U,114U,102U,108U,111U,119U};
            f075(2L);
            f048(21L);
            f050(f205, f209);
            f034(SGLfloat_add(5.0F, SGLfloat_div(SDY2_game_NumericDisplay_G_Width(pContext), 2.0F)), 0.0F, lArray0_text_1, 255L);
          }
        }
      }
    }
  }
}


/*********************************************************
 ** End of file
 ** End of generation: 2017-12-22T17:12:38
 *********************************************************/

