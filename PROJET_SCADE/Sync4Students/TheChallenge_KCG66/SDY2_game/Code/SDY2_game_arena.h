/*********************************************************
 **
 ** File  SDY2_game_arena.h
 **
 ** Specification File:  C:\Users\blagha85\Desktop\PROJET_SCADE\RP\game.rgfx
 **
 ** Automatically generated by SCADE RP Simu
 ** Version 6.6.4 (build i14)
 **
 ** Date of generation: 2017-12-22T17:12:38
 ** Command line: ScadeRPSimu.exe -probes -outdir C:\Users\blagha85\Desktop\PROJET_SCADE\Sync4Students\TheChallenge_KCG66\SDY2_game\Code -prefix SDY2_game_ -texturemax 1024 C:\Users\blagha85\Desktop\PROJET_SCADE\RP\game.rgfx C:\Users\blagha85\Desktop\PROJET_SCADE\RP\texture_table_1.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\textures\Widgets_textures.stt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_fonts.sft C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Styles_colors.sct C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_width.swt C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Test\Rapid Prototyper\Widgets\Common\Widgets_line_stipple.sst
 *********************************************************/

#ifndef SDY2_GAME_ARENA_H
#define SDY2_GAME_ARENA_H

#include "sgl_types.h"
#include "kcg_assign.h"

#include "SDY2_game_N_StateLED.h"
#include "SDY2_game_NumericDisplay.h"
#include "SDY2_game_TextDisplay.h"
#include "SDY2_game_LED.h"

