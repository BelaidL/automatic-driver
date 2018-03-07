/*+ FILE DESCRIPTION -------------------------------------------------------
 FILENAME          : sgl_context_types.h
 DESCRIPTION       : Definition of SGL context types
 COPYRIGHT (C)     : 2008 by Esterel Technologies. All Rights Reserved.
 ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS GOVERNED BY ESTEREL TECHNOLOGIES LICENSING CONDITIONS.
---------------------------------------------------------------------------- +*/

#ifndef _SGL_CONTEXT_TYPES_H
#define _SGL_CONTEXT_TYPES_H

#include "oglx_port.h"
#include "sglConstants.h"
#include "glf.h"


/*+-----------------------------------------------------------------
  DESCRIPTION:
    SGL Context Types 
  REQUIREMENTS:
    [SGL-IRS-073] SGL context type
---------------------------------------------------------------------+*/

/* 2D vector */
typedef SGLfloat sgl_vector2d[2];

/* Scissor structure */
typedef struct {
    SGLlong i_x;
    SGLlong i_y;
    SGLlong s_width;
    SGLlong s_height;
} scissor_definition;

/* Array of vertices for line, line loop or line strip */
typedef struct {
    SGLbyte b_type;             /* possible values: SGL_LINES, SGL_LINE_STRIP, SGL_LINE_LOOP */

    SGLlong l_size;
    /* max: SGL_MAX_VERTEX_ARRAY_SIZE  */

    sgl_vector2d p_vertices[SGL_MAX_VERTEX_ARRAY_SIZE]; /* stores some coordinates; array-size := l_size */

    SGLlong l_size_array_vertices;      /* size/last index of array p_array_vertices */
    sgl_vector2d p_array_vertices[SGL_MAX_VERTEX_ARRAY_SIZE];

    SGLlong l_size_array_tex_coord;     /* size/last index of array p_tex_coordinates */
    sgl_vector2d p_tex_coordinates[SGL_MAX_VERTEX_ARRAY_SIZE];

} sgl_geometry2d;

/* Clipbox structure */
typedef struct {
    SGLfloat f_bottom_left_x;
    SGLfloat f_bottom_left_y;
    SGLfloat f_top_right_x;
    SGLfloat f_top_right_y;
    SGLbyte b_visible_outside;
    SGLbyte b_state;
    SGLbyte b_define;
    SGLfloat pf_modelView[16];
} sgl_clipbox;

/* Stencil structure */
typedef struct {
    SGLbyte b_state;
    SGLbyte b_define;
} sgl_stencil;

/* Stack to store and restore tansformation by sglPushMatrix/sglPopMatrix */
typedef struct {
    SGLfloat tf_modelview_matrix[16];
    SGLfloat f_ratio_x;
    SGLfloat f_ratio_y;
    SGLfloat f_scale_x;
    SGLfloat f_scale_y;
    SGLfloat f_rotation_angle;
    SGLfloat f_depth;
} sgl_stack;

/* Structure storing current OpenGL states (used to avoid redundant OpenGL calls) */
typedef struct {
    SGLbyte b_state_texture_2d;
    SGLbyte b_state_blend;
    SGLbyte b_state_stencil_test;
    SGLbyte b_state_scissor_test;
    SGLbyte b_state_depth_test;
    SGLulong ul_texture_target;
    SGLulong ul_texture_pname;
    SGLlong l_texture_param;
} sgl_ogl_state;

/* Structure storing current OpenGL color (used to avoid redundant OpenGL calls) */
typedef struct {
    SGLfloat tf_current_color[4];
} sgl_current_color;


typedef struct {
    SGLushort *pb_substring;
    SGLulong ul_substring_length;
    SGLfloat f_string_width;
} sgl_line_string;

#define OGLX_MAX_LINES 16

#define SGL_MAX_STATIC_TEXTURE 1024UL

typedef struct {
    SGLulong ul_texture_width;
    SGLulong ul_texture_height;
    SGLfloat f_x;
    SGLfloat f_y;
    SGLulong ul_texture_id;
    SGLbool b_defined;
} sgl_static_texture;

