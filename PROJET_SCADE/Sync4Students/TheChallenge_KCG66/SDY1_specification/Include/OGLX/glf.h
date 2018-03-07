/*+ FILE DESCRIPTION -------------------------------------------------------
 FILENAME          : glf.h
 DESCRIPTION       : Fonts structures and constants
 COPYRIGHT (C)     : 2008 by Esterel Technologies. All Rights Reserved.
 ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS GOVERNED BY ESTEREL TECHNOLOGIES LICENSING CONDITIONS.
---------------------------------------------------------------------------- +*/

#ifndef _GLF_H
#define _GLF_H

#include "sgl_types.h"

/* Format version */
#define GLF_FORMAT_VERSION 661U

/* Dimensions */
#define GLF_LINE_WIDTH_NUMBER   9U
#define GLF_FONT_NAME_LENGTH   64U
#define GLF_MAX_NUMBER_OF_CHAR 65536U
#define GLF_MAX_NUMBER_OF_TEXTURE 1024U


/* Font type */
#define GLF_FONT_TYPE_BITMAP 0U
#define GLF_FONT_TYPE_STROKE 1U
#define GLF_FONT_TYPE_NONE 2U

/* Line types for Stroke rendering*/
#define GLF_LINES               1U
#define GLF_LINE_STRIP          2U
#define GLF_LINE_LOOP           3U

/* Header aligned on 64-bit boundary */
typedef struct glf_type_font_table_header_ {
    SGLuint32 ui_fonts_size;
    SGLuint32 ui_version;
    SGLuint32 ui_fonts_number;
    SGLuint32 ui_textures_number;
} glf_type_font_table_header;

typedef struct glf_type_font_ {
    /* Font name */
    char font_name[GLF_FONT_NAME_LENGTH];
    /* Char size */
    SGLushort us_char_size;
    /* Number of chars minus one */
    SGLushort us_char_number;
    /* Font type */
    SGLushort us_font_kind;
    /* Line widths availability */
    SGLbool tb_available_widths[GLF_LINE_WIDTH_NUMBER];
    /* Line widths delta */
    SGLbyte tub_delta_widths[GLF_LINE_WIDTH_NUMBER];
    /* Halo line widths delta */
    SGLbyte tub_delta_halo_widths[GLF_LINE_WIDTH_NUMBER];
    /* Padding for 64-bit alignment */
    SGLbyte _pad1_[4];
    /* Underline */
    SGLfloat f_underline_y;
    /* Stroke */
    SGLfloat f_stroke_y;
    /* Maximum char width */
    SGLfloat f_max_char_width;
    /* Maximum char height */
    SGLfloat f_max_char_height;
    /* Maximum horizontal advance */
    SGLfloat f_max_h_advance;
    /* Maximum vertical advance */
    SGLfloat f_max_v_advance;
    /* Offset to chars description */
    SGLulong ui_offset_characters;
    /* Offset to vectorial descriptions */
    SGLulong ui_offset_strokes;
    /* Delta to chars description */
    SGLushort tus_delta_chars[GLF_MAX_NUMBER_OF_CHAR];
} glf_type_font;

/* Mapping structure for bitmap fonts */
typedef struct glf_type_map_property_ {
    SGLbyte *ptub_map_data;
    SGLulong ui_map_width;
    SGLulong ui_map_height;
    SGLulong ui_map_size;
} glf_type_map_property;

/* Common character structure */
typedef struct glf_type_character_ {
    /* Codepoint */
    SGLulong ui_codepoint;
    /* Character size */
    SGLfloat f_width;
    SGLfloat f_height;
    /* Distance to next character when writing horizontally */
    SGLfloat f_horizontal_advance;
    /* Distance to next character when writing vertically */
    SGLfloat f_vertical_advance;
} glf_type_character;

#define GLF_GET_CHAR(F,I) ((const glf_type_character*)(const void*)(((const SGLbyte*)(F)) + ((F)->ui_offset_characters + (((SGLulong)((F)->us_char_size)) * ((SGLulong)((F)->tus_delta_chars[I]))))))