/* Accessors */
#ifndef SDY2_game_arena_G_x
#define SDY2_game_arena_G_x(_C_) (_C_)->x
#define SDY2_game_arena_S_x(_C_,_V_) (_C_)->x = (_V_)
#endif /* SDY2_game_arena_G_x */
#ifndef SDY2_game_arena_G_y
#define SDY2_game_arena_G_y(_C_) (_C_)->y
#define SDY2_game_arena_S_y(_C_,_V_) (_C_)->y = (_V_)
#endif /* SDY2_game_arena_G_y */
#ifndef SDY2_game_arena_G_v
#define SDY2_game_arena_G_v(_C_) (_C_)->v
#define SDY2_game_arena_S_v(_C_,_V_) (_C_)->v = (_V_)
#endif /* SDY2_game_arena_G_v */
#ifndef SDY2_game_arena_G_alpha
#define SDY2_game_arena_G_alpha(_C_) (_C_)->alpha
#define SDY2_game_arena_S_alpha(_C_,_V_) (_C_)->alpha = (_V_)
#endif /* SDY2_game_arena_G_alpha */
#ifndef SDY2_game_arena_G_obspres0
#define SDY2_game_arena_G_obspres0(_C_) (_C_)->obspres0
#define SDY2_game_arena_S_obspres0(_C_,_V_) (_C_)->obspres0 = (_V_)
#endif /* SDY2_game_arena_G_obspres0 */
#ifndef SDY2_game_arena_G_obsx0
#define SDY2_game_arena_G_obsx0(_C_) (_C_)->obsx0
#define SDY2_game_arena_S_obsx0(_C_,_V_) (_C_)->obsx0 = (_V_)
#endif /* SDY2_game_arena_G_obsx0 */
#ifndef SDY2_game_arena_G_obsy0
#define SDY2_game_arena_G_obsy0(_C_) (_C_)->obsy0
#define SDY2_game_arena_S_obsy0(_C_,_V_) (_C_)->obsy0 = (_V_)
#endif /* SDY2_game_arena_G_obsy0 */
#ifndef SDY2_game_arena_G_obspres1
#define SDY2_game_arena_G_obspres1(_C_) (_C_)->obspres1
#define SDY2_game_arena_S_obspres1(_C_,_V_) (_C_)->obspres1 = (_V_)
#endif /* SDY2_game_arena_G_obspres1 */
#ifndef SDY2_game_arena_G_obsx1
#define SDY2_game_arena_G_obsx1(_C_) (_C_)->obsx1
#define SDY2_game_arena_S_obsx1(_C_,_V_) (_C_)->obsx1 = (_V_)
#endif /* SDY2_game_arena_G_obsx1 */
#ifndef SDY2_game_arena_G_obsy1
#define SDY2_game_arena_G_obsy1(_C_) (_C_)->obsy1
#define SDY2_game_arena_S_obsy1(_C_,_V_) (_C_)->obsy1 = (_V_)
#endif /* SDY2_game_arena_G_obsy1 */
#ifndef SDY2_game_arena_G_TLlight0
#define SDY2_game_arena_G_TLlight0(_C_) (_C_)->TLlight0
#define SDY2_game_arena_S_TLlight0(_C_,_V_) (_C_)->TLlight0 = (_V_)
#endif /* SDY2_game_arena_G_TLlight0 */
#ifndef SDY2_game_arena_G_TLx0
#define SDY2_game_arena_G_TLx0(_C_) (_C_)->TLx0
#define SDY2_game_arena_S_TLx0(_C_,_V_) (_C_)->TLx0 = (_V_)
#endif /* SDY2_game_arena_G_TLx0 */
#ifndef SDY2_game_arena_G_TLy0
#define SDY2_game_arena_G_TLy0(_C_) (_C_)->TLy0
#define SDY2_game_arena_S_TLy0(_C_,_V_) (_C_)->TLy0 = (_V_)
#endif /* SDY2_game_arena_G_TLy0 */
#ifndef SDY2_game_arena_G_TLlight1
#define SDY2_game_arena_G_TLlight1(_C_) (_C_)->TLlight1
#define SDY2_game_arena_S_TLlight1(_C_,_V_) (_C_)->TLlight1 = (_V_)
#endif /* SDY2_game_arena_G_TLlight1 */
#ifndef SDY2_game_arena_G_TLx1
#define SDY2_game_arena_G_TLx1(_C_) (_C_)->TLx1
#define SDY2_game_arena_S_TLx1(_C_,_V_) (_C_)->TLx1 = (_V_)
#endif /* SDY2_game_arena_G_TLx1 */
#ifndef SDY2_game_arena_G_TLy1
#define SDY2_game_arena_G_TLy1(_C_) (_C_)->TLy1
#define SDY2_game_arena_S_TLy1(_C_,_V_) (_C_)->TLy1 = (_V_)
#endif /* SDY2_game_arena_G_TLy1 */
#ifndef SDY2_game_arena_G_TLlight2
#define SDY2_game_arena_G_TLlight2(_C_) (_C_)->TLlight2
#define SDY2_game_arena_S_TLlight2(_C_,_V_) (_C_)->TLlight2 = (_V_)
#endif /* SDY2_game_arena_G_TLlight2 */
#ifndef SDY2_game_arena_G_TLx2
#define SDY2_game_arena_G_TLx2(_C_) (_C_)->TLx2
#define SDY2_game_arena_S_TLx2(_C_,_V_) (_C_)->TLx2 = (_V_)
#endif /* SDY2_game_arena_G_TLx2 */
#ifndef SDY2_game_arena_G_TLy2
#define SDY2_game_arena_G_TLy2(_C_) (_C_)->TLy2
#define SDY2_game_arena_S_TLy2(_C_,_V_) (_C_)->TLy2 = (_V_)
#endif /* SDY2_game_arena_G_TLy2 */
#ifndef SDY2_game_arena_G_TLlight3
#define SDY2_game_arena_G_TLlight3(_C_) (_C_)->TLlight3
#define SDY2_game_arena_S_TLlight3(_C_,_V_) (_C_)->TLlight3 = (_V_)
#endif /* SDY2_game_arena_G_TLlight3 */
#ifndef SDY2_game_arena_G_TLx3
#define SDY2_game_arena_G_TLx3(_C_) (_C_)->TLx3
#define SDY2_game_arena_S_TLx3(_C_,_V_) (_C_)->TLx3 = (_V_)
#endif /* SDY2_game_arena_G_TLx3 */
#ifndef SDY2_game_arena_G_TLy3
#define SDY2_game_arena_G_TLy3(_C_) (_C_)->TLy3
#define SDY2_game_arena_S_TLy3(_C_,_V_) (_C_)->TLy3 = (_V_)
#endif /* SDY2_game_arena_G_TLy3 */
#ifndef SDY2_game_arena_G_TLlight4
#define SDY2_game_arena_G_TLlight4(_C_) (_C_)->TLlight4
#define SDY2_game_arena_S_TLlight4(_C_,_V_) (_C_)->TLlight4 = (_V_)
#endif /* SDY2_game_arena_G_TLlight4 */
#ifndef SDY2_game_arena_G_TLx4
#define SDY2_game_arena_G_TLx4(_C_) (_C_)->TLx4
#define SDY2_game_arena_S_TLx4(_C_,_V_) (_C_)->TLx4 = (_V_)
#endif /* SDY2_game_arena_G_TLx4 */
#ifndef SDY2_game_arena_G_TLy4
#define SDY2_game_arena_G_TLy4(_C_) (_C_)->TLy4
#define SDY2_game_arena_S_TLy4(_C_,_V_) (_C_)->TLy4 = (_V_)
#endif /* SDY2_game_arena_G_TLy4 */
#ifndef SDY2_game_arena_G_team
#define SDY2_game_arena_G_team(_C_) (_C_)->team
#define SDY2_game_arena_S_team(_C_,_V_) kcg_assign((_C_)->team, (_V_), sizeof(SGLuint8 [255UL]))
#endif /* SDY2_game_arena_G_team */
#ifndef SDY2_game_arena_G_ev0
#define SDY2_game_arena_G_ev0(_C_) (_C_)->ev0
#define SDY2_game_arena_S_ev0(_C_,_V_) (_C_)->ev0 = (_V_)
#endif /* SDY2_game_arena_G_ev0 */
#ifndef SDY2_game_arena_G_ev1
#define SDY2_game_arena_G_ev1(_C_) (_C_)->ev1
#define SDY2_game_arena_S_ev1(_C_,_V_) (_C_)->ev1 = (_V_)
#endif /* SDY2_game_arena_G_ev1 */
#ifndef SDY2_game_arena_G_ev2
#define SDY2_game_arena_G_ev2(_C_) (_C_)->ev2
#define SDY2_game_arena_S_ev2(_C_,_V_) (_C_)->ev2 = (_V_)
#endif /* SDY2_game_arena_G_ev2 */
#ifndef SDY2_game_arena_G_ev3
#define SDY2_game_arena_G_ev3(_C_) (_C_)->ev3
#define SDY2_game_arena_S_ev3(_C_,_V_) (_C_)->ev3 = (_V_)
#endif /* SDY2_game_arena_G_ev3 */
#ifndef SDY2_game_arena_G_ev4
#define SDY2_game_arena_G_ev4(_C_) (_C_)->ev4
#define SDY2_game_arena_S_ev4(_C_,_V_) (_C_)->ev4 = (_V_)
#endif /* SDY2_game_arena_G_ev4 */
#ifndef SDY2_game_arena_G_score_a
#define SDY2_game_arena_G_score_a(_C_) (_C_)->score_a
#define SDY2_game_arena_S_score_a(_C_,_V_) (_C_)->score_a = (_V_)
#endif /* SDY2_game_arena_G_score_a */
#ifndef SDY2_game_arena_G_score_b
#define SDY2_game_arena_G_score_b(_C_) (_C_)->score_b
#define SDY2_game_arena_S_score_b(_C_,_V_) (_C_)->score_b = (_V_)
#endif /* SDY2_game_arena_G_score_b */
#ifndef SDY2_game_arena_G_time
#define SDY2_game_arena_G_time(_C_) (_C_)->time
#define SDY2_game_arena_S_time(_C_,_V_) (_C_)->time = (_V_)
#endif /* SDY2_game_arena_G_time */
#ifndef SDY2_game_arena_G_led
#define SDY2_game_arena_G_led(_C_) (_C_)->led
#define SDY2_game_arena_S_led(_C_,_V_) (_C_)->led = (_V_)
#endif /* SDY2_game_arena_G_led */
#ifndef SDY2_game_arena_G_mapID
#define SDY2_game_arena_G_mapID(_C_) (_C_)->mapID
#define SDY2_game_arena_S_mapID(_C_,_V_) (_C_)->mapID = (_V_)
#endif /* SDY2_game_arena_G_mapID */