/*****************************************************************************
** Global structure: [Data_OGLX_context]
*****************************************************************************/
struct sgl_type_statemachine_struct {

/*****************************************************************************
**	[Error_Outputs]
*****************************************************************************/
    SGLulong ul_error_counter;
    SGLulong tul_error_table[32][2];
    SGLbyte b_overflow_flag;
/****************************************************************************/

/*****************************************************************************
** Pointers to [Data_Resources_Tables]
*****************************************************************************/
/* [color table] */
    const sgl_color *tr_color;
    SGLulong ul_nb_colors;

/* [line stipple table] */
    const sgl_linestipple *tr_linestipple;
    SGLulong ul_nb_line_stipple;

/* [line width table] */
    const sgl_line_width *tr_line_width;
    SGLulong ul_nb_line_width;

/* [fonts table] */
    const glf_type_font *pr_font_table;
    SGLulong ul_nb_of_fonts;

    /* texture font Ids */
    SGLulong tui_texture_id[GLF_MAX_NUMBER_OF_TEXTURE];

/* [Textures] */
    sgl_texture_attrib *p_texture_attrib;
    SGLulong ul_number_of_textures;

/* [Gradients] */
    sgl_gradient_attrib *p_gradient_attrib;
    SGLulong ul_number_of_gradients;

/*****************************************************************************/


/*****************************************************************************
**	Sub-data: [Rendering_Configuration]
*****************************************************************************/
    /* Screen width */
    SGLulong ul_screen_w;
    /* Screen height */
    SGLulong ul_screen_h;

    /* Maximum size of textures */
    SGLulong ul_max_texture_width;
    SGLulong ul_max_texture_height;

    /* Line rendering mode */
    SGLbyte b_line_rendering_mode;

    /* Internal formats of textures (used internally by GPU) */
    SGLlong i_texture_internal_format;
    SGLlong i_alpha_texture_internal_format;

/****************************************************************************/


/*****************************************************************************
**	Sub-data: [Resources_Tables_States]
*****************************************************************************/
    /* Linewidth index */
    SGLlong l_linewidth_index;

    /* Last OpenGL linewidth used */
    SGLfloat f_last_ogl_linewidth;

    /* Color index */
    SGLlong l_color_index;

    /* Halo color index */
    SGLlong l_halo_color_index;

    /* Current stipple */
    const sgl_linestipple *pr_stipple;
    /* Stipple flag */
    SGLbyte b_stipple_ok;

    /* Transparency */
    SGLbyte b_transparency;

    /* Current color value */
    sgl_current_color r_current_color;

/****************************************************************************/


/*****************************************************************************
**	Sub-data: [Modes_Data]
*****************************************************************************/

    /* flag for indicating if haloing is enabled */
    SGLbool b_haloing_state;

    /* flag for indicating if polygon smooth is enabled */
    SGLbool b_polygon_smooth;

    /* Texture state */
    SGLbool b_texture_state;

    /* Modulate state */
    SGLbool b_modulate;

    /* Tessellation state */
    SGLbool b_tessellation;

    /* Text adjustment */
    SGLbool b_enable_text_adjustment;

    /* Gradient activity */
    SGLbool b_enable_gradient;

    /* Current OpenGL state (used to avoid redundant OpenGL modes calls) */
    /* Depth state */
    SGLfloat f_current_depth;

    SGLbyte b_halo_level_state;

    /* Current OpenGL state (used to avoid redundant OpenGL modes calls) */
    sgl_ogl_state r_ogl_state;

/****************************************************************************/


/*****************************************************************************
**	Sub-data: [Current_Primitive]
*****************************************************************************/
    /* Current drawn figure */
    sgl_geometry2d tr_geometry;

    /* Current Action after sglBegin */
    SGLulong ul_currentAction;

    /* Filled/line mode */
    SGLbyte b_drawing_mode;

    /* current used vertex array */
    const void *p_current_vertex_array;
/****************************************************************************/

/*****************************************************************************
**	Sub-data: [Current_Transformation]
*****************************************************************************/
    /* Current modelview matrix */
    SGLfloat f_modelview_matrix[16];

