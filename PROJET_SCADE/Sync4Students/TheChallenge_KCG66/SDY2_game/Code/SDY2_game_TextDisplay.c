/*********************************************************
 **
 ** File  SDY2_game_TextDisplay.c
 **
 ** Specification File:  C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\TextDisplay.wgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2017-12-22T17:12:38
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY2_game\Code -prefix SDY2_game_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\game.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst
 *********************************************************/

#include "SDY2_game_TextDisplay.h"
#include "SDY2_game_imported_functions.h"
#include "sgl_simu.h"


#include <stdlib.h>
#include <string.h>

SDY2_game_typ_TextDisplay * SDY2_game_TextDisplay_alloc(void)
{
  SDY2_game_typ_TextDisplay *lContext = malloc(sizeof(SDY2_game_typ_TextDisplay));
  memset(lContext, 0L, sizeof(SDY2_game_typ_TextDisplay));
  return lContext;
}

void SDY2_game_TextDisplay_free(SDY2_game_typ_TextDisplay *pContext)
{
  free(pContext);
}


void SDY2_game_TextDisplay_init(SDY2_game_typ_TextDisplay *pContext)
{
  {
    static SGLuint8 lArray0[255UL] = {84U,69U,88U,84U};
    SDY2_game_TextDisplay_S_Text(pContext, lArray0);
  }
  SDY2_game_TextDisplay_S_TextColor(pContext, 1L);
  {
    static SGLuint8 lArray0[255UL] = {84U,101U,120U,116U,32U,68U,105U,115U,112U,108U,97U,121U};
    SDY2_game_TextDisplay_S_Legend(pContext, lArray0);
  }
  SDY2_game_TextDisplay_S_LegendColor(pContext, 2L);
  SDY2_game_TextDisplay_S_Font(pContext, 21L);

  pContext->_parentPriority = 0L;

}

void SDY2_game_TextDisplay_predraw(SDY2_game_typ_TextDisplay *pContext)
{

}

void SDY2_game_TextDisplay_draw(SDY2_game_typ_TextDisplay *pContext, SGLint32 pPriority)
{
  if (SGLint32_eq(pPriority, pContext->_parentPriority)) {

    /* Object: Display, Type: container, OID: f82fbaa3-3e3a-4908-8eea-eec3f24b7a9f */
    {

      /* Object: Legend, Type: text, OID: ede0090a-fe17-44b1-a218-5c6b9734b4c5 */
      {
        if (SGLuint8_ne((SDY2_game_TextDisplay_G_Legend(pContext))[0UL], 0U)) {
          if (SGLint32_ge(SDY2_game_TextDisplay_G_LegendColor(pContext), 0L)) {
            f013(SDY2_game_TextDisplay_G_LegendColor(pContext));
            f085(-1L);
            f075(2L);
            f048(SDY2_game_TextDisplay_G_Font(pContext));
            f009(f150);
            f050(f206, f209);
            f034(0.0F, 0.0F, SDY2_game_TextDisplay_G_Legend(pContext), 255L);
          }
        }
      }

      /* Object: text, Type: text, OID: 344def41-c93f-4dc9-904e-7c67ba15d5d3 */
      {
        if (SGLint32_ge(SDY2_game_TextDisplay_G_TextColor(pContext), 0L)) {
          f013(SDY2_game_TextDisplay_G_TextColor(pContext));
          f085(-1L);
          f075(2L);
          f048(SDY2_game_TextDisplay_G_Font(pContext));
          f009(f150);
          f050(f204, f209);
          f034(4.0F, 0.0F, SDY2_game_TextDisplay_G_Text(pContext), 255L);
        }
      }
    }
  }
}


/*********************************************************
 ** End of file
 ** End of generation: 2017-12-22T17:12:38
 *********************************************************/