/* Context type */
typedef struct SDY2_game_typ_arena_ {
  /* ------------------------- inputs --------------------------- */
  SGLdouble x;
  SGLdouble y;
  SGLdouble v;
  SGLdouble alpha;
  SGLbool obspres0;
  SGLdouble obsx0;
  SGLdouble obsy0;
  SGLbool obspres1;
  SGLdouble obsx1;
  SGLdouble obsy1;
  SGLint32 TLlight0;
  SGLdouble TLx0;
  SGLdouble TLy0;
  SGLint32 TLlight1;
  SGLdouble TLx1;
  SGLdouble TLy1;
  SGLint32 TLlight2;
  SGLdouble TLx2;
  SGLdouble TLy2;
  SGLint32 TLlight3;
  SGLdouble TLx3;
  SGLdouble TLy3;
  SGLint32 TLlight4;
  SGLdouble TLx4;
  SGLdouble TLy4;
  SGLuint8 team[255UL];
  SGLbool ev0;
  SGLbool ev1;
  SGLbool ev2;
  SGLbool ev3;
  SGLbool ev4;
  SGLint32 score_a;
  SGLint32 score_b;
  SGLdouble time;
  SGLint32 led;
  SGLint32 mapID;
  /* ------------------------- subcontexts ---------------------- */
  SDY2_game_typ_N_StateLED _N_StateLED__;
  SDY2_game_typ_N_StateLED _N_StateLED_1__;
  SDY2_game_typ_N_StateLED _N_StateLED_2__;
  SDY2_game_typ_N_StateLED _N_StateLED_3__;
  SDY2_game_typ_N_StateLED _N_StateLED_4__;
  SDY2_game_typ_LED _LEDevent0__;
  SDY2_game_typ_LED _LEDevent1__;
  SDY2_game_typ_LED _LEDevent2__;
  SDY2_game_typ_LED _LEDevent3__;
  SDY2_game_typ_LED _LEDevent4__;
  SDY2_game_typ_N_StateLED _N_StateLEDStatus__;
} SDY2_game_typ_arena;

/* Associated functions */
extern void SDY2_game_arena_init(SDY2_game_typ_arena *pContext);
extern void SDY2_game_arena_predraw(SDY2_game_typ_arena *pContext);
extern void SDY2_game_arena_draw(SDY2_game_typ_arena *pContext, SGLint32 pPriority);
extern SDY2_game_typ_arena * SDY2_game_arena_alloc(void);
extern void SDY2_game_arena_free(SDY2_game_typ_arena *pContext);

#endif /* SDY2_GAME_ARENA_H */

/*********************************************************
 ** End of file
 ** End of generation: 2017-12-22T17:12:38
 *********************************************************/