    /* Current viewport */
    SGLfloat f_viewport_width_div_2;
    SGLfloat f_viewport_height_div_2;
    SGLfloat f_width_factor;
    SGLfloat f_height_factor;

    SGLfloat f_viewport_x1;
    SGLfloat f_viewport_y1;

    /* Current ratio */
    SGLfloat f_ratio_x;
    SGLfloat f_ratio_y;
    SGLfloat f_ratio_scale_x;
    SGLfloat f_ratio_scale_y;
    SGLfloat f_ratio_scale_width;
    SGLfloat f_ratio_scale_height;

    /* Current scale set by sglScaleF */
    SGLfloat f_scale_x;
    SGLfloat f_scale_y;

    SGLfloat f_rotation_angle;

/****************************************************************************/


/*****************************************************************************
**	Sub-data: [Current_Texture]
*****************************************************************************/
    SGLlong l_last_texture_bound_index;
    SGLlong l_gradient_index;
/****************************************************************************/

/*****************************************************************************
**	Sub-data: [Texture_Data]
*****************************************************************************/
    SGLfloat f_current_dx;
    SGLfloat f_current_dy;
    SGLfloat f_current_nx;
    SGLfloat f_current_ny;
    SGLfloat f_current_xmin;
    SGLfloat f_current_ymin;

    /* Size of the bounding box on which current texture is applied */
    SGLfloat f_current_bbox_width;
    SGLfloat f_current_bbox_height;
/****************************************************************************/


/*****************************************************************************
**	Sub-data: [Mask_Data]
*****************************************************************************/

    /* Internal objects for handling stencil */
    sgl_stencil tr_stencil[2];

    /* Internal objects for clipbox operations */
    sgl_clipbox tr_clipbox[2];

    /* Defined clipplanes */
    SGLbyte b_clipplane_state[SGL_MAX_CLIP_PLANES];

    SGLulong ul_allocated_masks;
    SGLulong ul_activated_masks;
/****************************************************************************/


/*****************************************************************************
**	Sub-data: [Current_Font]
*****************************************************************************/
    SGLulong ui_current_font_id;
    const glf_type_font *p_current_font;

    /* current text linewidth between 0 corresponding to 2 pixels and 6 corresponding to 8 pixels */
    SGLbyte b_current_font_linewidth;

    /* current text index linewidth */
    SGLlong l_current_font_linewidth_index;

    /* current text index color */
    SGLlong l_current_font_color_index;

/****************************************************************************/


/*****************************************************************************
**	Sub-data: [Text_Attributes]
*****************************************************************************/
    /**********************************************/
    /* Array for text attributes */
    SGLulong ul_font_id;
    SGLbyte tb_word_separators[SGL_MAX_SEPARATORS];
    SGLulong ul_nb_word_separators;

    SGLbyte tb_line_separators[SGL_MAX_SEPARATORS];
    SGLulong ul_nb_line_separators;

    /* horizontal and vertical text alignment */
    SGLfloat f_h_alignment;
    SGLfloat f_v_alignment;
    SGLbyte b_h_alignment;
    SGLbyte b_v_alignment;

    SGLbyte b_charset_encoding;

    /* Second font attributes */
    SGLlong l_second_font_color_id;
    SGLlong l_second_font_id;
    SGLlong l_second_font_line_width;

    /* Rich text default attributes */
    SGLlong l_foreground_color_id;
    SGLlong l_background_color_id;
    SGLlong l_font_id;
    SGLlong l_outline_value;
    SGLbool b_enable_esc_sequence;
    SGLbool b_reverse_color;

/****************************************************************************/

/*****************************************************************************
**	Individual data: The following data are not shared between components,
**  they may be initialized by INITIALIZATION component but are not shared anymore after it.
*****************************************************************************/

/****************************************************************************
** Data managed by INITIALIZATION component
*****************************************************************************/
    /* Texture buffer used to convert texture */
    SGLbyte *tub_texture_buffer;

/****************************************************************************/

/****************************************************************************
** Data managed by PRIMITIVES component
*****************************************************************************/
    SGLfloat f_line_loop_first_vertex_x;
    SGLfloat f_line_loop_first_vertex_y;
    SGLbyte b_close_line_loop;
    SGLbyte b_switch_to_sgl_lines;
    SGLbool b_tex_coord_array;

