/*+ FILE DESCRIPTION -------------------------------------------------------
 FILENAME          : sgl.h
 DESCRIPTION       : SGL functions declarations
 COPYRIGHT (C)     : 2008 by Esterel Technologies. All Rights Reserved.
 ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS GOVERNED BY ESTEREL TECHNOLOGIES LICENSING CONDITIONS.
---------------------------------------------------------------------------- +*/

#ifndef _SGL_H
#define _SGL_H

#include "sglConstants.h"
#include "sgl_types.h"

/* Define macro to create an OGLX DLL */
#ifndef OGLXAPI
#define OGLXAPI extern
#endif

typedef struct sgl_type_statemachine_struct sgl_type_statemachine;

OGLXAPI SGLulong sglAllocateMaskID(SGLbyte par_b_mask_kind);

OGLXAPI void sglBegin(SGLbyte par_b_mode);

OGLXAPI void sglBeginPath(SGLbyte par_b_mode);

OGLXAPI void sglBeginScissor(SGLfloat par_f_width, SGLfloat par_f_height);

OGLXAPI void sglBindTexture(SGLbyte par_b_target, SGLlong par_l_texture_number);

OGLXAPI SGLfloat sglCircleActiveAreaGetAngle(SGLfloat par_f_mouse_x, SGLfloat par_f_mouse_y, SGLfloat par_f_origin_x, SGLfloat par_f_origin_y);

OGLXAPI SGLfloat sglCircleActiveAreaGetRate(SGLfloat par_f_mouse_x, SGLfloat par_f_mouse_y, SGLfloat par_f_origin_x, SGLfloat par_f_origin_y,
                                            SGLfloat par_f_radius);

OGLXAPI SGLbool sglCircleActiveAreaGetStatus(SGLfloat par_f_mouse_x, SGLfloat par_f_mouse_y, SGLfloat par_f_origin_x, SGLfloat par_f_origin_y,
                                             SGLfloat par_f_radius);

OGLXAPI void sglClearErrors(void);

OGLXAPI void sglClipBox(SGLulong par_ul_number, SGLbyte par_b_type, SGLfloat par_f_x_bottom_left, SGLfloat par_f_y_bottom_left, SGLfloat par_f_x_top_right,
                        SGLfloat par_f_y_top_right);

#ifndef OGLX_NO_GLCLIPPLANE
OGLXAPI void sglClipPlane(SGLulong par_ul_number, SGLfloat par_f_start_point_x, SGLfloat par_f_start_point_y, SGLfloat par_f_angle, SGLbool par_b_clockwise);
#endif

OGLXAPI void sglClosePath(void);

OGLXAPI void sglColorPointerf(const sgl_color * par_ps_colormap, SGLulong par_ul_nb_colors);

OGLXAPI void sglCompressedTexImage2D(SGLlong par_l_texture_number, SGLbyte par_b_format, SGLlong par_l_width, SGLlong par_l_height,
                                     SGLlong par_l_pixel_array_size, const SGLulong * par_pul_pixel, SGLbyte par_b_texture_application_mode);

OGLXAPI void sglConvertPointToPixel(SGLfloat par_f_x, SGLfloat par_f_y, SGLfloat * par_pf_pixel_x, SGLfloat * par_pf_pixel_y);

OGLXAPI void sglConvertPointToScreen(SGLfloat par_f_x, SGLfloat par_f_y, SGLfloat * par_pf_screen_x, SGLfloat * par_pf_screen_y);

OGLXAPI void sglConvertPixelToPoint(SGLfloat par_f_x, SGLfloat par_f_y, SGLfloat * par_pf_user_x, SGLfloat * par_pf_user_y);

OGLXAPI void sglConvertScreenToPoint(SGLfloat par_f_x, SGLfloat par_f_y, SGLfloat * par_pf_user_x, SGLfloat * par_pf_user_y);

OGLXAPI void sglContinueStencil(void);

OGLXAPI SGLulong sglCreateStaticBitmap(SGLfloat par_f_min_x, SGLfloat par_f_min_y,
                                       SGLlong par_l_width, SGLlong par_l_height, SGLlong par_l_pixel_array_size, const void *par_p_pixel,
                                       SGLbool par_b_compressed);

