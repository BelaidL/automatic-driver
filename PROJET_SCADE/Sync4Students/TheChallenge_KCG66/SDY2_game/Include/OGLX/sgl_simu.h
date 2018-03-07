/*+ FILE DESCRIPTION -------------------------------------------------------
 FILENAME          : sgl_simu.h
 DESCRIPTION       : Definition of SGL SIMU API
 VERSION           : $Revision$
 MODIFICATION DATE : $Date$
 COPYRIGHT (C)     : 2008-2014 by Esterel Technologies. All Rights Reserved.
 ACCESS, USE, REPRODUCTION OR DISTRIBUTION IS GOVERNED BY ESTEREL TECHNOLOGIES LICENSING CONDITIONS.
---------------------------------------------------------------------------- +*/

#include "sgl.h"

#ifndef _SGL_SIMU_H_
#define _SGL_SIMU_H_

#ifdef SDY_COSIMU_BEHAVIOR
extern int SdyCosimulation_BehaviorInit(void *);
extern int SdyCosimulation_BehaviorStep(void *, void *);
#define SDY_COSIMU_BEHAVIOR_INIT(_O_) SdyCosimulation_BehaviorInit(_O_)
#define SDY_COSIMU_BEHAVIOR_STEP(_I_,_O_) SdyCosimulation_BehaviorStep((_I_),(_O_))
#else
#define SDY_COSIMU_BEHAVIOR_INIT(_O_) 1
#define SDY_COSIMU_BEHAVIOR_STEP(_I_,_O_) 1
#endif

OGLXAPI void f001(SGLbyte p1);
OGLXAPI void f002(void);
OGLXAPI void f003(SGLbyte p1, SGLlong p2);
OGLXAPI void f005(SGLulong p1, SGLbyte p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6);
OGLXAPI void f006(SGLulong p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLbool p5);
OGLXAPI void f008(SGLbyte p1);
OGLXAPI void f009(SGLbyte p1);
OGLXAPI void f013(SGLlong p1);
OGLXAPI void f014(SGLlong p1);
OGLXAPI void f015(SGLlong p1);
OGLXAPI void f016(void);
OGLXAPI void f019(void);
OGLXAPI void f020(void);
OGLXAPI void f022(SGLfloat p1);
OGLXAPI void f023(SGLfloat p1, SGLfloat p2);
OGLXAPI void f024(SGLfloat p1, SGLfloat p2);
OGLXAPI void f025(SGLbyte p1, SGLlong p2, SGLfloat * p3);
OGLXAPI void f027(SGLfloat p1, SGLfloat p2);
OGLXAPI void f030(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLbool p6, SGLbyte p7);
OGLXAPI void f031(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6, SGLbool p7, SGLbyte p8);
OGLXAPI void f033(SGLulong p1, SGLulong p2);
OGLXAPI void f034(SGLfloat p1, SGLfloat p2, const SGLbyte * p3, SGLlong p4);
OGLXAPI void f035(SGLfloat p1, SGLfloat p2);
OGLXAPI void f036(SGLlong p1);
OGLXAPI void f037(SGLlong p1, SGLbyte p2, SGLlong p3, SGLlong p4, const SGLbyte * p5, SGLbyte p6);
OGLXAPI void f039(SGLlong p1, SGLbyte p2, SGLlong p3, SGLlong p4, SGLlong p5, const SGLulong * p6, SGLbyte p7);
OGLXAPI SGLbool f041(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5);
OGLXAPI SGLfloat f042(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5);
OGLXAPI SGLfloat f043(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4);
OGLXAPI SGLbool f044(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6);
OGLXAPI SGLfloat f045(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6);
OGLXAPI SGLfloat f046(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6);
OGLXAPI SGLbool f047(SGLfloat p1, SGLfloat p2, SGLulong p3, SGLfloat p4[][2]);
OGLXAPI void f048(SGLlong p1);
OGLXAPI void f049(SGLlong p1, SGLlong p2, SGLlong p3);
OGLXAPI void f050(SGLlong p1, SGLlong p2);
OGLXAPI void f051(SGLbool p1, SGLfloat p2);
OGLXAPI void f052(SGLulong p1, SGLfloat * p2, SGLfloat * p3, SGLfloat p4, SGLfloat p5, SGLbyte p6, SGLbyte p7);
OGLXAPI void f053(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, const SGLbyte * p5, SGLlong p6);
OGLXAPI void f054(SGLfloat p1, SGLfloat p2, SGLfloat p3, sgl_numeric_format * p4);
OGLXAPI void f055(SGLlong p1, SGLfloat p2, SGLfloat p3);
OGLXAPI void f056(SGLulong p1);
OGLXAPI void f057(SGLfloat p1, SGLfloat p2);
OGLXAPI void f058(void);
OGLXAPI void f059(SGLfloat p1, SGLfloat p2, SGLfloat * p3, SGLfloat * p4);
OGLXAPI SGLulong f060(SGLbyte p1);
OGLXAPI void f061(SGLulong p1);
OGLXAPI void f062(SGLfloat p1, SGLfloat p2, const SGLlong * p3, SGLlong p4);
OGLXAPI void f063(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, const SGLlong * p5, SGLlong p6);
OGLXAPI void f064(void);
OGLXAPI SGLulong f065(void);
OGLXAPI void f066(SGLfloat p1, SGLfloat p2, const SGLbyte * p3, SGLlong p4);
OGLXAPI void f067(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4);
OGLXAPI void f068(SGLlong p1);
OGLXAPI void f069(SGLfloat p1, SGLfloat p2, const SGLbyte * p3, SGLlong p4);
OGLXAPI void f070(SGLfloat p1, SGLfloat p2, const SGLlong * p3, SGLlong p4);
OGLXAPI void f071(SGLbool p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6, SGLfloat * p7, SGLfloat * p8, SGLfloat * p9, SGLfloat * p10);
OGLXAPI void f072(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6, SGLbool p7, SGLbyte p8);
OGLXAPI void f073(SGLfloat p1, SGLfloat p2);
OGLXAPI void f074(void);
OGLXAPI void f075(SGLlong p1);
OGLXAPI SGLulong f076(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4);
OGLXAPI void f077(void);
OGLXAPI void f078(SGLulong p1);
OGLXAPI void f079(SGLfloat p1, SGLfloat p2, SGLfloat * p3, SGLfloat * p4);
OGLXAPI SGLulong f080(SGLfloat p1, SGLfloat p2, SGLlong p3, SGLlong p4, SGLlong p5, const void *p6, SGLbool p7);
OGLXAPI void f081(SGLulong p1);
OGLXAPI void f083(SGLfloat p1, SGLfloat p2, const SGLushort * p3, SGLlong p4);
OGLXAPI void f084(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, const SGLushort * p5, SGLlong p6);
OGLXAPI void f085(SGLlong p1);
OGLXAPI void f086(SGLfloat p1, SGLfloat p2);
OGLXAPI void f087(SGLfloat p1, SGLfloat p2);
OGLXAPI void f089(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6);
OGLXAPI void f090(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4);
OGLXAPI void f091(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4);
OGLXAPI void f092(SGLfloat p1, SGLfloat p2);
OGLXAPI void f093(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLbyte p4, SGLbyte p5, SGLfloat p6, SGLfloat p7);
OGLXAPI void f094(void);
OGLXAPI void f095(SGLbyte p1);
OGLXAPI void f096(void);
OGLXAPI void f097(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6, SGLfloat p7, SGLfloat p8, SGLfloat * p9, SGLfloat * p10,
                  SGLfloat * p11, SGLfloat * p12);