    SGLbool b_new_vertex;

    SGLbyte l_line_caps_appearance;

    SGLbyte b_arc_clockwise;
    SGLfloat f_arc_angle;
    SGLbyte b_arc_added;
    SGLfloat f_last_point_x;
    SGLfloat f_last_point_y;

    SGLfloat f_last_stipple_length;
    SGLulong ul_last_stipple_index;
    SGLbool b_odd_vertex;
    SGLbool b_drawing_arc;
    SGLbool b_draw_circle;
    SGLbool b_draw_ellipse;
    SGLbool b_draw_crown;

    SGLbool b_sgl_lines;

    SGLfloat pf_sin[OGLX_MAX_LINES][OGLX_MAX_LINES];
    SGLfloat pf_cos[OGLX_MAX_LINES][OGLX_MAX_LINES];

    SGLulong ui_ogl_texture_bound;
/****************************************************************************/

/****************************************************************************
** Data managed by STATIC_SEQUENCES component
*****************************************************************************/
    SGLbool b_static_sequence_started;

/****************************************************************************
** Data managed by TRANSFORMATION component
*****************************************************************************/
    /* Current orthographic matrix */
    SGLfloat f_ortho_left;
    SGLfloat f_ortho_right;
    SGLfloat f_ortho_bottom;
    SGLfloat f_ortho_top;

    /* Current ortho matrix */
    SGLfloat tf_ortho_matrix[16];
    /* Stack for pitch and modelview matrix */
    sgl_stack tr_stack[SGL_MAX_STACK];

    /* Matrix stack index */
    SGLulong ul_matrix_stack_index;

/****************************************************************************
** Data managed by CLIPPING component
*****************************************************************************/
    /* Scissor stack */
    scissor_definition ts_scissor_stack[SGL_MAX_SCISSORS];
    SGLulong ul_number_of_scissors;
    SGLbool b_stencil_update;

/****************************************************************************
** OpenGL ES 2.0 attributes
*****************************************************************************/

#if defined(ES2_DEV_ENV) || defined(SC2_DEV_ENV)

    /* Used to hold the fragment and vertex shader handles */
    SGLulong ui_frag_shader;
    SGLulong ui_vert_shader;

    /* Arrays indexes in shaders */
    SGLlong l_vertex_array_index;
    SGLlong l_texture_array_index;

    /* FrameBuffer identifier used when drawing to FBO */
    SGLulong ul_framebuffer;

    /* Used to hold the program handle (made out of the two previous shaders */
    SGLulong ui_program_object;
    SGLulong ui_matrix_location;

    /* Location of "texture active" uniform parameter */
    SGLulong ui_tex_on_location;
    /* Current state of "texture active" uniform parameter */
    SGLlong i_tex_on_state;

    /* Color location identifier */
    SGLulong ui_color_location;

    SGLfloat pf_pushed_matrix[16][SGL_MAX_STACK];
    SGLulong ul_pushed_matrix_number;

    SGLfloat tf_current_color_es2[4];
#endif

#ifdef SC2_DEV_ENV
    SGLbool b_sc2_shader_created;
#endif
    SGLulong ul_binary_format;
/****************************************************************************
** static objects attributes
*****************************************************************************/
    SGLulong ul_static_bitmap_number;
    sgl_static_texture s_static_data[SGL_MAX_STATIC_TEXTURE];

/*****************************************************************************
**	Path data
*****************************************************************************/
    SGLbyte b_path_type;
    SGLbyte b_last_command;
    SGLfloat f_first_path_point_x;
    SGLfloat f_first_path_point_y;
    SGLfloat f_last_path_point_x;
    SGLfloat f_last_path_point_y;
    SGLfloat f_last_path_control_x;
    SGLfloat f_last_path_control_y;
};

#endif                          /* _SGL_CONTEXT_TYPES_H */