OGLXAPI void sglCubicBezier(SGLfloat par_f_x1, SGLfloat par_f_y1, SGLfloat par_f_x2, SGLfloat par_f_y2, SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglCubicBezierBounds(SGLfloat par_f_prev_x, SGLfloat par_f_prev_y, SGLfloat par_f_x1, SGLfloat par_f_y1, SGLfloat par_f_x2, SGLfloat par_f_y2,
                                  SGLfloat par_f_x, SGLfloat par_f_y, SGLfloat * par_pf_x1, SGLfloat * par_pf_y1, SGLfloat * par_pf_x2, SGLfloat * par_pf_y2);

OGLXAPI void sglSmoothCubicBezier(SGLfloat par_f_x2, SGLfloat par_f_y2, SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglSmoothCubicBezierBounds(SGLfloat par_f_prev_x, SGLfloat par_f_prev_y,
                                        SGLfloat par_f_prev_control_x, SGLfloat par_f_prev_control_y,
                                        SGLfloat par_f_x2, SGLfloat par_f_y2, SGLfloat par_f_x, SGLfloat par_f_y,
                                        SGLfloat * par_pf_x1, SGLfloat * par_pf_y1, SGLfloat * par_pf_x2, SGLfloat * par_pf_y2);

OGLXAPI void sglDisable(SGLbyte par_b_cap);

OGLXAPI void sglDrawStaticBitmap(SGLulong par_ul_index);

OGLXAPI void sglEllipticalArc(SGLfloat par_f_rx, SGLfloat par_f_ry, SGLfloat par_f_x_axis_rotation, SGLbyte par_b_large_arc_flag, SGLbyte par_b_sweep_flag,
                              SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglEllipticalArcBounds(SGLfloat par_f_prev_x, SGLfloat par_f_prev_y,
                                    SGLfloat par_f_rx, SGLfloat par_f_ry, SGLfloat par_f_x_axis_rotation, SGLbyte par_b_large_arc_flag,
                                    SGLbyte par_b_sweep_flag, SGLfloat par_f_x, SGLfloat par_f_y, SGLfloat * par_pf_x1, SGLfloat * par_pf_y1,
                                    SGLfloat * par_pf_x2, SGLfloat * par_pf_y2);

OGLXAPI void sglEnable(SGLbyte par_b_cap);

OGLXAPI void sglEnd(void);

OGLXAPI void sglEndPath(void);

OGLXAPI void sglEndScissor(void);

OGLXAPI void sglFormatTexture(SGLulong par_ul_nb_vertices, SGLfloat * par_pf_x, SGLfloat * par_pf_y,
                              SGLfloat par_f_horiz_pattern, SGLfloat par_f_vert_pattern, SGLlong par_l_horiz_align, SGLlong par_l_vert_align);

OGLXAPI void sglFormatGradient(SGLulong par_ul_nb_vertices, SGLfloat * par_pf_x, SGLfloat * par_pf_y);

OGLXAPI void sglFreeMaskID(SGLulong par_ul_mask_id);

OGLXAPI SGLulong sglGetActiveMasks(void);

OGLXAPI void sglHorizontalLineTo(SGLfloat par_f_x);

OGLXAPI void sglGetArcSegmentBounds(SGLbool par_b_clockwise, SGLfloat par_f_angle,
                                    SGLfloat par_f_x1, SGLfloat par_f_y1, SGLfloat par_f_x2, SGLfloat par_f_y2,
                                    SGLfloat * par_pf_x1, SGLfloat * par_pf_y1, SGLfloat * par_pf_x2, SGLfloat * par_pf_y2);

OGLXAPI sgl_type_statemachine *sglGetCurrentContext(void);

OGLXAPI sgl_bounding_box sglGetRichTextBounds(SGLfloat par_f_x, SGLfloat par_f_y, const SGLbyte * par_pb_string, SGLlong par_l_string_length,
                                              SGLlong par_l_font_id, SGLlong par_l_hor_alignment, SGLlong par_l_vert_alignment);

OGLXAPI sgl_bounding_box sglGetTextAreaBounds(SGLfloat par_f_x_bottom_left, SGLfloat par_f_y_bottom_left, SGLfloat par_f_x_top_right,
                                              SGLfloat par_f_y_top_right, const SGLbyte * par_pb_string, SGLlong par_l_string_length, SGLlong par_l_font_id,
                                              SGLlong par_l_hor_alignment, SGLlong par_l_vert_alignment);

OGLXAPI sgl_bounding_box sglGetTextAreaUnicodeBounds(SGLfloat par_f_x_bottom_left, SGLfloat par_f_y_bottom_left, SGLfloat par_f_x_top_right,
                                                     SGLfloat par_f_y_top_right, const SGLlong * par_pl_string, SGLlong par_l_string_length,
                                                     SGLlong par_l_font_id, SGLlong par_l_hor_alignment, SGLlong par_l_vert_alignment);

OGLXAPI sgl_bounding_box sglGetTextMultilineBounds(SGLfloat par_f_x, SGLfloat par_f_y,
                                                   const SGLbyte * par_pb_string, SGLlong par_l_string_length,
                                                   SGLlong par_l_font_id, SGLlong par_l_hor_alignment, SGLlong par_l_vert_alignment);

OGLXAPI sgl_bounding_box sglGetTextMultilineUnicodeBounds(SGLfloat par_f_x, SGLfloat par_f_y,
                                                          const SGLlong * par_pl_string, SGLlong par_l_string_length,
                                                          SGLlong par_l_font_id, SGLlong par_l_hor_alignment, SGLlong par_l_vert_alignment);

OGLXAPI SGLbyte sglGetErrors(SGLulong * par_pul_error_buffer, SGLulong * par_pul_error_number);

OGLXAPI SGLfloat sglGetFontValue(SGLulong par_ul_font_id, SGLulong par_ul_char_id, SGLbyte par_b_value_kind);

OGLXAPI char *sglGetVersion(void);

OGLXAPI void sglGradientTexture(SGLlong par_l_index, SGLlong par_l_width, SGLlong par_l_height,
                                SGLlong par_l_pixel_array_size, const void *par_p_pixel, SGLbool par_b_compressed);

OGLXAPI void sglIndexColori(SGLlong par_l_index);

OGLXAPI void sglIndexFonti(SGLlong par_l_font_id);

OGLXAPI void sglIndexFontLineWidthi(SGLlong par_l_index);

OGLXAPI void sglIndexGradienti(SGLlong par_l_gradient_id);

OGLXAPI void sglIndexHaloColori(SGLlong par_l_index);

OGLXAPI void sglIndexLineStipplei(SGLlong par_l_index);

OGLXAPI void sglIndexLineWidthi(SGLlong par_l_index);

OGLXAPI SGLbool sglInit(sgl_type_statemachine * par_s_context, const sgl_parameters * par_p_parameters);

OGLXAPI void sglLineStipplePointer(const sgl_linestipple * par_ps_linestipple, SGLulong par_ul_nb_line_stipple);

OGLXAPI void sglLineTo(SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglLineWidthPointerf(const sgl_line_width * par_ps_line_width, SGLulong par_ul_nb_line_width);

OGLXAPI void sglLoadIdentity(void);

OGLXAPI void sglMatrixtf(const SGLfloat par_pf_matrix[3][3]);

OGLXAPI void sglMoveTo(SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglOrtho(SGLfloat par_f_left, SGLfloat par_f_right, SGLfloat par_f_bottom, SGLfloat par_f_top);

OGLXAPI SGLbool sglPointIsInsideScissors(SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglPopMatrix(void);

OGLXAPI void sglPopMatrixAndTranslate(void);

OGLXAPI void sglPushMatrix(void);

OGLXAPI void sglPushMatrixAndTranslate(SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglQuadraticBezier(SGLfloat par_f_x1, SGLfloat par_f_y1, SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglQuadraticBezierBounds(SGLfloat par_f_prev_x, SGLfloat par_f_prev_y,
                                      SGLfloat par_f_x1, SGLfloat par_f_y1,
                                      SGLfloat par_f_x, SGLfloat par_f_y,
                                      SGLfloat * par_pf_x1, SGLfloat * par_pf_y1, SGLfloat * par_pf_x2, SGLfloat * par_pf_y2);

OGLXAPI void sglSmoothQuadraticBezier(SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglSmoothQuadraticBezierBounds(SGLfloat par_f_prev_x, SGLfloat par_f_prev_y,
                                            SGLfloat par_f_prev_control_x, SGLfloat par_f_prev_control_y,
                                            SGLfloat par_f_x, SGLfloat par_f_y,
                                            SGLfloat * par_pf_x1, SGLfloat * par_pf_y1, SGLfloat * par_pf_x2, SGLfloat * par_pf_y2);

OGLXAPI SGLfloat sglRectangleActiveAreaGetHeightRate(SGLfloat par_f_mouse_x, SGLfloat par_f_mouse_y, SGLfloat par_f_x1, SGLfloat par_f_y1, SGLfloat par_f_x2,
                                                     SGLfloat par_f_y2);

OGLXAPI SGLbool sglRectangleActiveAreaGetStatus(SGLfloat par_f_mouse_x, SGLfloat par_f_mouse_y, SGLfloat par_f_x1, SGLfloat par_f_y1, SGLfloat par_f_x2,
                                                SGLfloat par_f_y2);

OGLXAPI SGLfloat sglRectangleActiveAreaGetWidthRate(SGLfloat par_f_mouse_x, SGLfloat par_f_mouse_y, SGLfloat par_f_x1, SGLfloat par_f_y1, SGLfloat par_f_x2,
                                                    SGLfloat par_f_y2);

OGLXAPI SGLbool sglRectangleIntersectsScissors(SGLfloat par_f_x1, SGLfloat par_f_y1, SGLfloat par_f_x2, SGLfloat par_f_y2);

OGLXAPI void sglReset(void);

#ifdef ES2_DEV_ENV
OGLXAPI SGLbool sglReset_es2(void);
#endif

#ifdef SC2_DEV_ENV
OGLXAPI SGLbool sglReset_sc2(void);
#endif

OGLXAPI void sglResetOpenGLSettings(SGLulong par_ul_settings);

OGLXAPI void sglRestoreStates(void);

OGLXAPI void sglRotatef(SGLfloat par_f_angle);

OGLXAPI void sglScalef(SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglSetActiveMasks(SGLulong par_ul_mask_combination);

OGLXAPI void sglSetCharsetEncoding(SGLbyte par_b_format);

OGLXAPI void sglSetCurrentContext(sgl_type_statemachine * par_s_context);

OGLXAPI void sglSetDefaultRichTextAttributes(SGLlong par_l_foreground_color_id, SGLlong par_l_background_color_id, SGLlong par_l_font_id,
                                             SGLlong par_l_outline_value, SGLbool par_b_enable);

OGLXAPI void sglSetLineCaps(SGLlong par_l_type);

OGLXAPI void sglSetLinesSeparators(SGLbyte * par_pb_separators, SGLulong par_ul_nb_separators);

OGLXAPI void sglSetRenderMode(SGLbyte par_b_mode);

OGLXAPI void sglSetSecondFontAttributes(SGLlong par_l_second_font_color_id, SGLlong par_l_second_font_id, SGLlong par_l_second_font_line_width);

OGLXAPI void sglSetTextAlignment(SGLlong par_l_hor_alignment, SGLlong par_l_vert_alignment);

OGLXAPI void sglSetTextureInternalFormat(SGLlong par_l_tex_format_without_alpha, SGLlong par_l_tex_format_with_alpha);

OGLXAPI void sglSetWordsSeparators(SGLbyte * par_pb_separators, SGLulong par_ul_nb_separators);

OGLXAPI SGLbool sglShapeActiveAreaGetStatus(SGLfloat par_f_mouse_x, SGLfloat par_f_mouse_y, SGLulong par_ul_nb_points, SGLfloat par_pf_points[][2]);

OGLXAPI void sglTerminate(void);

OGLXAPI void sglTexImage2Dubv(SGLlong par_l_texture_number, SGLbyte par_b_format, SGLlong par_l_width, SGLlong par_l_height, const SGLbyte * par_pb_color,
                              SGLbyte par_b_texture_application_mode);

OGLXAPI void sglTexVertex4f(SGLfloat par_f_x, SGLfloat par_f_y, SGLfloat par_f_u, SGLfloat par_f_v);

OGLXAPI void sglTranslatef(SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglTransparency8(SGLlong par_l_alpha);

OGLXAPI void sglVertex2f(SGLfloat par_f_x, SGLfloat par_f_y);

OGLXAPI void sglVerticalLineTo(SGLfloat par_f_y);

OGLXAPI void sglViewport(SGLlong par_l_x, SGLlong par_l_y, SGLlong par_l_width, SGLlong par_l_height);

OGLXAPI void sgluArcSector2f(SGLfloat par_f_centerx, SGLfloat par_f_centery, SGLfloat par_f_radius,
                             SGLfloat par_f_start_angle, SGLfloat par_f_end_angle, SGLbool par_b_clockwise, SGLbyte par_b_as_value);

OGLXAPI void sgluArcEllipse2f(SGLfloat par_f_centerx, SGLfloat par_f_centery,
                              SGLfloat par_f_x_radius, SGLfloat par_f_y_radius,
                              SGLfloat par_f_start_angle, SGLfloat par_f_end_angle, SGLbool par_b_clockwise, SGLbyte par_b_mode);

OGLXAPI void sgluArcSegment(SGLbool par_b_clockwise, SGLfloat par_f_angle);

OGLXAPI void sgluCrown2f(SGLfloat par_f_centerx, SGLfloat par_f_centery, SGLfloat par_f_radius, SGLfloat par_f_width,
                         SGLfloat par_f_start_angle, SGLfloat par_f_end_angle, SGLbool par_b_clockwise, SGLbyte par_b_crown_value);

OGLXAPI void sgluDrawBitmap(SGLlong par_l_texture_number, SGLfloat par_f_originx, SGLfloat par_f_originy);

OGLXAPI void sgluLoadFonts(const void *par_pv_fonts);

OGLXAPI void sgluWriteRichText(SGLfloat par_f_x, SGLfloat par_f_y, const SGLbyte * par_pb_string, SGLlong par_l_string_length);

OGLXAPI void sgluWriteFloat(SGLfloat par_f_x, SGLfloat par_f_y, SGLfloat par_f_value, sgl_numeric_format * par_p_format);

OGLXAPI void sgluWriteText(SGLfloat par_f_x, SGLfloat par_f_y, const SGLbyte * par_pb_string, SGLlong par_l_string_length);

OGLXAPI void sgluWriteUnicodeText(SGLfloat par_f_x, SGLfloat par_f_y, const SGLlong * par_pl_string, SGLlong par_l_string_length);

OGLXAPI void sgluWriteWideText(SGLfloat par_f_x, SGLfloat par_f_y, const SGLushort * par_pus_string, SGLlong par_l_string_length);

OGLXAPI void sgluWriteTextArea(SGLfloat par_f_x_bottom_left, SGLfloat par_f_y_bottom_left, SGLfloat par_f_x_top_right, SGLfloat par_f_y_top_right,
                               const SGLbyte * par_pb_string, SGLlong par_l_string_length);

OGLXAPI void sgluWriteUnicodeTextArea(SGLfloat par_f_x_bottom_left, SGLfloat par_f_y_bottom_left, SGLfloat par_f_x_top_right, SGLfloat par_f_y_top_right,
                                      const SGLlong * par_pl_string, SGLlong par_l_string_length);

OGLXAPI void sgluWriteWideTextArea(SGLfloat par_f_x_bottom_left, SGLfloat par_f_y_bottom_left, SGLfloat par_f_x_top_right, SGLfloat par_f_y_top_right,
                                   const SGLushort * par_pus_string, SGLlong par_l_string_length);

/* Utilitary functions */
OGLXAPI SGLbool sgluFloatIsEqual(SGLfloat par_f_float_1, SGLfloat par_f_float_2);

OGLXAPI SGLlong sgluGetTableIndex(SGLlong par_l_index, SGLlong par_l_size);

OGLXAPI SGLlong sgluLongDiv(SGLlong par_l_long_1, SGLlong par_l_long_2);

OGLXAPI SGLfloat sgluFloatDiv(SGLfloat par_f_float_1, SGLfloat par_f_float_2);

OGLXAPI SGLfloat sgluModuloAngle(SGLfloat par_f_angle);

/* Static sequences interfaces shall not be defined for OpenGL ES 1.1 */
#ifndef ES11_DEV_ENV
OGLXAPI SGLulong sglBeginStaticSequence(SGLfloat par_f_min_x, SGLfloat par_f_min_y, SGLfloat par_f_max_x, SGLfloat par_f_max_y);

OGLXAPI void sglEndStaticSequence(void);

OGLXAPI void sglCallStaticSequence(SGLulong par_ul_index);
#endif

/* For compatibility with 6.6 */
#define sgluWriteTextMultiline sgluWriteText
#define sgluWriteTextUnicode sgluWriteUnicodeText
#define sgluWriteTextMultilineUnicode sgluWriteUnicodeText
#define sgluWriteTextAreaUnicode sgluWriteUnicodeTextArea

/* Definition of safe cast functions */

/* Cast SGLint8 */
OGLXAPI SGLint8 sglUInt8ToInt8(SGLuint8 par_ui_value);
#define SGLuint8_to_int8(x)	sglUInt8ToInt8(x)
OGLXAPI SGLint8 sglInt16ToInt8(SGLint16 par_i_value);
#define SGLint16_to_int8(x)	sglInt16ToInt8(x)
OGLXAPI SGLint8 sglUInt16ToInt8(SGLuint16 par_ui_value);
#define SGLuint16_to_int8(x) sglUInt16ToInt8(x)
OGLXAPI SGLint8 sglInt32ToInt8(SGLint32 par_i_value);
#define SGLint32_to_int8(x)	sglInt32ToInt8(x)
OGLXAPI SGLint8 sglUInt32ToInt8(SGLuint32 par_ui_value);
#define SGLuint32_to_int8(x) sglUInt32ToInt8(x)
#ifndef OGLX_NO_64_BITS
OGLXAPI SGLint8 sglInt64ToInt8(SGLint64 par_i_value);
#define SGLint64_to_int8(x)	sglInt64ToInt8(x)
OGLXAPI SGLint8 sglUInt64ToInt8(SGLuint64 par_ui_value);
#define SGLuint64_to_int8(x)	sglUInt64ToInt8(x)
#endif
OGLXAPI SGLint8 sglFloatToInt8(SGLfloat par_f_value);
#define SGLfloat_to_int8(x)	sglFloatToInt8(x)
OGLXAPI SGLint8 sglDoubleToInt8(SGLdouble par_d_value);
#define SGLdouble_to_int8(x)	sglDoubleToInt8((x))

/* Cast SGLuint8 */
OGLXAPI SGLuint8 sglInt8ToUInt8(SGLint8 par_i_value);
#define SGLint8_to_uint8(x)	sglInt8ToUInt8(x)
OGLXAPI SGLuint8 sglInt16ToUInt8(SGLint16 par_i_value);
#define SGLint16_to_uint8(x)	sglInt16ToUInt8(x)
OGLXAPI SGLuint8 sglUInt16ToUInt8(SGLuint16 par_ui_value);
#define SGLuint16_to_uint8(x) sglUInt16ToUInt8(x)
OGLXAPI SGLuint8 sglInt32ToUInt8(SGLint32 par_i_value);
#define SGLint32_to_uint8(x)	sglInt32ToUInt8(x)
OGLXAPI SGLuint8 sglUInt32ToUInt8(SGLuint32 par_ui_value);
#define SGLuint32_to_uint8(x) sglUInt32ToUInt8(x)
#ifndef OGLX_NO_64_BITS
OGLXAPI SGLuint8 sglInt64ToUInt8(SGLint64 par_i_value);
#define SGLint64_to_uint8(x)	sglInt64ToUInt8(x)
OGLXAPI SGLuint8 sglUInt64ToUInt8(SGLuint64 par_ui_value);
#define SGLuint64_to_uint8(x)	sglUInt64ToUInt8(x)
#endif
OGLXAPI SGLuint8 sglFloatToUInt8(SGLfloat par_f_value);
#define SGLfloat_to_uint8(x)	sglFloatToUInt8(x)
OGLXAPI SGLuint8 sglDoubleToUInt8(SGLdouble par_d_value);
#define SGLdouble_to_uint8(x)	sglDoubleToUInt8((x))

/* Cast SGLshort/SGLint16 */
#define SGLint8_to_int16(x)		((SGLint16)(x))
#define SGLuint8_to_int16(x)	((SGLint16)(x))
OGLXAPI SGLint16 sglUInt16ToInt16(SGLuint16 par_ui_value);
#define SGLuint16_to_int16(x) sglUInt16ToInt16(x)
OGLXAPI SGLint16 sglInt32ToInt16(SGLint32 par_i_value);
#define SGLint32_to_int16(x)	sglInt32ToInt16(x)
OGLXAPI SGLint16 sglUInt32ToInt16(SGLuint32 par_ui_value);
#define SGLuint32_to_int16(x) sglUInt32ToInt16(x)
#ifndef OGLX_NO_64_BITS
OGLXAPI SGLint16 sglInt64ToInt16(SGLint64 par_i_value);
#define SGLint64_to_int16(x)	sglInt64ToInt16(x)
OGLXAPI SGLint16 sglUInt64ToInt16(SGLuint64 par_ui_value);
#define SGLuint64_to_int16(x)	sglUInt64ToInt16(x)
#endif
OGLXAPI SGLint16 sglFloatToInt16(SGLfloat par_f_value);
#define SGLfloat_to_int16(x)	sglFloatToInt16(x)
OGLXAPI SGLint16 sglDoubleToInt16(SGLdouble par_d_value);
#define SGLdouble_to_int16(x)	sglDoubleToInt16((x))

/* Cast SGLushort/SGLuint16 */
OGLXAPI SGLuint16 sglInt8ToUInt16(SGLint8 par_i_value);
#define SGLint8_to_uint16(x)	sglInt8ToUInt16(x)
#define SGLuint8_to_uint16(x)	((SGLuint16)(x))
OGLXAPI SGLuint16 sglInt16ToUInt16(SGLint16 par_i_value);
#define SGLint16_to_uint16(x)	sglInt16ToUInt16(x)
OGLXAPI SGLuint16 sglInt32ToUInt16(SGLint32 par_i_value);
#define SGLint32_to_uint16(x)	sglInt32ToUInt16(x)
OGLXAPI SGLuint16 sglUInt32ToUInt16(SGLuint32 par_ui_value);
#define SGLuint32_to_uint16(x) sglUInt32ToUInt16(x)
#ifndef OGLX_NO_64_BITS
OGLXAPI SGLuint16 sglInt64ToUInt16(SGLint64 par_i_value);
#define SGLint64_to_uint16(x)	sglInt64ToUInt16(x)
OGLXAPI SGLuint16 sglUInt64ToUInt16(SGLuint64 par_ui_value);
#define SGLuint64_to_uint16(x)	sglUInt64ToUInt16(x)
#endif
OGLXAPI SGLuint16 sglFloatToUInt16(SGLfloat par_f_value);
#define SGLfloat_to_uint16(x)	sglFloatToUInt16(x)
OGLXAPI SGLuint16 sglDoubleToUInt16(SGLdouble par_d_value);
#define SGLdouble_to_uint16(x)	sglDoubleToUInt16((x))

/* Cast (SGLlong/SGLint32) */
#define SGLint8_to_int32(x)	    ((SGLint32) (x))
#define SGLuint8_to_int32(x)	((SGLint32) (x))
#define SGLint16_to_int32(x)	((SGLint32) (x))
#define SGLuint16_to_int32(x)	((SGLint32) (x))
OGLXAPI SGLint32 sglUInt32ToInt32(SGLuint32 par_ul_value);
#define SGLuint32_to_int32(x)	sglUInt32ToInt32(x)
#ifndef OGLX_NO_64_BITS
OGLXAPI SGLint32 sglInt64ToInt32(SGLint64 par_l_value);
#define SGLint64_to_int32(x)	sglInt64ToInt32(x)
OGLXAPI SGLint32 sglUInt64ToInt32(SGLuint64 par_l_value);
#define SGLuint64_to_int32(x)	sglUInt64ToInt32(x)
#endif
OGLXAPI SGLint32 sglFloatToInt32(SGLfloat par_f_value);
#define SGLfloat_to_int32(x)	sglFloatToInt32(x)
OGLXAPI SGLint32 sglDoubleToInt32(SGLdouble par_d_value);
#define SGLdouble_to_int32(x)	sglDoubleToInt32((x))

/* Cast (SGLulong/SGLuint32) */
OGLXAPI SGLuint32 sglInt8ToUInt32(SGLint8 par_i_value);
#define SGLint8_to_uint32(x)	sglInt8ToUInt32(x)
#define SGLuint8_to_uint32(x)	((SGLuint32) (x))
OGLXAPI SGLuint32 sglInt16ToUInt32(SGLint16 par_i_value);
#define SGLint16_to_uint32(x)	sglInt16ToUInt32(x)
#define SGLuint16_to_uint32(x)	((SGLuint32) (x))
OGLXAPI SGLuint32 sglInt32ToUInt32(SGLint32 par_i_value);
#define SGLint32_to_uint32(x)	sglInt32ToUInt32(x)
#ifndef OGLX_NO_64_BITS
OGLXAPI SGLuint32 sglInt64ToUInt32(SGLint64 par_i_value);
#define SGLint64_to_uint32(x)	sglInt64ToUInt32(x)
OGLXAPI SGLuint32 sglUInt64ToUInt32(SGLuint64 par_ui_value);
#define SGLuint64_to_uint32(x)	sglUInt64ToUInt32(x)
#endif
OGLXAPI SGLuint32 sglFloatToUInt32(SGLfloat par_f_value);
#define SGLfloat_to_uint32(x)	sglFloatToUInt32(x)
OGLXAPI SGLuint32 sglDoubleToUInt32(SGLdouble par_d_value);
#define SGLdouble_to_uint32(x)	sglDoubleToUInt32(x)

#ifndef OGLX_NO_64_BITS

/* Cast (SGLuint64) */
OGLXAPI SGLuint64 sglInt8ToUInt64(SGLint8 par_i_value);
#define SGLint8_to_uint64(x)	sglInt8ToUInt64(x)
#define SGLuint8_to_uint64(x)	((SGLuint64) (x))
OGLXAPI SGLuint64 sglInt16ToUInt64(SGLint16 par_i_value);
#define SGLint16_to_uint64(x)	sglInt16ToUInt64(x)
#define SGLuint16_to_uint64(x)	((SGLuint64) (x))
OGLXAPI SGLuint64 sglInt32ToUInt64(SGLint32 par_i_value);
#define SGLint32_to_uint64(x)	sglInt32ToUInt64(x)
#define SGLuint32_to_uint64(x)	((SGLuint64) (x))
OGLXAPI SGLuint64 sglInt64ToUInt64(SGLint64 par_i_value);
#define SGLint64_to_uint64(x)	sglInt64ToUInt64(x)

OGLXAPI SGLuint64 sglFloatToUInt64(SGLfloat par_f_value);
#define SGLfloat_to_uint64(x)	sglFloatToUInt64(x)
OGLXAPI SGLuint64 sglDoubleToUInt64(SGLdouble par_d_value);
#define SGLdouble_to_uint64(x)	sglDoubleToUInt64(x)

/* Cast (SGLint64) */
#define SGLint8_to_int64(x)		((SGLint64) (x))
#define SGLuint8_to_int64(x)	((SGLint64) (x))
#define SGLint16_to_int64(x)	((SGLint64) (x))
#define SGLuint16_to_int64(x)	((SGLint64) (x))
#define SGLint32_to_int64(x)	((SGLint64) (x))
#define SGLuint32_to_int64(x)	((SGLint64) (x))
OGLXAPI SGLint64 sglUInt64ToInt64(SGLuint64 par_ui_value);
#define SGLuint64_to_int64(x)	sglUInt64ToInt64(x)

#ifndef OGLX_NO_FTOL2
OGLXAPI SGLint64 sglFloatToInt64(SGLfloat par_f_value);
#define SGLfloat_to_int64(x)	sglFloatToInt64(x)
OGLXAPI SGLint64 sglDoubleToInt64(SGLdouble par_d_value);
#define SGLdouble_to_int64(x)	sglDoubleToInt64(x)
#else
#define SGLfloat_to_int64(x)	sglFloatToInt32(x)
#define SGLdouble_to_int64(x)	sglDoubleToInt32(x)
#endif

#endif

/* Cast (SGLfloat) */
#define SGLint8_to_float(x)		((SGLfloat) (x))
#define SGLuint8_to_float(x)	((SGLfloat) (x))
#define SGLint16_to_float(x)	((SGLfloat) (x))
#define SGLuint16_to_float(x)	((SGLfloat) (x))
#define SGLint32_to_float(x)	((SGLfloat) (x))
#define SGLuint32_to_float(x)	((SGLfloat) (x))
#ifndef OGLX_NO_64_BITS
#define SGLint64_to_float(x)	((SGLfloat) (x))
#define SGLuint64_to_float(x)	((SGLfloat) (x))
#endif
OGLXAPI SGLfloat sglDoubleToFloat(SGLdouble par_d_value);
#define SGLdouble_to_float(x)	sglDoubleToFloat(x)

/* Cast (SGLdouble) */
#define SGLint8_to_double(x)	((SGLdouble) (x))
#define SGLuint8_to_double(x)	((SGLdouble) (x))
#define SGLint16_to_double(x)	((SGLdouble) (x))
#define SGLuint16_to_double(x)	((SGLdouble) (x))
#define SGLint32_to_double(x)	((SGLdouble) (x))
#define SGLuint32_to_double(x)	((SGLdouble) (x))
#ifndef OGLX_NO_64_BITS
#define SGLint64_to_double(x)	((SGLdouble) (x))
#define SGLuint64_to_double(x)	((SGLdouble) (x))
#endif
#define SGLfloat_to_double(x)	((SGLdouble) (x))

#endif                          /* _SGL_H */