/* Stroke characters specific structure */
typedef struct glf_type_character_stroke_ {
    glf_type_character tr_type_character;
    /* Offset to vertices description */
    SGLulong ui_offset_to_description;
} glf_type_character_stroke;

#define GLF_GET_STROKE_CHAR(C) ((const glf_type_character_stroke*)(const void*)(C))

/* Bitmap mapping specific structure */
typedef struct glf_type_u_v_couple_ {
    /* Bitmap bounding box */
    SGLshort s_x;
    SGLshort s_y;
    SGLushort us_width;
    SGLushort us_height;
    /* Texture map index */
    SGLulong ui_map_index;
    /* Texture coordinates */
    SGLfloat f_u1;
    SGLfloat f_v1;
    SGLfloat f_u2;
    SGLfloat f_v2;
} glf_type_u_v_couple;

/* Bitmap characters specific structures */

typedef struct glf_type_character_bitmap1_ {
    glf_type_character tr_type_character;
    glf_type_u_v_couple tr_u_v_mapping[1];
} glf_type_character_bitmap1;
typedef struct glf_type_character_bitmap2_ {
    glf_type_character tr_type_character;
    glf_type_u_v_couple tr_u_v_mapping[2];
} glf_type_character_bitmap2;
typedef struct glf_type_character_bitmap3_ {
    glf_type_character tr_type_character;
    glf_type_u_v_couple tr_u_v_mapping[3];
} glf_type_character_bitmap3;
typedef struct glf_type_character_bitmap4_ {
    glf_type_character tr_type_character;
    glf_type_u_v_couple tr_u_v_mapping[4];
} glf_type_character_bitmap4;
typedef struct glf_type_character_bitmap5_ {
    glf_type_character tr_type_character;
    glf_type_u_v_couple tr_u_v_mapping[5];
} glf_type_character_bitmap5;
typedef struct glf_type_character_bitmap6_ {
    glf_type_character tr_type_character;
    glf_type_u_v_couple tr_u_v_mapping[6];
} glf_type_character_bitmap6;
typedef struct glf_type_character_bitmap7_ {
    glf_type_character tr_type_character;
    glf_type_u_v_couple tr_u_v_mapping[7];
} glf_type_character_bitmap7;
typedef struct glf_type_character_bitmap8_ {
    glf_type_character tr_type_character;
    glf_type_u_v_couple tr_u_v_mapping[8];
} glf_type_character_bitmap8;
typedef struct glf_type_character_bitmap9_ {
    glf_type_character tr_type_character;
    glf_type_u_v_couple tr_u_v_mapping[9];
} glf_type_character_bitmap9;

typedef glf_type_character_bitmap9 glf_type_character_bitmap;

#define GLF_GET_BITMAP_CHAR(C) ((const glf_type_character_bitmap*)(const void*)(C))
#define GLF_GET_DELTA_WIDTH(F,W) ((F)->tub_delta_widths[W])
#define GLF_GET_DELTA_HALO_WIDTH(F,W) ((F)->tub_delta_halo_widths[W])

#define GLF_GET_STROKE_DATA(F) (((const SGLbyte*)(F)) + (F)->ui_offset_strokes)

/****************************************************************************************
Usage:
void sgluLoadFonts(void * par_ps_fonts);
    par_ps_fonts: a pointer to a structure containing
        SGLulong ui_fonts_size;
        SGLulong ui_fonts_number;
        SGLulong ui_textures_number;
        SGLulong ui_textures_offset;
        glf_type_font tr_fonts_description[ui_fonts_number];
        glf_type_map_property tr_maps[ui_textures_number];
        for each font, us_chars_number times character description (glf_type_stroke_character or glf_type_bitmapX_character)
        vertices descriptions
****************************************************************************************/

#endif                          /* _GLF_H */
