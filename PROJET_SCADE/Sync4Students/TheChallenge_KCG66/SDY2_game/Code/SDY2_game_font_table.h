/*********************************************************
 **
 ** File  SDY2_game_font_table.h
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2017-12-22T17:12:38
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY2_game\Code -prefix SDY2_game_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\game.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst
 *********************************************************/

#ifndef SDY2_GAME_FONT_TABLE_H
#define SDY2_GAME_FONT_TABLE_H

#include "glf.h"

/* Fonts definition */

typedef struct
{
  glf_type_font_table_header tr_header;
  glf_type_font tr_fonts_description[30UL];
  glf_type_map_property tr_maps[4UL];
  glf_type_character_bitmap2 tr_characters20[656UL];
  glf_type_character_bitmap2 tr_characters21[656UL];
  glf_type_character_bitmap2 tr_characters22[656UL];
  glf_type_character_bitmap2 tr_characters23[656UL];
  glf_type_character_bitmap2 tr_characters24[656UL];
  glf_type_character_bitmap2 tr_characters25[656UL];
} SDY2_game_font_table_type;

extern SGLuint8 SDY2_game_font_table_texture0[516566UL];
extern SGLuint8 SDY2_game_font_table_texture1[465787UL];
extern SGLuint8 SDY2_game_font_table_texture2[381443UL];
extern SGLuint8 SDY2_game_font_table_texture3[212832UL];

extern const SDY2_game_font_table_type SDY2_game_font_table;

#endif /* SDY2_GAME_FONT_TABLE_H */

/*********************************************************
 ** End of file
 ** End of generation: 2017-12-22T17:12:38
 *********************************************************/