OGLXAPI void f098(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6, SGLfloat p7, SGLfloat p8, SGLfloat * p9, SGLfloat * p10,
                  SGLfloat * p11, SGLfloat * p12);
OGLXAPI void f099(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6, SGLfloat * p7, SGLfloat * p8, SGLfloat * p9, SGLfloat * p10);
OGLXAPI void f100(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLfloat p6, SGLfloat * p7, SGLfloat * p8, SGLfloat * p9, SGLfloat * p10);
OGLXAPI void f120(SGLfloat p1, SGLfloat p2, SGLfloat p3, SGLfloat p4, SGLfloat p5, SGLbyte p6, SGLbyte p7, SGLfloat p8, SGLfloat p9, SGLfloat * p10,
                  SGLfloat * p11, SGLfloat * p12, SGLfloat * p13);
OGLXAPI void f121(SGLlong p1);
OGLXAPI void f123(SGLlong p1, SGLlong p2, SGLlong p3, SGLlong p4, const void *p5, SGLbool p6);
OGLXAPI void f124(SGLfloat p1);
OGLXAPI void f125(SGLfloat p1);


#define f101   1U
#define f102   2U
#define f103   3U
#define f109   5U
#define f1100  6U
#define f1101  7U
#define f1102  8U
#define f1103  9U
#define f1104  10U
#define f1105  11U
#define f1110             0U
#define f1111             1U
#define f11110            16U
#define f11111            32U
#define f11112            64U
#define f11113           128U
#define f11114           256U
#define f11115           512U
#define f1112             2U
#define f1113             3U
#define f1114             4U
#define f1115             5U
#define f1116             6U
#define f1117             7U
#define f1118             8U
#define f1119             9U
#define f147 32U
#define f148          33U
#define f149              34U
#define f150            35U
#define f151            36U
#define f1520                37U
#define f1521                4U
#define f1522                8U
#define f1523                    57U
#define f1524                    58U
#define f1525                    59U
#define f1551               1U
#define f1552               2U
#define f158            44U
#define f159              45U
#define f160              46U
#define f161              47U
#define f162              48U
#define f163      53U
#define f164               0xFFFFFFFEUL
#define f165           54U
#define f166           55U
#define f167          56U
#define f168    0U
#define f169   1U
#define f170          1U
#define f171         2U
#define f172     3U
#define f173 1U
#define f174  0U
#define f175                   5UL
#define f176        2UL
#define f180                        0UL
#define f181                         1UL
#define f182            3UL
#define f184                     1UL
#define f186              4UL
#define f191       2U
#define f192   1U
#define f193   6U
#define f194   5U
#define f195   0U
#define f196   1U
#define f201										0U
#define f202										1U
#define f203								2U
#define f204								0U
#define f205							1U
#define f206								2U
#define f207								2U
#define f208							1U
#define f209							0U
#define f210							0U
#define f211							1U
#define f212							2U
#define f213							16U
#define f214							16U
#define f215							0U
#define f216							1U
#define f218							7U
#define f219							0U
#define f220							1U
#define f224                            57U
#define f227                            58U
#define f228							1U
#define f229							2U
#define f230							59U
#define f301							1UL
#define f302							2UL
#define f303							3UL
#define f304							4UL
#define f305							5UL
#define f306							6UL
#define f307							7UL
#define f308							8UL
#define f309							9UL

#endif
