/* EiDD_Challenge_SW_mapping.c */

#include "EiDD_Challenge_SW_type.h"
#include "EiDD_Challenge_SW_interface.h"
#include "EiDD_Challenge_SW_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name

DECL_ITER(map_10);
DECL_ITER(map_5);
DECL_ITER(fold_10);
DECL_ITER(fold_2);
DECL_ITER(map_2);
DECL_ITER(array_2);
DECL_ITER(array_50);
DECL_ITER(array_255);
DECL_ITER(array_10);
DECL_ITER(array_5);

#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_163, 6);
DECL_SCOPE(scope_162, 15);
DECL_SCOPE(scope_161, 6);
DECL_SCOPE(scope_160, 12);
DECL_SCOPE(scope_159, 17);
DECL_SCOPE(scope_158, 1);
DECL_SCOPE(scope_157, 1);
DECL_SCOPE(scope_156, 1);
DECL_SCOPE(scope_155, 1);
DECL_SCOPE(scope_154, 1);
DECL_SCOPE(scope_153, 1);
DECL_SCOPE(scope_152, 1);
DECL_SCOPE(scope_151, 3);
DECL_SCOPE(scope_150, 3);
DECL_SCOPE(scope_149, 3);
DECL_SCOPE(scope_148, 3);
DECL_SCOPE(scope_147, 3);
DECL_SCOPE(scope_146, 3);
DECL_SCOPE(scope_145, 18);
DECL_SCOPE(scope_143, 8);
DECL_SCOPE(scope_142, 8);
DECL_SCOPE(scope_141, 6);
DECL_SCOPE(scope_140, 59);
DECL_SCOPE(scope_139, 12);
DECL_SCOPE(scope_138, 1);
DECL_SCOPE(scope_137, 1);
DECL_SCOPE(scope_136, 10);
DECL_SCOPE(scope_135, 3);
DECL_SCOPE(scope_134, 1);
DECL_SCOPE(scope_133, 1);
DECL_SCOPE(scope_132, 7);
DECL_SCOPE(scope_131, 5);
DECL_SCOPE(scope_130, 1);
DECL_SCOPE(scope_129, 1);
DECL_SCOPE(scope_128, 1);
DECL_SCOPE(scope_127, 3);
DECL_SCOPE(scope_126, 3);
DECL_SCOPE(scope_125, 30);
DECL_SCOPE(scope_124, 1);
DECL_SCOPE(scope_123, 10);
DECL_SCOPE(scope_122, 7);
DECL_SCOPE(scope_121, 21);
DECL_SCOPE(scope_120, 5);
DECL_SCOPE(scope_119, 6);
DECL_SCOPE(scope_118, 29);
DECL_SCOPE(scope_117, 7);
DECL_SCOPE(scope_116, 15);
DECL_SCOPE(scope_115, 5);
DECL_SCOPE(scope_114, 13);
DECL_SCOPE(scope_113, 5);
DECL_SCOPE(scope_112, 25);
DECL_SCOPE(scope_111, 24);
DECL_SCOPE(scope_110, 17);
DECL_SCOPE(scope_109, 2);
DECL_SCOPE(scope_108, 5);
DECL_SCOPE(scope_107, 1);
DECL_SCOPE(scope_106, 7);
DECL_SCOPE(scope_105, 14);
DECL_SCOPE(scope_104, 1);
DECL_SCOPE(scope_103, 1);
DECL_SCOPE(scope_102, 1);
DECL_SCOPE(scope_101, 12);
DECL_SCOPE(scope_100, 5);
DECL_SCOPE(scope_99, 6);
DECL_SCOPE(scope_98, 7);
DECL_SCOPE(scope_97, 15);
DECL_SCOPE(scope_96, 43);
DECL_SCOPE(scope_95, 1);
DECL_SCOPE(scope_94, 7);
DECL_SCOPE(scope_93, 11);
DECL_SCOPE(scope_92, 19);
DECL_SCOPE(scope_91, 16);
DECL_SCOPE(scope_90, 2);
DECL_SCOPE(scope_89, 2);
DECL_SCOPE(scope_88, 14);
DECL_SCOPE(scope_87, 20);
DECL_SCOPE(scope_86, 18);
DECL_SCOPE(scope_85, 17);
DECL_SCOPE(scope_84, 14);
DECL_SCOPE(scope_83, 6);
DECL_SCOPE(scope_82, 24);
DECL_SCOPE(scope_81, 10);
DECL_SCOPE(scope_80, 1);
DECL_SCOPE(scope_79, 1);
DECL_SCOPE(scope_78, 5);
DECL_SCOPE(scope_77, 14);
DECL_SCOPE(scope_76, 1);
DECL_SCOPE(scope_75, 1);
DECL_SCOPE(scope_74, 1);
DECL_SCOPE(scope_73, 1);
DECL_SCOPE(scope_72, 7);
DECL_SCOPE(scope_71, 1);
DECL_SCOPE(scope_70, 4);
DECL_SCOPE(scope_69, 1);
DECL_SCOPE(scope_68, 4);
DECL_SCOPE(scope_67, 3);
DECL_SCOPE(scope_66, 4);
DECL_SCOPE(scope_65, 11);
DECL_SCOPE(scope_64, 1);
DECL_SCOPE(scope_63, 4);
DECL_SCOPE(scope_62, 11);
DECL_SCOPE(scope_61, 10);
DECL_SCOPE(scope_60, 7);
DECL_SCOPE(scope_59, 10);
DECL_SCOPE(scope_58, 14);
DECL_SCOPE(scope_57, 28);
DECL_SCOPE(scope_56, 1);
DECL_SCOPE(scope_55, 1);
DECL_SCOPE(scope_54, 1);
DECL_SCOPE(scope_53, 1);
DECL_SCOPE(scope_52, 9);
DECL_SCOPE(scope_51, 1);
DECL_SCOPE(scope_50, 1);
DECL_SCOPE(scope_49, 1);
DECL_SCOPE(scope_48, 3);
DECL_SCOPE(scope_47, 15);
DECL_SCOPE(scope_46, 63);
DECL_SCOPE(scope_45, 1);
DECL_SCOPE(scope_44, 1);
DECL_SCOPE(scope_43, 9);
DECL_SCOPE(scope_42, 1);
DECL_SCOPE(scope_41, 3);
DECL_SCOPE(scope_40, 11);
DECL_SCOPE(scope_39, 6);
DECL_SCOPE(scope_38, 5);
DECL_SCOPE(scope_37, 5);
DECL_SCOPE(scope_36, 8);
DECL_SCOPE(scope_35, 5);
DECL_SCOPE(scope_34, 12);
DECL_SCOPE(scope_33, 12);
DECL_SCOPE(scope_32, 10);
DECL_SCOPE(scope_31, 42);
DECL_SCOPE(scope_30, 4);
DECL_SCOPE(scope_29, 5);
DECL_SCOPE(scope_28, 4);
DECL_SCOPE(scope_27, 5);
DECL_SCOPE(scope_26, 6);
DECL_SCOPE(scope_25, 5);
DECL_SCOPE(scope_24, 10);
DECL_SCOPE(scope_23, 1);
DECL_SCOPE(scope_22, 1);
DECL_SCOPE(scope_21, 18);
DECL_SCOPE(scope_20, 1);
DECL_SCOPE(scope_19, 12);
DECL_SCOPE(scope_18, 9);
DECL_SCOPE(scope_17, 5);
DECL_SCOPE(scope_16, 2);
DECL_SCOPE(scope_15, 12);
DECL_SCOPE(scope_14, 2);
DECL_SCOPE(scope_13, 1);
DECL_SCOPE(scope_12, 3);
DECL_SCOPE(scope_11, 3);
DECL_SCOPE(scope_10, 1);
DECL_SCOPE(scope_9, 5);
DECL_SCOPE(scope_8, 2);
DECL_SCOPE(scope_7, 1);
DECL_SCOPE(scope_6, 2);
DECL_SCOPE(scope_5, 1);
DECL_SCOPE(scope_4, 2);
DECL_SCOPE(scope_3, 2);
DECL_SCOPE(scope_2, 3);
DECL_SCOPE(scope_1, 38);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_Robot_SSM_st_Arrived_Robot(void* pHandle) { return *(SSM_ST_Robot*)pHandle == SSM_st_Arrived_Robot; }
static int isActive_SSM_ST_Robot_SSM_st_Preparing_Robot(void* pHandle) { return *(SSM_ST_Robot*)pHandle == SSM_st_Preparing_Robot; }
static int isActive_SSM_ST_Robot_SSM_st_Running_Robot(void* pHandle) { return *(SSM_ST_Robot*)pHandle == SSM_st_Running_Robot; }
static int isActive_SSM_ST_Robot_SSM_st_Stopped_Robot(void* pHandle) { return *(SSM_ST_Robot*)pHandle == SSM_st_Stopped_Robot; }
static int isActive_SSM_ST_SM1_SSM_st_AfterTurn_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_AfterTurn_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Amber_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Amber_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_GoAHead_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_GoAHead_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Go_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Go_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_Stop_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Stop_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_depart_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_depart_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_light_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_light_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_turn_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_turn_SM1; }
static int isActive_SSM_TR_Robot_SSM_TR_Preparing_Running_1_Preparing_Robot(void* pHandle) { return *(SSM_TR_Robot*)pHandle == SSM_TR_Preparing_Running_1_Preparing_Robot; }
static int isActive_SSM_TR_Robot_SSM_TR_Running_Arrived_2_Running_Robot(void* pHandle) { return *(SSM_TR_Robot*)pHandle == SSM_TR_Running_Arrived_2_Running_Robot; }
static int isActive_SSM_TR_Robot_SSM_TR_Running_Stopped_1_Running_Robot(void* pHandle) { return *(SSM_TR_Robot*)pHandle == SSM_TR_Running_Stopped_1_Running_Robot; }
static int isActive_SSM_TR_SM1_SSM_TR_AfterTurn_Go_1_AfterTurn_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_AfterTurn_Go_1_AfterTurn_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_AfterTurn_Stop_2_AfterTurn_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_AfterTurn_Stop_2_AfterTurn_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Amber_Go_1_Amber_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Amber_Go_1_Amber_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_GoAHead_AfterTurn_3_GoAHead_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_GoAHead_AfterTurn_3_GoAHead_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_GoAHead_Stop_2_GoAHead_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_GoAHead_Stop_2_GoAHead_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_GoAHead_light_4_GoAHead_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_GoAHead_light_4_GoAHead_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_GoAHead_turn_1_GoAHead_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_GoAHead_turn_1_GoAHead_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Go_Amber_1_Go_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Go_Amber_1_Go_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Go_GoAHead_2_Go_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Go_GoAHead_2_Go_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Go_Stop_4_Go_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Go_Stop_4_Go_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_Go_turn_3_Go_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_Go_turn_3_Go_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_depart_Go_1_depart_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_depart_Go_1_depart_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_depart_Stop_3_depart_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_depart_Stop_3_depart_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_depart_turn_2_depart_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_depart_turn_2_depart_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_light_Go_1_light_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_light_Go_1_light_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_turn_AfterTurn_1_turn_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_turn_AfterTurn_1_turn_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_on_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_on_SM1; }
static int isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1(void* pHandle) { return *(_4_SSM_ST_SM1*)pHandle == SSM_st_positionning_SM1; }
static int isActive__5_SSM_TR_SM1_SSM_TR_positionning_on_1_positionning_SM1(void* pHandle) { return *(_5_SSM_TR_SM1*)pHandle == SSM_TR_positionning_on_1_positionning_SM1; }
static int isActive_kcg_bool_kcg_false(void* pHandle) { return *(kcg_bool*)pHandle == kcg_false; }
static int isActive_kcg_bool_kcg_true(void* pHandle) { return *(kcg_bool*)pHandle == kcg_true; }

/* mapping definition */

const MappingIterator iter_map_10 = { "map", 10, 10, NULL };
const MappingIterator iter_map_5 = { "map", 5, 5, NULL };
const MappingIterator iter_fold_10 = { "fold", 10, 10, NULL };
const MappingIterator iter_fold_2 = { "fold", 2, 2, NULL };
const MappingIterator iter_map_2 = { "map", 2, 2, NULL };
const MappingIterator iter_array_2 = { "array", 2, 2, NULL };
const MappingIterator iter_array_50 = { "array", 50, 50, NULL };
const MappingIterator iter_array_255 = { "array", 255, 255, NULL };
const MappingIterator iter_array_10 = { "array", 10, 10, NULL };
const MappingIterator iter_array_5 = { "array", 5, 5, NULL };

const MappingEntry scope_163_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Variation_Utilities, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_163 = {
    "Utilities::Variation/ Variation_Utilities/math::Abs 1",
    scope_163_entries, 6
};

const MappingEntry scope_162_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "varX", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, varX), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Variation_Utilities, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Utilities::Integrator 1", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_Variation_Utilities, Context_Integrator_1), NULL, &scope_162_entries[12], isActive_kcg_bool_kcg_true, &scope_32, 1, 11 },
    /* 12 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Variation_Utilities, every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 12 },
    /* 13 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_163, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "Utilities::Normalize 1", NULL, sizeof(outC_Normalize_Utilities), offsetof(outC_Variation_Utilities, Context_Normalize_1), NULL, NULL, NULL, &scope_33, 1, 14 }
};
const MappingScope scope_162 = {
    "Utilities::Variation/ Variation_Utilities",
    scope_162_entries, 15
};

const MappingEntry scope_161_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_UpTime_Utilities, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_161 = {
    "Utilities::UpTime/ UpTime_Utilities/math::Abs 1",
    scope_161_entries, 6
};

const MappingEntry scope_160_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "t", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, t), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_UpTime_Utilities, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "Utilities::Integrator 1", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_UpTime_Utilities, Context_Integrator_1), NULL, NULL, NULL, &scope_32, 1, 10 },
    /* 11 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_161, 1, 11 }
};
const MappingScope scope_160 = {
    "Utilities::UpTime/ UpTime_Utilities",
    scope_160_entries, 12
};

const MappingEntry scope_159_entries[17] = {
    /* 0 */ { MAP_OUTPUT, "score", NULL, sizeof(kcg_int32), offsetof(outC_ScoringB_City, score), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_ScoringB_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(positionTy), offsetof(outC_ScoringB_City, _L2), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L21), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int32), offsetof(outC_ScoringB_City, _L22), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L23), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_ScoringB_City, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L25), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "Utilities::UpTime 1", NULL, sizeof(outC_UpTime_Utilities), offsetof(outC_ScoringB_City, Context_UpTime_1), NULL, NULL, NULL, &scope_160, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "Utilities::Variation 1", NULL, sizeof(outC_Variation_Utilities), offsetof(outC_ScoringB_City, Context_Variation_1), NULL, NULL, NULL, &scope_162, 1, 16 }
};
const MappingScope scope_159 = {
    "City::ScoringB/ ScoringB_City",
    scope_159_entries, 17
};

const MappingEntry scope_158_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_Sounds, _L1_then_IfBlock1), &_Type_kcg_int32_Utils, &scope_146_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_158 = {
    "Sounds/ SoundsIfBlock1:then:",
    scope_158_entries, 1
};

const MappingEntry scope_157_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_Sounds, _L3_then_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_147_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_157 = {
    "Sounds/ SoundsIfBlock1:else:then:",
    scope_157_entries, 1
};

const MappingEntry scope_156_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_Sounds, _L4_then_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_148_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_156 = {
    "Sounds/ SoundsIfBlock1:else:else:then:",
    scope_156_entries, 1
};

const MappingEntry scope_155_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_Sounds, _L3_then_else_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_149_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_155 = {
    "Sounds/ SoundsIfBlock1:else:else:else:then:",
    scope_155_entries, 1
};

const MappingEntry scope_154_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_Sounds, _L3_then_else_else_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_150_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_154 = {
    "Sounds/ SoundsIfBlock1:else:else:else:else:then:",
    scope_154_entries, 1
};

const MappingEntry scope_153_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_Sounds, _L3_then_else_else_else_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_151_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_153 = {
    "Sounds/ SoundsIfBlock1:else:else:else:else:else:then:",
    scope_153_entries, 1
};

const MappingEntry scope_152_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_Sounds, _L1_else_else_else_else_else_else_IfBlock1), &_Type_kcg_int32_Utils, &scope_151_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 }
};
const MappingScope scope_152 = {
    "Sounds/ SoundsIfBlock1:else:else:else:else:else:else:",
    scope_152_entries, 1
};

const MappingEntry scope_151_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Sounds, else_clock_else_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_150_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_151_entries[0], isActive_kcg_bool_kcg_false, &scope_152, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_151_entries[0], isActive_kcg_bool_kcg_true, &scope_153, 1, 2 }
};
const MappingScope scope_151 = {
    "Sounds/ SoundsIfBlock1:else:else:else:else:else:",
    scope_151_entries, 3
};

const MappingEntry scope_150_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Sounds, else_clock_else_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_149_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_150_entries[0], isActive_kcg_bool_kcg_false, &scope_151, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_150_entries[0], isActive_kcg_bool_kcg_true, &scope_154, 1, 2 }
};
const MappingScope scope_150 = {
    "Sounds/ SoundsIfBlock1:else:else:else:else:",
    scope_150_entries, 3
};

const MappingEntry scope_149_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Sounds, else_clock_else_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_148_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_149_entries[0], isActive_kcg_bool_kcg_false, &scope_150, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_149_entries[0], isActive_kcg_bool_kcg_true, &scope_155, 1, 2 }
};
const MappingScope scope_149 = {
    "Sounds/ SoundsIfBlock1:else:else:else:",
    scope_149_entries, 3
};

const MappingEntry scope_148_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Sounds, else_clock_else_IfBlock1), &_Type_kcg_bool_Utils, &scope_147_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_148_entries[0], isActive_kcg_bool_kcg_false, &scope_149, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_148_entries[0], isActive_kcg_bool_kcg_true, &scope_156, 1, 2 }
};
const MappingScope scope_148 = {
    "Sounds/ SoundsIfBlock1:else:else:",
    scope_148_entries, 3
};

const MappingEntry scope_147_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Sounds, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_146_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_147_entries[0], isActive_kcg_bool_kcg_false, &scope_148, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_147_entries[0], isActive_kcg_bool_kcg_true, &scope_157, 1, 2 }
};
const MappingScope scope_147 = {
    "Sounds/ SoundsIfBlock1:else:",
    scope_147_entries, 3
};

const MappingEntry scope_146_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_Sounds, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_146_entries[0], isActive_kcg_bool_kcg_false, &scope_147, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_146_entries[0], isActive_kcg_bool_kcg_true, &scope_158, 1, 2 }
};
const MappingScope scope_146 = {
    "Sounds/ SoundsIfBlock1:",
    scope_146_entries, 3
};

const MappingEntry scope_145_entries[18] = {
    /* 0 */ { MAP_OUTPUT, "eventE", NULL, sizeof(eventTy), offsetof(outC_EventEdge_Utilities, eventE), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(eventTy), offsetof(outC_EventEdge_Utilities, _L1), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_EventEdge_Utilities, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_EventEdge_Utilities, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_EventEdge_Utilities, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_EventEdge_Utilities, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_EventEdge_Utilities, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(eventTy), offsetof(outC_EventEdge_Utilities, _L12), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_EventEdge_Utilities, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_EventEdge_Utilities, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_EventEdge_Utilities, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_EventEdge_Utilities, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_EventEdge_Utilities, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "digital::RisingEdge 1", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_EventEdge_Utilities, Context_RisingEdge_1), NULL, NULL, NULL, &scope_141, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "digital::RisingEdge 2", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_EventEdge_Utilities, Context_RisingEdge_2), NULL, NULL, NULL, &scope_141, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "digital::RisingEdge 3", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_EventEdge_Utilities, Context_RisingEdge_3), NULL, NULL, NULL, &scope_141, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "digital::RisingEdge 4", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_EventEdge_Utilities, Context_RisingEdge_4), NULL, NULL, NULL, &scope_141, 1, 16 },
    /* 17 */ { MAP_INSTANCE, "digital::RisingEdge 5", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_EventEdge_Utilities, Context_RisingEdge_5), NULL, NULL, NULL, &scope_141, 1, 17 }
};
const MappingScope scope_145 = {
    "Utilities::EventEdge/ EventEdge_Utilities",
    scope_145_entries, 18
};

const MappingEntry scope_143_entries[8] = {
    /* 0 */ { MAP_LOCAL, "eve", NULL, sizeof(eventTy), offsetof(outC_Sounds, eve), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 0 },
    /* 1 */ { MAP_LOCAL, "wav", NULL, sizeof(kcg_int32), offsetof(outC_Sounds, wav), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(eventTy), offsetof(outC_Sounds, _L1), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(eventTy), offsetof(outC_Sounds, _L2), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_Sounds, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_INSTANCE, "SoundEffects 1", NULL, sizeof(outC_SoundEffects), offsetof(outC_Sounds, Context_SoundEffects_1), NULL, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_INSTANCE, "Utilities::EventEdge 1", NULL, sizeof(outC_EventEdge_Utilities), offsetof(outC_Sounds, Context_EventEdge_1), NULL, NULL, NULL, &scope_145, 1, 6 },
    /* 7 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_146, 1, 7 }
};
const MappingScope scope_143 = {
    "Sounds/ Sounds",
    scope_143_entries, 8
};

const MappingEntry scope_142_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "cpt", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, cpt_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_count_down_digital_int32, _L1_int32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L2_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L3_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L4_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L7_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L8_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L13_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 }
};
const MappingScope scope_142 = {
    "digital::count_down/ count_down_digital_int32",
    scope_142_entries, 8
};

const MappingEntry scope_141_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "RE_Output", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, RE_Output), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_141 = {
    "digital::RisingEdge/ RisingEdge_digital",
    scope_141_entries, 6
};

const MappingEntry scope_140_entries[59] = {
    /* 0 */ { MAP_OUTPUT, "score", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, score), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(statusTy), offsetof(outC_ScoringA_City, _L3), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(eventTy), offsetof(outC_ScoringA_City, _L4), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L12), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L15), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L16), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L17), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L18), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L19), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L20), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L23), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L24), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L25), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L27", NULL, sizeof(statusTy), offsetof(outC_ScoringA_City, _L27), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L28), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L30), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L33", NULL, sizeof(statusTy), offsetof(outC_ScoringA_City, _L33), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L34), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L36), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L37), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L38), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L41), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L42), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L43), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L44), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L45), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L46), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L47), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L35), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L48), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L51), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L50), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L52), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L53), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L54), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L55), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L56), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L57), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L58), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L59), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_INSTANCE, "digital::RisingEdge 1", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_ScoringA_City, Context_RisingEdge_1), NULL, NULL, NULL, &scope_141, 1, 53 },
    /* 54 */ { MAP_INSTANCE, "digital::RisingEdge 3", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_ScoringA_City, Context_RisingEdge_3), NULL, NULL, NULL, &scope_141, 1, 54 },
    /* 55 */ { MAP_INSTANCE, "digital::RisingEdge 4", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_ScoringA_City, Context_RisingEdge_4), NULL, NULL, NULL, &scope_141, 1, 55 },
    /* 56 */ { MAP_INSTANCE, "digital::RisingEdge 5", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_ScoringA_City, Context_RisingEdge_5), NULL, NULL, NULL, &scope_141, 1, 56 },
    /* 57 */ { MAP_INSTANCE, "digital::RisingEdge 7", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_ScoringA_City, Context_RisingEdge_7), NULL, NULL, NULL, &scope_141, 1, 57 },
    /* 58 */ { MAP_INSTANCE, "digital::count_down 1", NULL, sizeof(outC_count_down_digital_int32), offsetof(outC_ScoringA_City, Context_count_down_1), NULL, NULL, NULL, &scope_142, 1, 58 }
};
const MappingScope scope_140 = {
    "City::ScoringA/ ScoringA_City",
    scope_140_entries, 59
};

const MappingEntry scope_139_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "time", NULL, sizeof(kcg_float64), offsetof(outC_WallClock_City, time), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L7), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(statusTy), offsetof(outC_WallClock_City, _L4), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_WallClock_City, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(statusTy), offsetof(outC_WallClock_City, _L1), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L12), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L13), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_WallClock_City, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_WallClock_City, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_WallClock_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 }
};
const MappingScope scope_139 = {
    "City::WallClock/ WallClock_City",
    scope_139_entries, 12
};

const MappingEntry scope_138_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "itinerary", NULL, sizeof(itiElemArr_Robot), offsetof(outC_readIti_Robot, itinerary), &_Type_itiElemArr_Robot_Utils, NULL, NULL, &scope_13, 1, 0 }
};
const MappingScope scope_138 = {
    "Robot::readIti/ readIti_Robot",
    scope_138_entries, 1
};

const MappingEntry scope_137_entries[1] = {
    /* 0 */ { MAP_OUTPUT, "paramsObst", NULL, sizeof(paramObstArr_City), offsetof(outC_readObstacles_City, paramsObst), &_Type_paramObstArr_City_Utils, NULL, NULL, &scope_134, 1, 0 }
};
const MappingScope scope_137 = {
    "City::readObstacles/ readObstacles_City",
    scope_137_entries, 1
};

const MappingEntry scope_136_entries[10] = {
    /* 0 */ { MAP_OUTPUT, "obstacle", NULL, sizeof(obstTy), offsetof(outC_OneObstacle_City, obstacle), &_Type_obstTy_Utils, NULL, NULL, &scope_8, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacle_City, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacle_City, _L10), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L9", NULL, sizeof(positionTy), offsetof(outC_OneObstacle_City, _L9), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacle_City, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacle_City, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacle_City, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacle_City, _L27), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(paramObstTy_City), offsetof(outC_OneObstacle_City, _L2), &_Type_paramObstTy_City_Utils, NULL, NULL, &scope_135, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L29", NULL, sizeof(obstTy), offsetof(outC_OneObstacle_City, _L29), &_Type_obstTy_Utils, NULL, NULL, &scope_8, 1, 9 }
};
const MappingScope scope_136 = {
    "City::OneObstacle/ OneObstacle_City",
    scope_136_entries, 10
};

const MappingEntry scope_135_entries[3] = {
    /* 0 */ { MAP_FIELD, ".pos", NULL, sizeof(positionTy), offsetof(paramObstTy_City, pos), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 0 },
    /* 1 */ { MAP_FIELD, ".since", NULL, sizeof(kcg_float64), offsetof(paramObstTy_City, since), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".till", NULL, sizeof(kcg_float64), offsetof(paramObstTy_City, till), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_135 = {
    "paramObstTy_City",
    scope_135_entries, 3
};

const MappingEntry scope_134_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(paramObstTy_City), 0, &_Type_paramObstTy_City_Utils, NULL, NULL, &scope_135, 1, 0 }
};
const MappingScope scope_134 = {
    "paramObstArr_City",
    scope_134_entries, 1
};

const MappingEntry scope_133_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(kcg_float64), 0, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_133 = {
    "array_float64_10",
    scope_133_entries, 1
};

const MappingEntry scope_132_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "obstacles", NULL, sizeof(obstArr), offsetof(outC_AllObstacles_City, obstacles), &_Type_obstArr_Utils, NULL, NULL, &scope_7, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_AllObstacles_City, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_float64_10), offsetof(outC_AllObstacles_City, _L5), &_Type_array_float64_10_Utils, NULL, NULL, &scope_133, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(obstArr), offsetof(outC_AllObstacles_City, _L6), &_Type_obstArr_Utils, NULL, NULL, &scope_7, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(paramObstArr_City), offsetof(outC_AllObstacles_City, _L7), &_Type_paramObstArr_City_Utils, NULL, NULL, &scope_134, 1, 4 },
    /* 5 */ { MAP_INSTANCE, "City::OneObstacle 1", &iter_map_10, sizeof(outC_OneObstacle_City), offsetof(outC_AllObstacles_City, Context_OneObstacle_1), NULL, NULL, NULL, &scope_136, 1, 5 },
    /* 6 */ { MAP_INSTANCE, "City::readObstacles 1", NULL, sizeof(outC_readObstacles_City), offsetof(outC_AllObstacles_City, Context_readObstacles_1), NULL, NULL, NULL, &scope_137, 1, 6 }
};
const MappingScope scope_132 = {
    "City::AllObstacles/ AllObstacles_City",
    scope_132_entries, 7
};

const MappingEntry scope_131_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Ma_Output", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, Ma_Output_Max_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L1_Max_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L2_Max_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_OneTL_City, _L3_Max_1_int32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L4_Max_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_131 = {
    "City::OneTL/ OneTL_City/math::Max 1",
    scope_131_entries, 5
};

const MappingEntry scope_130_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTyQ), offsetof(outC_OneTL_City, _L1_then_IfBlock1), &_Type_colorTyQ_Utils, &scope_126_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_130 = {
    "City::OneTL/ OneTL_CityIfBlock1:then:",
    scope_130_entries, 1
};

const MappingEntry scope_129_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(colorTyQ), offsetof(outC_OneTL_City, _L2_then_else_IfBlock1), &_Type_colorTyQ_Utils, &scope_127_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0 }
};
const MappingScope scope_129 = {
    "City::OneTL/ OneTL_CityIfBlock1:else:then:",
    scope_129_entries, 1
};

const MappingEntry scope_128_entries[1] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTyQ), offsetof(outC_OneTL_City, _L1_else_else_IfBlock1), &_Type_colorTyQ_Utils, &scope_127_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0 }
};
const MappingScope scope_128 = {
    "City::OneTL/ OneTL_CityIfBlock1:else:else:",
    scope_128_entries, 1
};

const MappingEntry scope_127_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_OneTL_City, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_126_entries[0], isActive_kcg_bool_kcg_false, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_127_entries[0], isActive_kcg_bool_kcg_false, &scope_128, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_127_entries[0], isActive_kcg_bool_kcg_true, &scope_129, 1, 2 }
};
const MappingScope scope_127 = {
    "City::OneTL/ OneTL_CityIfBlock1:else:",
    scope_127_entries, 3
};

const MappingEntry scope_126_entries[3] = {
    /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_OneTL_City, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_126_entries[0], isActive_kcg_bool_kcg_false, &scope_127, 1, 1 },
    /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_126_entries[0], isActive_kcg_bool_kcg_true, &scope_130, 1, 2 }
};
const MappingScope scope_126 = {
    "City::OneTL/ OneTL_CityIfBlock1:",
    scope_126_entries, 3
};

const MappingEntry scope_125_entries[30] = {
    /* 0 */ { MAP_OUTPUT, "trafL", NULL, sizeof(trafLTy), offsetof(outC_OneTL_City, trafL), &_Type_trafLTy_Utils, NULL, NULL, &scope_6, 1, 0 },
    /* 1 */ { MAP_LOCAL, "cpt", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, cpt), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "period", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, period), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "light", NULL, sizeof(colorTyQ), offsetof(outC_OneTL_City, light), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "tGreen", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, tGreen), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "tAmber", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, tAmber), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "tRed", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, tRed), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "tPhase", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, tPhase), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(trafLTy), offsetof(outC_OneTL_City, _L25), &_Type_trafLTy_Utils, NULL, NULL, &scope_6, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L28", NULL, sizeof(colorTyQ), offsetof(outC_OneTL_City, _L28), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L30", NULL, sizeof(paramTLTy_City), offsetof(outC_OneTL_City, _L30), &_Type_paramTLTy_City_Utils, NULL, NULL, &scope_108, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L35), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L34), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L33), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L31", NULL, sizeof(positionTy), offsetof(outC_OneTL_City, _L31), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L44), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L45), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L47), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L50), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L51), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L54), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L55), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_float64), offsetof(outC_OneTL_City, _L57), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L58), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L59), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L60), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_126, 1, 28 },
    /* 29 */ { MAP_EXPANDED, "math::Max 1", NULL, 0, 0, NULL, NULL, NULL, &scope_131, 1, 29 }
};
const MappingScope scope_125 = {
    "City::OneTL/ OneTL_City",
    scope_125_entries, 30
};

const MappingEntry scope_124_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_float64), 0, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_124 = {
    "array_float64_5",
    scope_124_entries, 1
};

const MappingEntry scope_123_entries[10] = {
    /* 0 */ { MAP_OUTPUT, "allLights", NULL, sizeof(trafLArr), offsetof(outC_TrafficLights_City, allLights), &_Type_trafLArr_Utils, NULL, NULL, &scope_5, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(trafLArr), offsetof(outC_TrafficLights_City, _L11), &_Type_trafLArr_Utils, NULL, NULL, &scope_5, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L27", NULL, sizeof(paramTLArr_City), offsetof(outC_TrafficLights_City, _L27), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_107, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L26", NULL, sizeof(mapDataTy_City), offsetof(outC_TrafficLights_City, _L26), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_106, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L28", NULL, sizeof(positionTy), offsetof(outC_TrafficLights_City, _L28), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float64), offsetof(outC_TrafficLights_City, _L29), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_TrafficLights_City, _L30), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L31", NULL, sizeof(array_float64_5), offsetof(outC_TrafficLights_City, _L31), &_Type_array_float64_5_Utils, NULL, NULL, &scope_124, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "City::OneTL 1", &iter_map_5, sizeof(outC_OneTL_City), offsetof(outC_TrafficLights_City, Context_OneTL_1), NULL, NULL, NULL, &scope_125, 1, 8 },
    /* 9 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_TrafficLights_City, Context_MapADT_1), NULL, NULL, NULL, &scope_109, 1, 9 }
};
const MappingScope scope_123 = {
    "City::TrafficLights/ TrafficLights_City",
    scope_123_entries, 10
};

const MappingEntry scope_122_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "colorRGB", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, colorRGB), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(colorTyQ), offsetof(outC_EncodeColor_Utilities, _L2), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, _L3), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, _L4), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, _L5), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, _L6), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, _L7), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 6 }
};
const MappingScope scope_122 = {
    "Utilities::EncodeColor/ EncodeColor_Utilities",
    scope_122_entries, 7
};

const MappingEntry scope_121_entries[21] = {
    /* 0 */ { MAP_OUTPUT, "lightsColor", NULL, sizeof(colorTy), offsetof(outC_TraficLightsDetection_City, lightsColor), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(trafLArr), offsetof(outC_TraficLightsDetection_City, _L2), &_Type_trafLArr_Utils, NULL, NULL, &scope_5, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L23", NULL, sizeof(colorTy), offsetof(outC_TraficLightsDetection_City, _L23), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_TraficLightsDetection_City, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int32), offsetof(outC_TraficLightsDetection_City, _L25), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int32), offsetof(outC_TraficLightsDetection_City, _L26), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_TraficLightsDetection_City, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(mapDataTy_City), offsetof(outC_TraficLightsDetection_City, _L22), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_106, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(phaseTy), offsetof(outC_TraficLightsDetection_City, _L21), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(positionTy), offsetof(outC_TraficLightsDetection_City, _L18), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_TraficLightsDetection_City, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_TraficLightsDetection_City, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(trafLTy), offsetof(outC_TraficLightsDetection_City, _L28), &_Type_trafLTy_Utils, NULL, NULL, &scope_6, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L30", NULL, sizeof(positionTy), offsetof(outC_TraficLightsDetection_City, _L30), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L32", NULL, sizeof(colorTy), offsetof(outC_TraficLightsDetection_City, _L32), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float64), offsetof(outC_TraficLightsDetection_City, _L33), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float64), offsetof(outC_TraficLightsDetection_City, _L34), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L35", NULL, sizeof(paramTLArr_City), offsetof(outC_TraficLightsDetection_City, _L35), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_107, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(colorTyQ), offsetof(outC_TraficLightsDetection_City, _L37), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_INSTANCE, "City::MapADT 2", NULL, sizeof(outC_MapADT_City), offsetof(outC_TraficLightsDetection_City, Context_MapADT_2), NULL, NULL, NULL, &scope_109, 1, 19 },
    /* 20 */ { MAP_INSTANCE, "Utilities::EncodeColor 1", NULL, sizeof(outC_EncodeColor_Utilities), offsetof(outC_TraficLightsDetection_City, Context_EncodeColor_1), NULL, NULL, NULL, &scope_122, 1, 20 }
};
const MappingScope scope_121 = {
    "City::TraficLightsDetection/ TraficLightsDetection_City",
    scope_121_entries, 21
};

const MappingEntry scope_120_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, Mi_Output_Min_3_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L21_Min_3_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L22_Min_3_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L24_Min_3_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L25_Min_3_int32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_120 = {
    "City::OneObstacleDet/ OneObstacleDet_City/math::Min 3",
    scope_120_entries, 5
};

const MappingEntry scope_119_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_119 = {
    "City::OneObstacleDet/ OneObstacleDet_City/math::Abs 1",
    scope_119_entries, 6
};

const MappingEntry scope_118_entries[29] = {
    /* 0 */ { MAP_OUTPUT, "accnew", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, accnew), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(positionTy), offsetof(outC_OneObstacleDet_City, _L3), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L21), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L23), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L30), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_OneObstacleDet_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L33), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L36", NULL, sizeof(obstTy), offsetof(outC_OneObstacleDet_City, _L36), &_Type_obstTy_Utils, NULL, NULL, &scope_8, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L38), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L37", NULL, sizeof(positionTy), offsetof(outC_OneObstacleDet_City, _L37), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L46), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L45), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L47), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L48), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_INSTANCE, "Utilities::AngleDist 1", NULL, sizeof(outC_AngleDist_Utilities), offsetof(outC_OneObstacleDet_City, Context_AngleDist_1), NULL, NULL, NULL, &scope_97, 1, 25 },
    /* 26 */ { MAP_INSTANCE, "Utilities::Normalize 1", NULL, sizeof(outC_Normalize_Utilities), offsetof(outC_OneObstacleDet_City, Context_Normalize_1), NULL, NULL, NULL, &scope_33, 1, 26 },
    /* 27 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_119, 1, 27 },
    /* 28 */ { MAP_EXPANDED, "math::Min 3", NULL, 0, 0, NULL, NULL, NULL, &scope_120, 1, 28 }
};
const MappingScope scope_118 = {
    "City::OneObstacleDet/ OneObstacleDet_City",
    scope_118_entries, 29
};

const MappingEntry scope_117_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "sonar", NULL, sizeof(kcg_int32), offsetof(outC_ObstaclesDetection_City, sonar), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(phaseTy), offsetof(outC_ObstaclesDetection_City, _L2), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(array), offsetof(outC_ObstaclesDetection_City, _L6), &_Type_array_Utils, NULL, NULL, &scope_95, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_ObstaclesDetection_City, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(obstArr), offsetof(outC_ObstaclesDetection_City, _L13), &_Type_obstArr_Utils, NULL, NULL, &scope_7, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int32), offsetof(outC_ObstaclesDetection_City, _L16), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_INSTANCE, "City::OneObstacleDet 3", &iter_fold_10, sizeof(outC_OneObstacleDet_City), offsetof(outC_ObstaclesDetection_City, Context_OneObstacleDet_3), NULL, NULL, NULL, &scope_118, 1, 6 }
};
const MappingScope scope_117 = {
    "City::ObstaclesDetection/ ObstaclesDetection_City",
    scope_117_entries, 7
};

const MappingEntry scope_116_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "roadColor", NULL, sizeof(colorTy), offsetof(outC_GroundColorDetection_City, roadColor), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_GroundColorDetection_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(positionTy), offsetof(outC_GroundColorDetection_City, _L4), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_GroundColorDetection_City, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_GroundColorDetection_City, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(mapDataTy_City), offsetof(outC_GroundColorDetection_City, _L5), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_106, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(colorTy), offsetof(outC_GroundColorDetection_City, _L8), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_GroundColorDetection_City, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_GroundColorDetection_City, _L6), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), offsetof(outC_GroundColorDetection_City, _L9), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_GroundColorDetection_City, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_GroundColorDetection_City, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_GroundColorDetection_City, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L13", NULL, sizeof(paramTLArr_City), offsetof(outC_GroundColorDetection_City, _L13), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_107, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_GroundColorDetection_City, Context_MapADT_1), NULL, NULL, NULL, &scope_109, 1, 14 }
};
const MappingScope scope_116 = {
    "City::GroundColorDetection/ GroundColorDetection_City",
    scope_116_entries, 15
};

const MappingEntry scope_115_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "SensorsData", NULL, sizeof(sensorsTy), offsetof(outC_AgregateSensors_City, SensorsData), &_Type_sensorsTy_Utils, NULL, NULL, &scope_11, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTy), offsetof(outC_AgregateSensors_City, _L1), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(colorTy), offsetof(outC_AgregateSensors_City, _L2), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_AgregateSensors_City, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(sensorsTy), offsetof(outC_AgregateSensors_City, _L5), &_Type_sensorsTy_Utils, NULL, NULL, &scope_11, 1, 4 }
};
const MappingScope scope_115 = {
    "City::AgregateSensors/ AgregateSensors_City",
    scope_115_entries, 5
};

const MappingEntry scope_114_entries[13] = {
    /* 0 */ { MAP_OUTPUT, "SensorsData", NULL, sizeof(sensorsTy), offsetof(outC_RobotSensors_City, SensorsData), &_Type_sensorsTy_Utils, NULL, NULL, &scope_11, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(sensorsTy), offsetof(outC_RobotSensors_City, _L1), &_Type_sensorsTy_Utils, NULL, NULL, &scope_11, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(phaseTy), offsetof(outC_RobotSensors_City, _L2), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(sigTy), offsetof(outC_RobotSensors_City, _L3), &_Type_sigTy_Utils, NULL, NULL, &scope_4, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(colorTy), offsetof(outC_RobotSensors_City, _L4), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_RobotSensors_City, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(colorTy), offsetof(outC_RobotSensors_City, _L6), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(obstArr), offsetof(outC_RobotSensors_City, _L8), &_Type_obstArr_Utils, NULL, NULL, &scope_7, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(trafLArr), offsetof(outC_RobotSensors_City, _L7), &_Type_trafLArr_Utils, NULL, NULL, &scope_5, 1, 8 },
    /* 9 */ { MAP_INSTANCE, "City::AgregateSensors 1", NULL, sizeof(outC_AgregateSensors_City), offsetof(outC_RobotSensors_City, Context_AgregateSensors_1), NULL, NULL, NULL, &scope_115, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "City::GroundColorDetection 1", NULL, sizeof(outC_GroundColorDetection_City), offsetof(outC_RobotSensors_City, Context_GroundColorDetection_1), NULL, NULL, NULL, &scope_116, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "City::ObstaclesDetection 1", NULL, sizeof(outC_ObstaclesDetection_City), offsetof(outC_RobotSensors_City, Context_ObstaclesDetection_1), NULL, NULL, NULL, &scope_117, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "City::TraficLightsDetection 1", NULL, sizeof(outC_TraficLightsDetection_City), offsetof(outC_RobotSensors_City, Context_TraficLightsDetection_1), NULL, NULL, NULL, &scope_121, 1, 12 }
};
const MappingScope scope_114 = {
    "City::RobotSensors/ RobotSensors_City",
    scope_114_entries, 13
};

const MappingEntry scope_113_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, Output1_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Output2", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, Output2_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L1_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L2_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L3_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_113 = {
    "City::WrongDir/ WrongDir_City/mathext::SinCosR 1",
    scope_113_entries, 5
};

const MappingEntry scope_112_entries[25] = {
    /* 0 */ { MAP_OUTPUT, "wrong", NULL, sizeof(kcg_bool), offsetof(outC_WrongDir_City, wrong), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(mapDataTy_City), offsetof(outC_WrongDir_City, _L12), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_106, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(phaseTy), offsetof(outC_WrongDir_City, _L11), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(positionTy), offsetof(outC_WrongDir_City, _L8), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L10), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTy), offsetof(outC_WrongDir_City, _L1), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_WrongDir_City, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_WrongDir_City, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_WrongDir_City, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_WrongDir_City, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_WrongDir_City, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L21), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L22), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L23", NULL, sizeof(paramTLArr_City), offsetof(outC_WrongDir_City, _L23), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_107, 1, 22 },
    /* 23 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_WrongDir_City, Context_MapADT_1), NULL, NULL, NULL, &scope_109, 1, 23 },
    /* 24 */ { MAP_EXPANDED, "mathext::SinCosR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_113, 1, 24 }
};
const MappingScope scope_112 = {
    "City::WrongDir/ WrongDir_City",
    scope_112_entries, 25
};

const MappingEntry scope_111_entries[24] = {
    /* 0 */ { MAP_OUTPUT, "lightRun", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, lightRun), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L15", NULL, sizeof(colorTy), offsetof(outC_Light_City, _L15), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int32), offsetof(outC_Light_City, _L17), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int32), offsetof(outC_Light_City, _L18), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(positionTy), offsetof(outC_Light_City, _L13), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(positionTy), offsetof(outC_Light_City, _L10), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_Light_City, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_Light_City, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(trafLArr), offsetof(outC_Light_City, _L8), &_Type_trafLArr_Utils, NULL, NULL, &scope_5, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(phaseTy), offsetof(outC_Light_City, _L6), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(mapDataTy_City), offsetof(outC_Light_City, _L5), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_106, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(trafLTy), offsetof(outC_Light_City, _L4), &_Type_trafLTy_Utils, NULL, NULL, &scope_6, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L21", NULL, sizeof(colorTyQ), offsetof(outC_Light_City, _L21), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_float64), offsetof(outC_Light_City, _L24), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_Light_City, _L25), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_float64), offsetof(outC_Light_City, _L26), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L27", NULL, sizeof(paramTLArr_City), offsetof(outC_Light_City, _L27), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_107, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L29", NULL, sizeof(colorTyQ), offsetof(outC_Light_City, _L29), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_Light_City, Context_MapADT_1), NULL, NULL, NULL, &scope_109, 1, 23 }
};
const MappingScope scope_111 = {
    "City::Light/ Light_City",
    scope_111_entries, 24
};

const MappingEntry scope_110_entries[17] = {
    /* 0 */ { MAP_OUTPUT, "speedExcess", NULL, sizeof(kcg_bool), offsetof(outC_Speed_City, speedExcess), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_Speed_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(positionTy), offsetof(outC_Speed_City, _L4), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Speed_City, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Speed_City, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_Speed_City, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Speed_City, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(mapDataTy_City), offsetof(outC_Speed_City, _L5), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_106, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(colorTy), offsetof(outC_Speed_City, _L13), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Speed_City, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_Speed_City, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int32), offsetof(outC_Speed_City, _L14), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_Speed_City, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_Speed_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_Speed_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L18", NULL, sizeof(paramTLArr_City), offsetof(outC_Speed_City, _L18), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_107, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_Speed_City, Context_MapADT_1), NULL, NULL, NULL, &scope_109, 1, 16 }
};
const MappingScope scope_110 = {
    "City::Speed/ Speed_City",
    scope_110_entries, 17
};

const MappingEntry scope_109_entries[2] = {
    /* 0 */ { MAP_OUTPUT, "MapData", NULL, sizeof(mapDataTy_City), offsetof(outC_MapADT_City, MapData), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_106, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "ParamsTL", NULL, sizeof(paramTLArr_City), offsetof(outC_MapADT_City, ParamsTL), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_107, 1, 1 }
};
const MappingScope scope_109 = {
    "City::MapADT/ MapADT_City",
    scope_109_entries, 2
};

const MappingEntry scope_108_entries[5] = {
    /* 0 */ { MAP_FIELD, ".pos", NULL, sizeof(positionTy), offsetof(paramTLTy_City, pos), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 0 },
    /* 1 */ { MAP_FIELD, ".tGreen", NULL, sizeof(kcg_int32), offsetof(paramTLTy_City, tGreen), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".tAmber", NULL, sizeof(kcg_int32), offsetof(paramTLTy_City, tAmber), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".tRed", NULL, sizeof(kcg_int32), offsetof(paramTLTy_City, tRed), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".tPhase", NULL, sizeof(kcg_int32), offsetof(paramTLTy_City, tPhase), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_108 = {
    "paramTLTy_City",
    scope_108_entries, 5
};

const MappingEntry scope_107_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(paramTLTy_City), 0, &_Type_paramTLTy_City_Utils, NULL, NULL, &scope_108, 1, 0 }
};
const MappingScope scope_107 = {
    "paramTLArr_City",
    scope_107_entries, 1
};

const MappingEntry scope_106_entries[7] = {
    /* 0 */ { MAP_FIELD, ".color", NULL, sizeof(colorTy), offsetof(mapDataTy_City, color), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 0 },
    /* 1 */ { MAP_FIELD, ".onRoad", NULL, sizeof(kcg_bool), offsetof(mapDataTy_City, onRoad), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".maxSpeed", NULL, sizeof(kcg_int32), offsetof(mapDataTy_City, maxSpeed), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".TLnumber", NULL, sizeof(kcg_int32), offsetof(mapDataTy_City, TLnumber), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".TLrequired", NULL, sizeof(kcg_bool), offsetof(mapDataTy_City, TLrequired), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_FIELD, ".dirx", NULL, sizeof(kcg_float64), offsetof(mapDataTy_City, dirx), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_FIELD, ".diry", NULL, sizeof(kcg_float64), offsetof(mapDataTy_City, diry), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_106 = {
    "mapDataTy_City",
    scope_106_entries, 7
};

const MappingEntry scope_105_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "res", NULL, sizeof(kcg_bool), offsetof(outC_ExitAux_City, res), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ExitAux_City, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_ExitAux_City, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(mapDataTy_City), offsetof(outC_ExitAux_City, _L5), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_106, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(colorTy), offsetof(outC_ExitAux_City, _L13), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_ExitAux_City, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_ExitAux_City, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int32), offsetof(outC_ExitAux_City, _L14), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_ExitAux_City, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_ExitAux_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_ExitAux_City, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(paramTLArr_City), offsetof(outC_ExitAux_City, _L19), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_107, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L20", NULL, sizeof(positionTy), offsetof(outC_ExitAux_City, _L20), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_ExitAux_City, Context_MapADT_1), NULL, NULL, NULL, &scope_109, 1, 13 }
};
const MappingScope scope_105 = {
    "City::ExitAux/ ExitAux_City",
    scope_105_entries, 14
};

const MappingEntry scope_104_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(phaseTy), 0, &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 0 }
};
const MappingScope scope_104 = {
    "_2_array",
    scope_104_entries, 1
};

const MappingEntry scope_103_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(positionTy), 0, &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 0 }
};
const MappingScope scope_103 = {
    "_3_array",
    scope_103_entries, 1
};

const MappingEntry scope_102_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_int32), 0, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_102 = {
    "array_int32_2",
    scope_102_entries, 1
};

const MappingEntry scope_101_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "exitRoad", NULL, sizeof(kcg_bool), offsetof(outC_Exit_City, exitRoad), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Exit_City, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_Exit_City, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_Exit_City, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L22", NULL, sizeof(array_int32_2), offsetof(outC_Exit_City, _L22), &_Type_array_int32_2_Utils, NULL, NULL, &scope_102, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L23", NULL, sizeof(phaseTy), offsetof(outC_Exit_City, _L23), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L24", NULL, sizeof(_3_array), offsetof(outC_Exit_City, _L24), &_Type__3_array_Utils, NULL, NULL, &scope_103, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L27", NULL, sizeof(_2_array), offsetof(outC_Exit_City, _L27), &_Type__2_array_Utils, NULL, NULL, &scope_104, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L28", NULL, sizeof(array_float64_2_2), offsetof(outC_Exit_City, _L28), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_22, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L29", NULL, sizeof(_2_array), offsetof(outC_Exit_City, _L29), &_Type__2_array_Utils, NULL, NULL, &scope_104, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "City::ExitAux 1", &iter_fold_2, sizeof(outC_ExitAux_City), offsetof(outC_Exit_City, Context_ExitAux_1), NULL, NULL, NULL, &scope_105, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Robot::CarGeometry 1", &iter_map_2, sizeof(outC_CarGeometry_Robot), offsetof(outC_Exit_City, Context_CarGeometry_1), NULL, NULL, NULL, &scope_21, 1, 11 }
};
const MappingScope scope_101 = {
    "City::Exit/ Exit_City",
    scope_101_entries, 12
};

const MappingEntry scope_100_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, Output1_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Output2", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, Output2_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L1_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L2_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L3_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_100 = {
    "City::CollisionAux/ CollisionAux_City/mathext::SinCosR 1",
    scope_100_entries, 5
};

const MappingEntry scope_99_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_99 = {
    "City::CollisionAux/ CollisionAux_City/math::Abs 1",
    scope_99_entries, 6
};

const MappingEntry scope_98_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "HypotR_O", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, HypotR_O_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L3_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L4_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L5_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L6_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_98 = {
    "mathext::HypotR/ HypotR_mathext_float64",
    scope_98_entries, 7
};

const MappingEntry scope_97_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "angle", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, angle), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "dist", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, dist), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(positionTy), offsetof(outC_AngleDist_Utilities, _L1), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(positionTy), offsetof(outC_AngleDist_Utilities, _L2), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "mathext::HypotR 1", NULL, sizeof(outC_HypotR_mathext_float64), offsetof(outC_AngleDist_Utilities, Context_HypotR_1), NULL, NULL, NULL, &scope_98, 1, 14 }
};
const MappingScope scope_97 = {
    "Utilities::AngleDist/ AngleDist_Utilities",
    scope_97_entries, 15
};

const MappingEntry scope_96_entries[43] = {
    /* 0 */ { MAP_OUTPUT, "accnew", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, accnew), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "angle", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, angle), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "dist", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, dist), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(phaseTy), offsetof(outC_CollisionAux_City, _L2), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(obstTy), offsetof(outC_CollisionAux_City, _L3), &_Type_obstTy_Utils, NULL, NULL, &scope_8, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(positionTy), offsetof(outC_CollisionAux_City, _L5), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(positionTy), offsetof(outC_CollisionAux_City, _L11), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L23), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L25), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L28), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L27), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L29), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L30), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L32), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L31), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L33), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L34), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L36), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L37), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L38), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L40), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L42), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L43), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_INSTANCE, "Utilities::AngleDist 1", NULL, sizeof(outC_AngleDist_Utilities), offsetof(outC_CollisionAux_City, Context_AngleDist_1), NULL, NULL, NULL, &scope_97, 1, 39 },
    /* 40 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_99, 1, 40 },
    /* 41 */ { MAP_INSTANCE, "Utilities::Normalize 1", NULL, sizeof(outC_Normalize_Utilities), offsetof(outC_CollisionAux_City, Context_Normalize_1), NULL, NULL, NULL, &scope_33, 1, 41 },
    /* 42 */ { MAP_EXPANDED, "mathext::SinCosR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_100, 1, 42 }
};
const MappingScope scope_96 = {
    "City::CollisionAux/ CollisionAux_City",
    scope_96_entries, 43
};

const MappingEntry scope_95_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(phaseTy), 0, &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 0 }
};
const MappingScope scope_95 = {
    "array",
    scope_95_entries, 1
};

const MappingEntry scope_94_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "collisionEvent", NULL, sizeof(kcg_bool), offsetof(outC_Collision_City, collisionEvent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_Collision_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Collision_City, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(obstArr), offsetof(outC_Collision_City, _L3), &_Type_obstArr_Utils, NULL, NULL, &scope_7, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Collision_City, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(array), offsetof(outC_Collision_City, _L5), &_Type_array_Utils, NULL, NULL, &scope_95, 1, 5 },
    /* 6 */ { MAP_INSTANCE, "City::CollisionAux 1", &iter_fold_10, sizeof(outC_CollisionAux_City), offsetof(outC_Collision_City, Context_CollisionAux_1), NULL, NULL, NULL, &scope_96, 1, 6 }
};
const MappingScope scope_94 = {
    "City::Collision/ Collision_City",
    scope_94_entries, 7
};

const MappingEntry scope_93_entries[11] = {
    /* 0 */ { MAP_OUTPUT, "events", NULL, sizeof(eventTy), offsetof(outC_AgregateEvents_City, events), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Interrupt", NULL, sizeof(interTy), offsetof(outC_AgregateEvents_City, Interrupt), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_AgregateEvents_City, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_AgregateEvents_City, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_AgregateEvents_City, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_AgregateEvents_City, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(interTy), offsetof(outC_AgregateEvents_City, _L10), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(interTy), offsetof(outC_AgregateEvents_City, _L11), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(interTy), offsetof(outC_AgregateEvents_City, _L12), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_AgregateEvents_City, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L14", NULL, sizeof(eventTy), offsetof(outC_AgregateEvents_City, _L14), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 10 }
};
const MappingScope scope_93 = {
    "City::AgregateEvents/ AgregateEvents_City",
    scope_93_entries, 11
};

const MappingEntry scope_92_entries[19] = {
    /* 0 */ { MAP_OUTPUT, "Interrupt", NULL, sizeof(interTy), offsetof(outC_EventDetection_City, Interrupt), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Events", NULL, sizeof(eventTy), offsetof(outC_EventDetection_City, Events), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(sigTy), offsetof(outC_EventDetection_City, _L1), &_Type_sigTy_Utils, NULL, NULL, &scope_4, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(phaseTy), offsetof(outC_EventDetection_City, _L2), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(interTy), offsetof(outC_EventDetection_City, _L4), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(eventTy), offsetof(outC_EventDetection_City, _L3), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_EventDetection_City, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_EventDetection_City, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_EventDetection_City, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_EventDetection_City, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_EventDetection_City, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(obstArr), offsetof(outC_EventDetection_City, _L11), &_Type_obstArr_Utils, NULL, NULL, &scope_7, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L10", NULL, sizeof(trafLArr), offsetof(outC_EventDetection_City, _L10), &_Type_trafLArr_Utils, NULL, NULL, &scope_5, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "City::AgregateEvents 1", NULL, sizeof(outC_AgregateEvents_City), offsetof(outC_EventDetection_City, Context_AgregateEvents_1), NULL, NULL, NULL, &scope_93, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "City::Collision 1", NULL, sizeof(outC_Collision_City), offsetof(outC_EventDetection_City, Context_Collision_1), NULL, NULL, NULL, &scope_94, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "City::Exit 1", NULL, sizeof(outC_Exit_City), offsetof(outC_EventDetection_City, Context_Exit_1), NULL, NULL, NULL, &scope_101, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "City::Speed 1", NULL, sizeof(outC_Speed_City), offsetof(outC_EventDetection_City, Context_Speed_1), NULL, NULL, NULL, &scope_110, 1, 16 },
    /* 17 */ { MAP_INSTANCE, "City::Light 1", NULL, sizeof(outC_Light_City), offsetof(outC_EventDetection_City, Context_Light_1), NULL, NULL, NULL, &scope_111, 1, 17 },
    /* 18 */ { MAP_INSTANCE, "City::WrongDir 1", NULL, sizeof(outC_WrongDir_City), offsetof(outC_EventDetection_City, Context_WrongDir_1), NULL, NULL, NULL, &scope_112, 1, 18 }
};
const MappingScope scope_92 = {
    "City::EventDetection/ EventDetection_City",
    scope_92_entries, 19
};

const MappingEntry scope_91_entries[16] = {
    /* 0 */ { MAP_OUTPUT, "Signalization", NULL, sizeof(sigTy), offsetof(outC_SmartCityControl_City, Signalization), &_Type_sigTy_Utils, NULL, NULL, &scope_4, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Interrupt", NULL, sizeof(interTy), offsetof(outC_SmartCityControl_City, Interrupt), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "SensorsData", NULL, sizeof(sensorsTy), offsetof(outC_SmartCityControl_City, SensorsData), &_Type_sensorsTy_Utils, NULL, NULL, &scope_11, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "Events", NULL, sizeof(eventTy), offsetof(outC_SmartCityControl_City, Events), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_SmartCityControl_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(eventTy), offsetof(outC_SmartCityControl_City, _L3), &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(interTy), offsetof(outC_SmartCityControl_City, _L2), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(sensorsTy), offsetof(outC_SmartCityControl_City, _L4), &_Type_sensorsTy_Utils, NULL, NULL, &scope_11, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(trafLArr), offsetof(outC_SmartCityControl_City, _L11), &_Type_trafLArr_Utils, NULL, NULL, &scope_5, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_SmartCityControl_City, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L16", NULL, sizeof(obstArr), offsetof(outC_SmartCityControl_City, _L16), &_Type_obstArr_Utils, NULL, NULL, &scope_7, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L17", NULL, sizeof(sigTy), offsetof(outC_SmartCityControl_City, _L17), &_Type_sigTy_Utils, NULL, NULL, &scope_4, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "City::EventDetection 1", NULL, sizeof(outC_EventDetection_City), offsetof(outC_SmartCityControl_City, Context_EventDetection_1), NULL, NULL, NULL, &scope_92, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "City::RobotSensors 1", NULL, sizeof(outC_RobotSensors_City), offsetof(outC_SmartCityControl_City, Context_RobotSensors_1), NULL, NULL, NULL, &scope_114, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "City::TrafficLights 1", NULL, sizeof(outC_TrafficLights_City), offsetof(outC_SmartCityControl_City, Context_TrafficLights_1), NULL, NULL, NULL, &scope_123, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "City::AllObstacles 1", NULL, sizeof(outC_AllObstacles_City), offsetof(outC_SmartCityControl_City, Context_AllObstacles_1), NULL, NULL, NULL, &scope_132, 1, 15 }
};
const MappingScope scope_91 = {
    "City::SmartCityControl/ SmartCityControl_City",
    scope_91_entries, 16
};

const MappingEntry scope_90_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(statusTy), offsetof(outC_Driver_Robot, _L1_Stopped_Robot), &_Type_statusTy_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Stopped_Robot, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, _L5_Stopped_Robot), &_Type_wheelsTy_Robot_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Stopped_Robot, &scope_16, 1, 1 }
};
const MappingScope scope_90 = {
    "Robot::Driver/ Driver_RobotRobot:Stopped:",
    scope_90_entries, 2
};

const MappingEntry scope_89_entries[2] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(statusTy), offsetof(outC_Driver_Robot, _L1_Arrived_Robot), &_Type_statusTy_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Arrived_Robot, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, _L11_Arrived_Robot), &_Type_wheelsTy_Robot_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Arrived_Robot, &scope_16, 1, 1 }
};
const MappingScope scope_89 = {
    "Robot::Driver/ Driver_RobotRobot:Arrived:",
    scope_89_entries, 2
};

const MappingEntry scope_88_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "isRed", NULL, sizeof(kcg_bool), offsetof(outC_FrontDitect_Robot, isRed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "isOrange", NULL, sizeof(kcg_bool), offsetof(outC_FrontDitect_Robot, isOrange), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "isGreen", NULL, sizeof(kcg_bool), offsetof(outC_FrontDitect_Robot, isGreen), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "amber", NULL, sizeof(kcg_bool), offsetof(outC_FrontDitect_Robot, amber), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTy), offsetof(outC_FrontDitect_Robot, _L1), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_FrontDitect_Robot, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_FrontDitect_Robot, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_FrontDitect_Robot, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(colorTy), offsetof(outC_FrontDitect_Robot, _L6), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(colorTy), offsetof(outC_FrontDitect_Robot, _L7), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(colorTy), offsetof(outC_FrontDitect_Robot, _L8), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), offsetof(outC_FrontDitect_Robot, _L9), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_FrontDitect_Robot, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_FrontDitect_Robot, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 13 }
};
const MappingScope scope_88 = {
    "Robot::FrontDitect/ FrontDitect_Robot",
    scope_88_entries, 14
};

const MappingEntry scope_87_entries[20] = {
    /* 0 */ { MAP_OUTPUT, "endOfTurn", NULL, sizeof(kcg_bool), offsetof(outC_afterTurn_Robot, endOfTurn), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_afterTurn_Robot, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_afterTurn_Robot, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_afterTurn_Robot, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_afterTurn_Robot, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_afterTurn_Robot, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_afterTurn_Robot, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_afterTurn_Robot, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_afterTurn_Robot, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_afterTurn_Robot, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 }
};
const MappingScope scope_87 = {
    "Robot::afterTurn/ afterTurn_Robot",
    scope_87_entries, 20
};

const MappingEntry scope_86_entries[18] = {
    /* 0 */ { MAP_OUTPUT, "endOfTurn", NULL, sizeof(kcg_bool), offsetof(outC_TimerT_Robot, endOfTurn), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_TimerT_Robot, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L16", NULL, sizeof(actionTy_Robot), offsetof(outC_TimerT_Robot, _L16), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float64), offsetof(outC_TimerT_Robot, _L32), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_TimerT_Robot, _L31), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_TimerT_Robot, _L30), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_TimerT_Robot, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_TimerT_Robot, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_TimerT_Robot, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_TimerT_Robot, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(actionTy_Robot), offsetof(outC_TimerT_Robot, _L24), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_TimerT_Robot, _L23), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float64), offsetof(outC_TimerT_Robot, _L22), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_TimerT_Robot, _L21), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_TimerT_Robot, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_TimerT_Robot, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_TimerT_Robot, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_TimerT_Robot, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 }
};
const MappingScope scope_86 = {
    "Robot::TimerT/ TimerT_Robot",
    scope_86_entries, 18
};

const MappingEntry scope_85_entries[17] = {
    /* 0 */ { MAP_OUTPUT, "time", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, time), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "gama", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, gama), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_calculTimeTurn_Robot, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L21), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L22), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L23), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_float64), offsetof(outC_calculTimeTurn_Robot, _L24), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16 }
};
const MappingScope scope_85 = {
    "Robot::calculTimeTurn/ calculTimeTurn_Robot",
    scope_85_entries, 17
};

const MappingEntry scope_84_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "endTurn", NULL, sizeof(kcg_bool), offsetof(outC_TurnAction_Robot, endTurn), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "nearRoad", NULL, sizeof(kcg_bool), offsetof(outC_TurnAction_Robot, nearRoad), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_TurnAction_Robot, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_TurnAction_Robot, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_TurnAction_Robot, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_TurnAction_Robot, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_TurnAction_Robot, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(actionTy_Robot), offsetof(outC_TurnAction_Robot, _L6), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_TurnAction_Robot, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_TurnAction_Robot, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_TurnAction_Robot, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Robot::calculTimeTurn 1", NULL, sizeof(outC_calculTimeTurn_Robot), offsetof(outC_TurnAction_Robot, Context_calculTimeTurn_1), NULL, NULL, NULL, &scope_85, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "Robot::TimerT 1", NULL, sizeof(outC_TimerT_Robot), offsetof(outC_TurnAction_Robot, Context_TimerT_1), NULL, NULL, NULL, &scope_86, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "Robot::afterTurn 1", NULL, sizeof(outC_afterTurn_Robot), offsetof(outC_TurnAction_Robot, Context_afterTurn_1), NULL, NULL, NULL, &scope_87, 1, 13 }
};
const MappingScope scope_84 = {
    "Robot::TurnAction/ TurnAction_Robot",
    scope_84_entries, 14
};

const MappingEntry scope_83_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "FE_Output", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, FE_Output), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_FallingEdge_digital, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 }
};
const MappingScope scope_83 = {
    "digital::FallingEdge/ FallingEdge_digital",
    scope_83_entries, 6
};

const MappingEntry scope_82_entries[24] = {
    /* 0 */ { MAP_OUTPUT, "action", NULL, sizeof(actionTy_Robot), offsetof(outC_ColorDetect_Robot, action), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "endRed", NULL, sizeof(kcg_bool), offsetof(outC_ColorDetect_Robot, endRed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "endGreen", NULL, sizeof(kcg_bool), offsetof(outC_ColorDetect_Robot, endGreen), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "value", NULL, sizeof(kcg_float64), offsetof(outC_ColorDetect_Robot, value), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(colorTy), offsetof(outC_ColorDetect_Robot, _L4), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int32), offsetof(outC_ColorDetect_Robot, _L20), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int32), offsetof(outC_ColorDetect_Robot, _L21), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), offsetof(outC_ColorDetect_Robot, _L32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int32), offsetof(outC_ColorDetect_Robot, _L33), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int32), offsetof(outC_ColorDetect_Robot, _L34), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L35", NULL, sizeof(colorTy), offsetof(outC_ColorDetect_Robot, _L35), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_ColorDetect_Robot, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L38", NULL, sizeof(itiElement_Robot), offsetof(outC_ColorDetect_Robot, _L38), &_Type_itiElement_Robot_Utils, NULL, NULL, &scope_14, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L39", NULL, sizeof(itiElemArr_Robot), offsetof(outC_ColorDetect_Robot, _L39), &_Type_itiElemArr_Robot_Utils, NULL, NULL, &scope_13, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_ColorDetect_Robot, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), offsetof(outC_ColorDetect_Robot, _L41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), offsetof(outC_ColorDetect_Robot, _L42), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_bool), offsetof(outC_ColorDetect_Robot, _L46), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_ColorDetect_Robot, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L43", NULL, sizeof(colorTy), offsetof(outC_ColorDetect_Robot, _L43), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L48", NULL, sizeof(actionTy_Robot), offsetof(outC_ColorDetect_Robot, _L48), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_float64), offsetof(outC_ColorDetect_Robot, _L47), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_INSTANCE, "digital::FallingEdge 1", NULL, sizeof(outC_FallingEdge_digital), offsetof(outC_ColorDetect_Robot, Context_FallingEdge_1), NULL, NULL, NULL, &scope_83, 1, 22 },
    /* 23 */ { MAP_INSTANCE, "digital::FallingEdge 2", NULL, sizeof(outC_FallingEdge_digital), offsetof(outC_ColorDetect_Robot, Context_FallingEdge_2), NULL, NULL, NULL, &scope_83, 1, 23 }
};
const MappingScope scope_82 = {
    "Robot::ColorDetect/ ColorDetect_Robot",
    scope_82_entries, 24
};

const MappingEntry scope_81_entries[10] = {
    /* 0 */ { MAP_OUTPUT, "isturn", NULL, sizeof(kcg_bool), offsetof(outC_isAction_Robot, isturn), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "isGo", NULL, sizeof(kcg_bool), offsetof(outC_isAction_Robot, isGo), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "isStop", NULL, sizeof(kcg_bool), offsetof(outC_isAction_Robot, isStop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(actionTy_Robot), offsetof(outC_isAction_Robot, _L15), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_isAction_Robot, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_isAction_Robot, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_isAction_Robot, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(actionTy_Robot), offsetof(outC_isAction_Robot, _L19), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(actionTy_Robot), offsetof(outC_isAction_Robot, _L20), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(actionTy_Robot), offsetof(outC_isAction_Robot, _L21), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 9 }
};
const MappingScope scope_81 = {
    "Robot::isAction/ isAction_Robot",
    scope_81_entries, 10
};

const MappingEntry scope_80_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_AfterTurn_Stop_2_AfterTurn_SM1, NULL, 1, 0 }
};
const MappingScope scope_80 = {
    "Robot::ia/ ia_RobotSM1:AfterTurn:<2",
    scope_80_entries, 1
};

const MappingEntry scope_79_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_AfterTurn_Go_1_AfterTurn_SM1, NULL, 1, 0 }
};
const MappingScope scope_79 = {
    "Robot::ia/ ia_RobotSM1:AfterTurn:<1",
    scope_79_entries, 1
};

const MappingEntry scope_78_entries[5] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_AfterTurn_Go_1_AfterTurn_SM1, &scope_79, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_AfterTurn_Stop_2_AfterTurn_SM1, &scope_80, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ia_Robot, _L1_AfterTurn_SM1), &_Type_wheelsTy_Robot_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_AfterTurn_SM1, &scope_16, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_ia_Robot, _L2_AfterTurn_SM1), &_Type_kcg_float64_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_AfterTurn_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_INSTANCE, "Robot::GoAHead 9", NULL, sizeof(outC_GoAHead_Robot), offsetof(outC_ia_Robot, Context_GoAHead_9), NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_AfterTurn_SM1, &scope_77, 1, 4 }
};
const MappingScope scope_78 = {
    "Robot::ia/ ia_RobotSM1:AfterTurn:",
    scope_78_entries, 5
};

const MappingEntry scope_77_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "WheelsSpd", NULL, sizeof(wheelsTy_Robot), offsetof(outC_GoAHead_Robot, WheelsSpd), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_GoAHead_Robot, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_GoAHead_Robot, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_GoAHead_Robot, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_GoAHead_Robot, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_GoAHead_Robot, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_GoAHead_Robot, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_GoAHead_Robot, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(wheelsTy_Robot), offsetof(outC_GoAHead_Robot, _L8), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_GoAHead_Robot, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float64), offsetof(outC_GoAHead_Robot, _L10), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), offsetof(outC_GoAHead_Robot, _L11), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_GoAHead_Robot, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "Robot::vitesseInterval 1", NULL, sizeof(outC_vitesseInterval_Robot), offsetof(outC_GoAHead_Robot, Context_vitesseInterval_1), NULL, NULL, NULL, &scope_62, 1, 13 }
};
const MappingScope scope_77 = {
    "Robot::GoAHead/ GoAHead_Robot",
    scope_77_entries, 14
};

const MappingEntry scope_76_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_GoAHead_light_4_GoAHead_SM1, NULL, 1, 0 }
};
const MappingScope scope_76 = {
    "Robot::ia/ ia_RobotSM1:GoAHead:<4",
    scope_76_entries, 1
};

const MappingEntry scope_75_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_GoAHead_AfterTurn_3_GoAHead_SM1, NULL, 1, 0 }
};
const MappingScope scope_75 = {
    "Robot::ia/ ia_RobotSM1:GoAHead:<3",
    scope_75_entries, 1
};

const MappingEntry scope_74_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_GoAHead_Stop_2_GoAHead_SM1, NULL, 1, 0 }
};
const MappingScope scope_74 = {
    "Robot::ia/ ia_RobotSM1:GoAHead:<2",
    scope_74_entries, 1
};

const MappingEntry scope_73_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_GoAHead_turn_1_GoAHead_SM1, NULL, 1, 0 }
};
const MappingScope scope_73 = {
    "Robot::ia/ ia_RobotSM1:GoAHead:<1",
    scope_73_entries, 1
};

const MappingEntry scope_72_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_GoAHead_turn_1_GoAHead_SM1, &scope_73, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_GoAHead_Stop_2_GoAHead_SM1, &scope_74, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_GoAHead_AfterTurn_3_GoAHead_SM1, &scope_75, 1, 2 },
    /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_GoAHead_light_4_GoAHead_SM1, &scope_76, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ia_Robot, _L2_GoAHead_SM1), &_Type_wheelsTy_Robot_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_GoAHead_SM1, &scope_16, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_ia_Robot, _L3_GoAHead_SM1), &_Type_kcg_float64_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_GoAHead_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_INSTANCE, "Robot::GoAHead 1", NULL, sizeof(outC_GoAHead_Robot), offsetof(outC_ia_Robot, Context_GoAHead_1), NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_GoAHead_SM1, &scope_77, 1, 6 }
};
const MappingScope scope_72 = {
    "Robot::ia/ ia_RobotSM1:GoAHead:",
    scope_72_entries, 7
};

const MappingEntry scope_71_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_Amber_Go_1_Amber_SM1, NULL, 1, 0 }
};
const MappingScope scope_71 = {
    "Robot::ia/ ia_RobotSM1:Amber:<1",
    scope_71_entries, 1
};

const MappingEntry scope_70_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_Amber_Go_1_Amber_SM1, &scope_71, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_ia_Robot, _L4_Amber_SM1), &_Type_kcg_float64_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Amber_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ia_Robot, _L3_Amber_SM1), &_Type_wheelsTy_Robot_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Amber_SM1, &scope_16, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Robot::StopAction 4", NULL, sizeof(outC_StopAction_Robot), offsetof(outC_ia_Robot, Context_StopAction_4), NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Amber_SM1, &scope_67, 1, 3 }
};
const MappingScope scope_70 = {
    "Robot::ia/ ia_RobotSM1:Amber:",
    scope_70_entries, 4
};

const MappingEntry scope_69_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_light_Go_1_light_SM1, NULL, 1, 0 }
};
const MappingScope scope_69 = {
    "Robot::ia/ ia_RobotSM1:light:<1",
    scope_69_entries, 1
};

const MappingEntry scope_68_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_light_Go_1_light_SM1, &scope_69, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_ia_Robot, _L2_light_SM1), &_Type_kcg_float64_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_light_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ia_Robot, _L1_light_SM1), &_Type_wheelsTy_Robot_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_light_SM1, &scope_16, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Robot::StopAction 2", NULL, sizeof(outC_StopAction_Robot), offsetof(outC_ia_Robot, Context_StopAction_2), NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_light_SM1, &scope_67, 1, 3 }
};
const MappingScope scope_68 = {
    "Robot::ia/ ia_RobotSM1:light:",
    scope_68_entries, 4
};

const MappingEntry scope_67_entries[3] = {
    /* 0 */ { MAP_OUTPUT, "wheelsSpd", NULL, sizeof(wheelsTy_Robot), offsetof(outC_StopAction_Robot, wheelsSpd), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(wheelsTy_Robot), offsetof(outC_StopAction_Robot, _L2), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_StopAction_Robot, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_67 = {
    "Robot::StopAction/ StopAction_Robot",
    scope_67_entries, 3
};

const MappingEntry scope_66_entries[4] = {
    /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ia_Robot, _L1_Stop_SM1), &_Type_wheelsTy_Robot_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Stop_SM1, &scope_16, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_ia_Robot, _L2_Stop_SM1), &_Type_kcg_float64_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Stop_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L3_Stop_SM1), &_Type_kcg_bool_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Stop_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Robot::StopAction 1", NULL, sizeof(outC_StopAction_Robot), offsetof(outC_ia_Robot, Context_StopAction_1), NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Stop_SM1, &scope_67, 1, 3 }
};
const MappingScope scope_66 = {
    "Robot::ia/ ia_RobotSM1:Stop:",
    scope_66_entries, 4
};

const MappingEntry scope_65_entries[11] = {
    /* 0 */ { MAP_OUTPUT, "RotationS", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Turn_Robot, RotationS), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Turn_Robot, _L1), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Turn_Robot, _L2), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Turn_Robot, _L3), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Turn_Robot, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Turn_Robot, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Turn_Robot, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Turn_Robot, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_Turn_Robot, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_Turn_Robot, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_Turn_Robot, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 }
};
const MappingScope scope_65 = {
    "Robot::Turn/ Turn_Robot",
    scope_65_entries, 11
};

const MappingEntry scope_64_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_turn_AfterTurn_1_turn_SM1, NULL, 1, 0 }
};
const MappingScope scope_64 = {
    "Robot::ia/ ia_RobotSM1:turn:<1",
    scope_64_entries, 1
};

const MappingEntry scope_63_entries[4] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_turn_AfterTurn_1_turn_SM1, &scope_64, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ia_Robot, _L1_turn_SM1), &_Type_wheelsTy_Robot_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_turn_SM1, &scope_16, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_ia_Robot, _L4_turn_SM1), &_Type_kcg_float64_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_turn_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_INSTANCE, "Robot::Turn 1", NULL, sizeof(outC_Turn_Robot), offsetof(outC_ia_Robot, Context_Turn_1), NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_turn_SM1, &scope_65, 1, 3 }
};
const MappingScope scope_63 = {
    "Robot::ia/ ia_RobotSM1:turn:",
    scope_63_entries, 4
};

const MappingEntry scope_62_entries[11] = {
    /* 0 */ { MAP_OUTPUT, "spdOut", NULL, sizeof(kcg_float64), offsetof(outC_vitesseInterval_Robot, spdOut), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_vitesseInterval_Robot, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_vitesseInterval_Robot, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_vitesseInterval_Robot, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_vitesseInterval_Robot, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_vitesseInterval_Robot, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_vitesseInterval_Robot, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_vitesseInterval_Robot, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_vitesseInterval_Robot, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_vitesseInterval_Robot, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_vitesseInterval_Robot, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 }
};
const MappingScope scope_62 = {
    "Robot::vitesseInterval/ vitesseInterval_Robot",
    scope_62_entries, 11
};

const MappingEntry scope_61_entries[10] = {
    /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_float64), offsetof(outC_ErrorCalculate_Robot, Error), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTy), offsetof(outC_ErrorCalculate_Robot, _L1), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_uint8), offsetof(outC_ErrorCalculate_Robot, _L7), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_uint8), offsetof(outC_ErrorCalculate_Robot, _L8), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_uint8), offsetof(outC_ErrorCalculate_Robot, _L9), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_ErrorCalculate_Robot, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_ErrorCalculate_Robot, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_ErrorCalculate_Robot, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_ErrorCalculate_Robot, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_ErrorCalculate_Robot, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 }
};
const MappingScope scope_61 = {
    "Robot::ErrorCalculate/ ErrorCalculate_Robot",
    scope_61_entries, 10
};

const MappingEntry scope_60_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "deriveRsult", NULL, sizeof(kcg_float64), offsetof(outC_DerivatOp_Robot, deriveRsult), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_DerivatOp_Robot, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_DerivatOp_Robot, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_DerivatOp_Robot, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_DerivatOp_Robot, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_DerivatOp_Robot, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_DerivatOp_Robot, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 }
};
const MappingScope scope_60 = {
    "Robot::DerivatOp/ DerivatOp_Robot",
    scope_60_entries, 7
};

const MappingEntry scope_59_entries[10] = {
    /* 0 */ { MAP_OUTPUT, "IntegRsult", NULL, sizeof(kcg_float64), offsetof(outC_IntegralOp_Robot, IntegRsult), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_IntegralOp_Robot, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_IntegralOp_Robot, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_IntegralOp_Robot, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_IntegralOp_Robot, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_IntegralOp_Robot, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_IntegralOp_Robot, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_IntegralOp_Robot, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_IntegralOp_Robot, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_IntegralOp_Robot, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 }
};
const MappingScope scope_59 = {
    "Robot::IntegralOp/ IntegralOp_Robot",
    scope_59_entries, 10
};

const MappingEntry scope_58_entries[14] = {
    /* 0 */ { MAP_OUTPUT, "Correction", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, Correction), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_PID_Robot, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_INSTANCE, "Robot::IntegralOp 1", NULL, sizeof(outC_IntegralOp_Robot), offsetof(outC_PID_Robot, Context_IntegralOp_1), NULL, NULL, NULL, &scope_59, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "Robot::DerivatOp 1", NULL, sizeof(outC_DerivatOp_Robot), offsetof(outC_PID_Robot, Context_DerivatOp_1), NULL, NULL, NULL, &scope_60, 1, 13 }
};
const MappingScope scope_58 = {
    "Robot::PID/ PID_Robot",
    scope_58_entries, 14
};

const MappingEntry scope_57_entries[28] = {
    /* 0 */ { MAP_OUTPUT, "WheelsSpd", NULL, sizeof(wheelsTy_Robot), offsetof(outC_GoAction_Robot, WheelsSpd), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 0 },
    /* 1 */ { MAP_LOCAL, "spd", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, spd), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(colorTy), offsetof(outC_GoAction_Robot, _L2), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(wheelsTy_Robot), offsetof(outC_GoAction_Robot, _L8), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L31), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L32), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L33), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L34), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L35), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L36), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L38), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L37), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L39), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L40), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L41), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L53), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_bool), offsetof(outC_GoAction_Robot, _L51), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L50), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_float64), offsetof(outC_GoAction_Robot, _L54), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 22 },
    /* 23 */ { MAP_INSTANCE, "Robot::PID 1", NULL, sizeof(outC_PID_Robot), offsetof(outC_GoAction_Robot, Context_PID_1), NULL, NULL, NULL, &scope_58, 1, 23 },
    /* 24 */ { MAP_INSTANCE, "Robot::ErrorCalculate 1", NULL, sizeof(outC_ErrorCalculate_Robot), offsetof(outC_GoAction_Robot, Context_ErrorCalculate_1), NULL, NULL, NULL, &scope_61, 1, 24 },
    /* 25 */ { MAP_INSTANCE, "Robot::vitesseInterval 1", NULL, sizeof(outC_vitesseInterval_Robot), offsetof(outC_GoAction_Robot, Context_vitesseInterval_1), NULL, NULL, NULL, &scope_62, 1, 25 },
    /* 26 */ { MAP_INSTANCE, "Robot::vitesseInterval 2", NULL, sizeof(outC_vitesseInterval_Robot), offsetof(outC_GoAction_Robot, Context_vitesseInterval_2), NULL, NULL, NULL, &scope_62, 1, 26 },
    /* 27 */ { MAP_INSTANCE, "Robot::vitesseInterval 3", NULL, sizeof(outC_vitesseInterval_Robot), offsetof(outC_GoAction_Robot, Context_vitesseInterval_3), NULL, NULL, NULL, &scope_62, 1, 27 }
};
const MappingScope scope_57 = {
    "Robot::GoAction/ GoAction_Robot",
    scope_57_entries, 28
};

const MappingEntry scope_56_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_Go_Stop_4_Go_SM1, NULL, 1, 0 }
};
const MappingScope scope_56 = {
    "Robot::ia/ ia_RobotSM1:Go:<4",
    scope_56_entries, 1
};

const MappingEntry scope_55_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_Go_turn_3_Go_SM1, NULL, 1, 0 }
};
const MappingScope scope_55 = {
    "Robot::ia/ ia_RobotSM1:Go:<3",
    scope_55_entries, 1
};

const MappingEntry scope_54_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_Go_GoAHead_2_Go_SM1, NULL, 1, 0 }
};
const MappingScope scope_54 = {
    "Robot::ia/ ia_RobotSM1:Go:<2",
    scope_54_entries, 1
};

const MappingEntry scope_53_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_Go_Amber_1_Go_SM1, NULL, 1, 0 }
};
const MappingScope scope_53 = {
    "Robot::ia/ ia_RobotSM1:Go:<1",
    scope_53_entries, 1
};

const MappingEntry scope_52_entries[9] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_Go_Amber_1_Go_SM1, &scope_53, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_Go_GoAHead_2_Go_SM1, &scope_54, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_Go_turn_3_Go_SM1, &scope_55, 1, 2 },
    /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_Go_Stop_4_Go_SM1, &scope_56, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L14_Go_SM1), &_Type_kcg_bool_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Go_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ia_Robot, _L17_Go_SM1), &_Type_wheelsTy_Robot_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Go_SM1, &scope_16, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_ia_Robot, _L16_Go_SM1), &_Type_kcg_float64_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Go_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(colorTy), offsetof(outC_ia_Robot, _L15_Go_SM1), &_Type_colorTy_Utils, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Go_SM1, &scope_12, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "Robot::GoAction 6", NULL, sizeof(outC_GoAction_Robot), offsetof(outC_ia_Robot, Context_GoAction_6), NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Go_SM1, &scope_57, 1, 8 }
};
const MappingScope scope_52 = {
    "Robot::ia/ ia_RobotSM1:Go:",
    scope_52_entries, 9
};

const MappingEntry scope_51_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_depart_Stop_3_depart_SM1, NULL, 1, 0 }
};
const MappingScope scope_51 = {
    "Robot::ia/ ia_RobotSM1:depart:<3",
    scope_51_entries, 1
};

const MappingEntry scope_50_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_depart_turn_2_depart_SM1, NULL, 1, 0 }
};
const MappingScope scope_50 = {
    "Robot::ia/ ia_RobotSM1:depart:<2",
    scope_50_entries, 1
};

const MappingEntry scope_49_entries[1] = {
    /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_depart_Go_1_depart_SM1, NULL, 1, 0 }
};
const MappingScope scope_49 = {
    "Robot::ia/ ia_RobotSM1:depart:<1",
    scope_49_entries, 1
};

const MappingEntry scope_48_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_depart_Go_1_depart_SM1, &scope_49, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_depart_turn_2_depart_SM1, &scope_50, 1, 1 },
    /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_47_entries[5], isActive_SSM_TR_SM1_SSM_TR_depart_Stop_3_depart_SM1, &scope_51, 1, 2 }
};
const MappingScope scope_48 = {
    "Robot::ia/ ia_RobotSM1:depart:",
    scope_48_entries, 3
};

const MappingEntry scope_47_entries[15] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_ia_Robot, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_ia_Robot, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_ia_Robot, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_ia_Robot, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_ia_Robot, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "depart:", NULL, 0, 0, NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_depart_SM1, &scope_48, 1, 7 },
    /* 8 */ { MAP_STATE, "Go:", NULL, 0, 0, NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Go_SM1, &scope_52, 1, 8 },
    /* 9 */ { MAP_STATE, "turn:", NULL, 0, 0, NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_turn_SM1, &scope_63, 1, 9 },
    /* 10 */ { MAP_STATE, "Stop:", NULL, 0, 0, NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Stop_SM1, &scope_66, 1, 10 },
    /* 11 */ { MAP_STATE, "light:", NULL, 0, 0, NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_light_SM1, &scope_68, 1, 11 },
    /* 12 */ { MAP_STATE, "Amber:", NULL, 0, 0, NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_Amber_SM1, &scope_70, 1, 12 },
    /* 13 */ { MAP_STATE, "GoAHead:", NULL, 0, 0, NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_GoAHead_SM1, &scope_72, 1, 13 },
    /* 14 */ { MAP_STATE, "AfterTurn:", NULL, 0, 0, NULL, &scope_47_entries[0], isActive_SSM_ST_SM1_SSM_st_AfterTurn_SM1, &scope_78, 1, 14 }
};
const MappingScope scope_47 = {
    "Robot::ia/ ia_RobotSM1:",
    scope_47_entries, 15
};

const MappingEntry scope_46_entries[63] = {
    /* 0 */ { MAP_OUTPUT, "Rotatioalspeed", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ia_Robot, Rotatioalspeed), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "ARRIVING", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, ARRIVING), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "value", NULL, sizeof(kcg_float64), offsetof(outC_ia_Robot, value), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "ARRIVINGV", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, ARRIVINGV), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "Rotationalspeed", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ia_Robot, Rotationalspeed), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 4 },
    /* 5 */ { MAP_LOCAL, "action", NULL, sizeof(actionTy_Robot), offsetof(outC_ia_Robot, action), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "roadColor", NULL, sizeof(colorTy), offsetof(outC_ia_Robot, roadColor), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 6 },
    /* 7 */ { MAP_LOCAL, "isGo", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, isGo), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "isTurn", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, isTurn), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "isStop", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, isStop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "endTurn", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, endTurn), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "light", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, light), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "frontcolor", NULL, sizeof(colorTy), offsetof(outC_ia_Robot, frontcolor), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 12 },
    /* 13 */ { MAP_LOCAL, "sonar", NULL, sizeof(kcg_int32), offsetof(outC_ia_Robot, sonar), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "isGOrNR", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, isGOrNR), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "amber", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, amber), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "notAmber", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, notAmber), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "beginGOrR", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, beginGOrR), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "endGreen", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, endGreen), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "nearRoad", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, nearRoad), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L14", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ia_Robot, _L14), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L8", NULL, sizeof(colorTy), offsetof(outC_ia_Robot, _L8), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(colorTy), offsetof(outC_ia_Robot, _L9), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_ia_Robot, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L4", NULL, sizeof(sensorsTy), offsetof(outC_ia_Robot, _L4), &_Type_sensorsTy_Utils, NULL, NULL, &scope_11, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L18", NULL, sizeof(actionTy_Robot), offsetof(outC_ia_Robot, _L18), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L5", NULL, sizeof(colorTy), offsetof(outC_ia_Robot, _L5), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L12", NULL, sizeof(itiElemArr_Robot), offsetof(outC_ia_Robot, _L12), &_Type_itiElemArr_Robot_Utils, NULL, NULL, &scope_13, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L13", NULL, sizeof(actionTy_Robot), offsetof(outC_ia_Robot, _L13), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float64), offsetof(outC_ia_Robot, _L22), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 33 },
    /* 34 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L21), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34 },
    /* 35 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35 },
    /* 36 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36 },
    /* 37 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37 },
    /* 38 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38 },
    /* 39 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39 },
    /* 40 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40 },
    /* 41 */ { MAP_LOCAL, "_L31", NULL, sizeof(colorTy), offsetof(outC_ia_Robot, _L31), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 41 },
    /* 42 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), offsetof(outC_ia_Robot, _L32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 42 },
    /* 43 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 43 },
    /* 44 */ { MAP_LOCAL, "_L45", NULL, sizeof(colorTy), offsetof(outC_ia_Robot, _L45), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 44 },
    /* 45 */ { MAP_LOCAL, "_L44", NULL, sizeof(colorTy), offsetof(outC_ia_Robot, _L44), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 45 },
    /* 46 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 46 },
    /* 47 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47 },
    /* 48 */ { MAP_LOCAL, "_L46", NULL, sizeof(colorTy), offsetof(outC_ia_Robot, _L46), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 48 },
    /* 49 */ { MAP_LOCAL, "_L109", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L109), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 49 },
    /* 50 */ { MAP_LOCAL, "_L110", NULL, sizeof(kcg_float64), offsetof(outC_ia_Robot, _L110), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 50 },
    /* 51 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51 },
    /* 52 */ { MAP_LOCAL, "_L117", NULL, sizeof(actionTy_Robot), offsetof(outC_ia_Robot, _L117), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 52 },
    /* 53 */ { MAP_LOCAL, "_L118", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L118), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 53 },
    /* 54 */ { MAP_LOCAL, "_L119", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L119), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54 },
    /* 55 */ { MAP_LOCAL, "_L120", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L120), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55 },
    /* 56 */ { MAP_LOCAL, "_L121", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L121), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 56 },
    /* 57 */ { MAP_LOCAL, "_L122", NULL, sizeof(kcg_bool), offsetof(outC_ia_Robot, _L122), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 57 },
    /* 58 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_47, 1, 58 },
    /* 59 */ { MAP_INSTANCE, "Robot::isAction 1", NULL, sizeof(outC_isAction_Robot), offsetof(outC_ia_Robot, Context_isAction_1), NULL, NULL, NULL, &scope_81, 1, 59 },
    /* 60 */ { MAP_INSTANCE, "Robot::ColorDetect 1", NULL, sizeof(outC_ColorDetect_Robot), offsetof(outC_ia_Robot, Context_ColorDetect_1), NULL, NULL, NULL, &scope_82, 1, 60 },
    /* 61 */ { MAP_INSTANCE, "Robot::TurnAction 4", NULL, sizeof(outC_TurnAction_Robot), offsetof(outC_ia_Robot, Context_TurnAction_4), NULL, NULL, NULL, &scope_84, 1, 61 },
    /* 62 */ { MAP_INSTANCE, "Robot::FrontDitect 1", NULL, sizeof(outC_FrontDitect_Robot), offsetof(outC_ia_Robot, Context_FrontDitect_1), NULL, NULL, NULL, &scope_88, 1, 62 }
};
const MappingScope scope_46 = {
    "Robot::ia/ ia_Robot",
    scope_46_entries, 63
};

const MappingEntry scope_45_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_40_entries[6], isActive_SSM_TR_Robot_SSM_TR_Running_Arrived_2_Running_Robot, NULL, 1, 0 }
};
const MappingScope scope_45 = {
    "Robot::Driver/ Driver_RobotRobot:Running:<2",
    scope_45_entries, 1
};

const MappingEntry scope_44_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_40_entries[6], isActive_SSM_TR_Robot_SSM_TR_Running_Stopped_1_Running_Robot, NULL, 1, 0 }
};
const MappingScope scope_44 = {
    "Robot::Driver/ Driver_RobotRobot:Running:<1",
    scope_44_entries, 1
};

const MappingEntry scope_43_entries[9] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_40_entries[6], isActive_SSM_TR_Robot_SSM_TR_Running_Stopped_1_Running_Robot, &scope_44, 1, 0 },
    /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_40_entries[6], isActive_SSM_TR_Robot_SSM_TR_Running_Arrived_2_Running_Robot, &scope_45, 1, 1 },
    /* 2 */ { MAP_LOCAL, "arriving", NULL, sizeof(kcg_bool), offsetof(outC_Driver_Robot, arriving_Running_Robot), &_Type_kcg_bool_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(statusTy), offsetof(outC_Driver_Robot, _L3_Running_Robot), &_Type_statusTy_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(sensorsTy), offsetof(outC_Driver_Robot, _L10_Running_Robot), &_Type_sensorsTy_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, &scope_11, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(itiElemArr_Robot), offsetof(outC_Driver_Robot, _L12_Running_Robot), &_Type_itiElemArr_Robot_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, &scope_13, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Driver_Robot, _L18_Running_Robot), &_Type_kcg_bool_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, _L17_Running_Robot), &_Type_wheelsTy_Robot_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, &scope_16, 1, 7 },
    /* 8 */ { MAP_INSTANCE, "Robot::ia 1", NULL, sizeof(outC_ia_Robot), offsetof(outC_Driver_Robot, Context_ia_1), NULL, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, &scope_46, 1, 8 }
};
const MappingScope scope_43 = {
    "Robot::Driver/ Driver_RobotRobot:Running:",
    scope_43_entries, 9
};

const MappingEntry scope_42_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_40_entries[6], isActive_SSM_TR_Robot_SSM_TR_Preparing_Running_1_Preparing_Robot, NULL, 1, 0 }
};
const MappingScope scope_42 = {
    "Robot::Driver/ Driver_RobotRobot:Preparing:<1",
    scope_42_entries, 1
};

const MappingEntry scope_41_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_40_entries[6], isActive_SSM_TR_Robot_SSM_TR_Preparing_Running_1_Preparing_Robot, &scope_42, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(statusTy), offsetof(outC_Driver_Robot, _L1_Preparing_Robot), &_Type_statusTy_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Preparing_Robot, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, _L11_Preparing_Robot), &_Type_wheelsTy_Robot_Utils, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Preparing_Robot, &scope_16, 1, 2 }
};
const MappingScope scope_41 = {
    "Robot::Driver/ Driver_RobotRobot:Preparing:",
    scope_41_entries, 3
};

const MappingEntry scope_40_entries[11] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_Robot), offsetof(outC_Driver_Robot, Robot_state_act), &_Type_SSM_ST_Robot_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_Driver_Robot, Robot_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_Robot), offsetof(outC_Driver_Robot, Robot_state_nxt), &_Type_SSM_ST_Robot_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_Driver_Robot, Robot_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_Robot), offsetof(outC_Driver_Robot, Robot_state_sel), &_Type_SSM_ST_Robot_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_Robot), offsetof(outC_Driver_Robot, Robot_fired_strong), &_Type_SSM_TR_Robot_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_Robot), offsetof(outC_Driver_Robot, Robot_fired), &_Type_SSM_TR_Robot_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "Preparing:", NULL, 0, 0, NULL, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Preparing_Robot, &scope_41, 1, 7 },
    /* 8 */ { MAP_STATE, "Running:", NULL, 0, 0, NULL, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, &scope_43, 1, 8 },
    /* 9 */ { MAP_STATE, "Arrived:", NULL, 0, 0, NULL, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Arrived_Robot, &scope_89, 1, 9 },
    /* 10 */ { MAP_STATE, "Stopped:", NULL, 0, 0, NULL, &scope_40_entries[0], isActive_SSM_ST_Robot_SSM_st_Stopped_Robot, &scope_90, 1, 10 }
};
const MappingScope scope_40 = {
    "Robot::Driver/ Driver_RobotRobot:",
    scope_40_entries, 11
};

const MappingEntry scope_39_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "RotationalSpeed", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, RotationalSpeed), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "RobotStatus", NULL, sizeof(statusTy), offsetof(outC_Driver_Robot, RobotStatus), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "zero", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, zero), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, _L13), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_Driver_Robot, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_AUTOMATON, "Robot:", NULL, 0, 0, NULL, NULL, NULL, &scope_40, 1, 5 }
};
const MappingScope scope_39 = {
    "Robot::Driver/ Driver_Robot",
    scope_39_entries, 6
};

const MappingEntry scope_38_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, Mi_Output_Min_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L21_Min_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L22_Min_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L24_Min_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Bound_Utilities, _L25_Min_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_38 = {
    "Utilities::Bound/ Bound_Utilities/math::Min 1",
    scope_38_entries, 5
};

const MappingEntry scope_37_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Ma_Output", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, Ma_Output_Max_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L1_Max_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L2_Max_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Bound_Utilities, _L3_Max_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L4_Max_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_37 = {
    "Utilities::Bound/ Bound_Utilities/math::Max 1",
    scope_37_entries, 5
};

const MappingEntry scope_36_entries[8] = {
    /* 0 */ { MAP_OUTPUT, "xb", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, xb), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_EXPANDED, "math::Max 1", NULL, 0, 0, NULL, NULL, NULL, &scope_37, 1, 6 },
    /* 7 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 7 }
};
const MappingScope scope_36 = {
    "Utilities::Bound/ Bound_Utilities",
    scope_36_entries, 8
};

const MappingEntry scope_35_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, Output1_SinCosR_16_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Output2", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, Output2_SinCosR_16_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L1_SinCosR_16_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L2_SinCosR_16_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L3_SinCosR_16_float64), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 4 }
};
const MappingScope scope_35 = {
    "Robot::PhysicalModel/ PhysicalModel_RobotSM1:on:/mathext::SinCosR 16",
    scope_35_entries, 5
};

const MappingEntry scope_34_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "RF_Output", NULL, sizeof(kcg_int32), offsetof(outC_RoundFloor_math_float64, RF_Output_float64), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_RoundFloor_math_float64, _L1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_RoundFloor_math_float64, _L24_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_RoundFloor_math_float64, _L25_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int32), offsetof(outC_RoundFloor_math_float64, _L26_float64), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_RoundFloor_math_float64, _L30_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_RoundFloor_math_float64, _L31_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), offsetof(outC_RoundFloor_math_float64, _L32_float64), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int32), offsetof(outC_RoundFloor_math_float64, _L33_float64), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int32), offsetof(outC_RoundFloor_math_float64, _L38_float64), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_float64), offsetof(outC_RoundFloor_math_float64, _L41_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_RoundFloor_math_float64, _L43_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11 }
};
const MappingScope scope_34 = {
    "math::RoundFloor/ RoundFloor_math_float64",
    scope_34_entries, 12
};

const MappingEntry scope_33_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "normal", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, normal), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_Normalize_Utilities, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L10), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "math::RoundFloor 1", NULL, sizeof(outC_RoundFloor_math_float64), offsetof(outC_Normalize_Utilities, Context_RoundFloor_1), NULL, NULL, NULL, &scope_34, 1, 11 }
};
const MappingScope scope_33 = {
    "Utilities::Normalize/ Normalize_Utilities",
    scope_33_entries, 12
};

const MappingEntry scope_32_entries[10] = {
    /* 0 */ { MAP_OUTPUT, "result", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, result), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "s", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, s), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9 }
};
const MappingScope scope_32 = {
    "Utilities::Integrator/ Integrator_Utilities",
    scope_32_entries, 10
};

const MappingEntry scope_31_entries[42] = {
    /* 0 */ { MAP_LOCAL, "alpha", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, alpha_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 0 },
    /* 1 */ { MAP_LOCAL, "v", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, v_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "co", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, co_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "si", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, si_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "vLeft", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, vLeft_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "vRight", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, vRight_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L13_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L9_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L7_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(positionTy), offsetof(outC_PhysicalModel_Robot, _L6_on_SM1), &_Type_positionTy_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_3, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L5_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L4_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L2_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L21_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L20_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L19_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L18_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L26_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L27_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L25_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L28_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L36_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L35", NULL, sizeof(wheelsTy_Robot), offsetof(outC_PhysicalModel_Robot, _L35_on_SM1), &_Type_wheelsTy_Robot_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_16, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L34_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L33_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L32_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L30_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L31_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L29_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L45", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, _L45_on_SM1), &_Type_phaseTy_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_2, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L46_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 30 },
    /* 31 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L47_on_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 31 },
    /* 32 */ { MAP_LOCAL, "_L48", NULL, sizeof(positionTy), offsetof(outC_PhysicalModel_Robot, _L48_on_SM1), &_Type_positionTy_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_3, 1, 32 },
    /* 33 */ { MAP_LOCAL, "_L49", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, _L49_on_SM1), &_Type_phaseTy_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_2, 1, 33 },
    /* 34 */ { MAP_INSTANCE, "Utilities::Integrator 5", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Integrator_5), NULL, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_32, 1, 34 },
    /* 35 */ { MAP_INSTANCE, "Utilities::Integrator 4", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Integrator_4), NULL, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_32, 1, 35 },
    /* 36 */ { MAP_INSTANCE, "Utilities::Normalize 3", NULL, sizeof(outC_Normalize_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Normalize_3), NULL, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_33, 1, 36 },
    /* 37 */ { MAP_INSTANCE, "Utilities::Integrator 7", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Integrator_7), NULL, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_32, 1, 37 },
    /* 38 */ { MAP_EXPANDED, "mathext::SinCosR 16", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 38 },
    /* 39 */ { MAP_INSTANCE, "Utilities::Bound 4", NULL, sizeof(outC_Bound_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Bound_4), NULL, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_36, 1, 39 },
    /* 40 */ { MAP_INSTANCE, "Utilities::Bound 3", NULL, sizeof(outC_Bound_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Bound_3), NULL, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_36, 1, 40 },
    /* 41 */ { MAP_INSTANCE, "Robot::CarGeometry 2", NULL, sizeof(outC_CarGeometry_Robot), offsetof(outC_PhysicalModel_Robot, Context_CarGeometry_2), NULL, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_21, 1, 41 }
};
const MappingScope scope_31 = {
    "Robot::PhysicalModel/ PhysicalModel_RobotSM1:on:",
    scope_31_entries, 42
};

const MappingEntry scope_30_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "pos", NULL, sizeof(positionTy), offsetof(outC_vec2pos_Utilities, pos), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(positionTy), offsetof(outC_vec2pos_Utilities, _L2), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_vec2pos_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_vec2pos_Utilities, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 }
};
const MappingScope scope_30 = {
    "Utilities::vec2pos/ vec2pos_Utilities",
    scope_30_entries, 4
};

const MappingEntry scope_29_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "vec", NULL, sizeof(array_float64_2), offsetof(outC_pos2vec_Utilities, vec), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(positionTy), offsetof(outC_pos2vec_Utilities, _L1), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_pos2vec_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_pos2vec_Utilities, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_float64_2), offsetof(outC_pos2vec_Utilities, _L6), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 4 }
};
const MappingScope scope_29 = {
    "Utilities::pos2vec/ pos2vec_Utilities",
    scope_29_entries, 5
};

const MappingEntry scope_28_entries[4] = {
    /* 0 */ { MAP_OUTPUT, "W", NULL, sizeof(array_float64_2), offsetof(outC_VectAdd_vect_float64_2, W_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_float64_2), offsetof(outC_VectAdd_vect_float64_2, _L1_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_float64_2), offsetof(outC_VectAdd_vect_float64_2, _L2_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_float64_2), offsetof(outC_VectAdd_vect_float64_2, _L3_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 3 }
};
const MappingScope scope_28 = {
    "vect::VectAdd/ VectAdd_vect_float64_2",
    scope_28_entries, 4
};

const MappingEntry scope_27_entries[5] = {
    /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L2_ScalProd_1_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L3_ScalProd_1_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_MatVectProd_vect_float64_2_2, _L4_ScalProd_1_float64_2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_MatVectProd_vect_float64_2_2, _L6_ScalProd_1_float64_2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L7_ScalProd_1_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 4 }
};
const MappingScope scope_27 = {
    "vect::MatVectProd/ MatVectProd_vect_float64_2_2/vect::ScalProd 1",
    scope_27_entries, 5
};

const MappingEntry scope_26_entries[6] = {
    /* 0 */ { MAP_OUTPUT, "R", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, R_float64_2_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_float64_2_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L1_float64_2_2), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_22, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L2_float64_2_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_float64_2_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L4_float64_2_2), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_22, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L7_float64_2_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 4 },
    /* 5 */ { MAP_EXPANDED, "vect::ScalProd 1", &iter_map_2, 0, 0, NULL, NULL, NULL, &scope_27, 1, 5 }
};
const MappingScope scope_26 = {
    "vect::MatVectProd/ MatVectProd_vect_float64_2_2",
    scope_26_entries, 6
};

const MappingEntry scope_25_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, Output1_SinCosR_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Output2", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, Output2_SinCosR_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L1_SinCosR_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L2_SinCosR_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L3_SinCosR_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_25 = {
    "Utilities::RotMatrix/ RotMatrix_Utilities/mathext::SinCosR 2",
    scope_25_entries, 5
};

const MappingEntry scope_24_entries[10] = {
    /* 0 */ { MAP_OUTPUT, "res", NULL, sizeof(array_float64_2_2), offsetof(outC_RotMatrix_Utilities, res), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_22, 1, 0 },
    /* 1 */ { MAP_LOCAL, "si", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, si), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "co", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, co), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(array_float64_2_2), offsetof(outC_RotMatrix_Utilities, _L19), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_22, 1, 8 },
    /* 9 */ { MAP_EXPANDED, "mathext::SinCosR 2", NULL, 0, 0, NULL, NULL, NULL, &scope_25, 1, 9 }
};
const MappingScope scope_24 = {
    "Utilities::RotMatrix/ RotMatrix_Utilities",
    scope_24_entries, 10
};

const MappingEntry scope_23_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_float64), 0, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_23 = {
    "array_float64_2",
    scope_23_entries, 1
};

const MappingEntry scope_22_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(array_float64_2), 0, &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 0 }
};
const MappingScope scope_22 = {
    "array_float64_2_2",
    scope_22_entries, 1
};

const MappingEntry scope_21_entries[18] = {
    /* 0 */ { MAP_OUTPUT, "newpos", NULL, sizeof(positionTy), offsetof(outC_CarGeometry_Robot, newpos), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "newphase", NULL, sizeof(phaseTy), offsetof(outC_CarGeometry_Robot, newphase), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_CarGeometry_Robot, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(positionTy), offsetof(outC_CarGeometry_Robot, _L18), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_CarGeometry_Robot, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_CarGeometry_Robot, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L22", NULL, sizeof(array_float64_2_2), offsetof(outC_CarGeometry_Robot, _L22), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_22, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(array_float64_2), offsetof(outC_CarGeometry_Robot, _L24), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(array_float64_2), offsetof(outC_CarGeometry_Robot, _L25), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(array_float64_2), offsetof(outC_CarGeometry_Robot, _L26), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L27", NULL, sizeof(positionTy), offsetof(outC_CarGeometry_Robot, _L27), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L43", NULL, sizeof(array_float64_2), offsetof(outC_CarGeometry_Robot, _L43), &_Type_array_float64_2_Utils, NULL, NULL, &scope_23, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L45", NULL, sizeof(phaseTy), offsetof(outC_CarGeometry_Robot, _L45), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 12 },
    /* 13 */ { MAP_INSTANCE, "Utilities::RotMatrix 1", NULL, sizeof(outC_RotMatrix_Utilities), offsetof(outC_CarGeometry_Robot, Context_RotMatrix_1), NULL, NULL, NULL, &scope_24, 1, 13 },
    /* 14 */ { MAP_INSTANCE, "vect::MatVectProd 1", NULL, sizeof(outC_MatVectProd_vect_float64_2_2), offsetof(outC_CarGeometry_Robot, Context_MatVectProd_1), NULL, NULL, NULL, &scope_26, 1, 14 },
    /* 15 */ { MAP_INSTANCE, "vect::VectAdd 1", NULL, sizeof(outC_VectAdd_vect_float64_2), offsetof(outC_CarGeometry_Robot, Context_VectAdd_1), NULL, NULL, NULL, &scope_28, 1, 15 },
    /* 16 */ { MAP_INSTANCE, "Utilities::pos2vec 1", NULL, sizeof(outC_pos2vec_Utilities), offsetof(outC_CarGeometry_Robot, Context_pos2vec_1), NULL, NULL, NULL, &scope_29, 1, 16 },
    /* 17 */ { MAP_INSTANCE, "Utilities::vec2pos 1", NULL, sizeof(outC_vec2pos_Utilities), offsetof(outC_CarGeometry_Robot, Context_vec2pos_1), NULL, NULL, NULL, &scope_30, 1, 17 }
};
const MappingScope scope_21 = {
    "Robot::CarGeometry/ CarGeometry_Robot",
    scope_21_entries, 18
};

const MappingEntry scope_20_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_18_entries[6], isActive__5_SSM_TR_SM1_SSM_TR_positionning_on_1_positionning_SM1, NULL, 1, 0 }
};
const MappingScope scope_20 = {
    "Robot::PhysicalModel/ PhysicalModel_RobotSM1:positionning:<1",
    scope_20_entries, 1
};

const MappingEntry scope_19_entries[12] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_18_entries[6], isActive__5_SSM_TR_SM1_SSM_TR_positionning_on_1_positionning_SM1, &scope_20, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L61", NULL, sizeof(positionTy), offsetof(outC_PhysicalModel_Robot, _L61_positionning_SM1), &_Type_positionTy_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_3, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L62_positionning_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L63_positionning_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L55", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, _L55_positionning_SM1), &_Type_phaseTy_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_2, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L66", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, _L66_positionning_SM1), &_Type_phaseTy_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_2, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L67_positionning_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L68", NULL, sizeof(positionTy), offsetof(outC_PhysicalModel_Robot, _L68_positionning_SM1), &_Type_positionTy_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_3, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L70_positionning_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L69_positionning_SM1), &_Type_kcg_float64_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L71", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, _L71_positionning_SM1), &_Type_phaseTy_Utils, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_2, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Robot::CarGeometry 1", NULL, sizeof(outC_CarGeometry_Robot), offsetof(outC_PhysicalModel_Robot, Context_CarGeometry_1), NULL, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_21, 1, 11 }
};
const MappingScope scope_19 = {
    "Robot::PhysicalModel/ PhysicalModel_RobotSM1:positionning:",
    scope_19_entries, 12
};

const MappingEntry scope_18_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_PhysicalModel_Robot, SM1_state_act), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_PhysicalModel_Robot, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_PhysicalModel_Robot, SM1_state_nxt), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_PhysicalModel_Robot, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(_4_SSM_ST_SM1), offsetof(outC_PhysicalModel_Robot, SM1_state_sel), &_Type__4_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(_5_SSM_TR_SM1), offsetof(outC_PhysicalModel_Robot, SM1_fired_strong), &_Type__5_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(_5_SSM_TR_SM1), offsetof(outC_PhysicalModel_Robot, SM1_fired), &_Type__5_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "positionning:", NULL, 0, 0, NULL, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_19, 1, 7 },
    /* 8 */ { MAP_STATE, "on:", NULL, 0, 0, NULL, &scope_18_entries[0], isActive__4_SSM_ST_SM1_SSM_st_on_SM1, &scope_31, 1, 8 }
};
const MappingScope scope_18 = {
    "Robot::PhysicalModel/ PhysicalModel_RobotSM1:",
    scope_18_entries, 9
};

const MappingEntry scope_17_entries[5] = {
    /* 0 */ { MAP_OUTPUT, "RobotPhase", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, RobotPhase), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_LOCAL, "y0", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, y0), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "x0", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, x0), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "alpha0", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, alpha0), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 4 }
};
const MappingScope scope_17 = {
    "Robot::PhysicalModel/ PhysicalModel_Robot",
    scope_17_entries, 5
};

const MappingEntry scope_16_entries[2] = {
    /* 0 */ { MAP_FIELD, ".left", NULL, sizeof(kcg_float64), offsetof(wheelsTy_Robot, left), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".right", NULL, sizeof(kcg_float64), offsetof(wheelsTy_Robot, right), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_16 = {
    "wheelsTy_Robot",
    scope_16_entries, 2
};

const MappingEntry scope_15_entries[12] = {
    /* 0 */ { MAP_OUTPUT, "RobotPhase", NULL, sizeof(phaseTy), offsetof(outC_IndividualRobotControl_Robot, RobotPhase), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "RobotStatus", NULL, sizeof(statusTy), offsetof(outC_IndividualRobotControl_Robot, RobotStatus), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L6", NULL, sizeof(phaseTy), offsetof(outC_IndividualRobotControl_Robot, _L6), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L7", NULL, sizeof(sensorsTy), offsetof(outC_IndividualRobotControl_Robot, _L7), &_Type_sensorsTy_Utils, NULL, NULL, &scope_11, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(interTy), offsetof(outC_IndividualRobotControl_Robot, _L8), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(phaseTy), offsetof(outC_IndividualRobotControl_Robot, _L9), &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_IndividualRobotControl_Robot, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(itiElemArr_Robot), offsetof(outC_IndividualRobotControl_Robot, _L11), &_Type_itiElemArr_Robot_Utils, NULL, NULL, &scope_13, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(statusTy), offsetof(outC_IndividualRobotControl_Robot, _L5), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(wheelsTy_Robot), offsetof(outC_IndividualRobotControl_Robot, _L4), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_16, 1, 9 },
    /* 10 */ { MAP_INSTANCE, "Robot::PhysicalModel 1", NULL, sizeof(outC_PhysicalModel_Robot), offsetof(outC_IndividualRobotControl_Robot, Context_PhysicalModel_1), NULL, NULL, NULL, &scope_17, 1, 10 },
    /* 11 */ { MAP_INSTANCE, "Robot::Driver 1", NULL, sizeof(outC_Driver_Robot), offsetof(outC_IndividualRobotControl_Robot, Context_Driver_1), NULL, NULL, NULL, &scope_39, 1, 11 }
};
const MappingScope scope_15 = {
    "Robot::IndividualRobotControl/ IndividualRobotControl_Robot",
    scope_15_entries, 12
};

const MappingEntry scope_14_entries[2] = {
    /* 0 */ { MAP_FIELD, ".action", NULL, sizeof(actionTy_Robot), offsetof(itiElement_Robot, action), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".param", NULL, sizeof(kcg_float64), offsetof(itiElement_Robot, param), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_14 = {
    "itiElement_Robot",
    scope_14_entries, 2
};

const MappingEntry scope_13_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(itiElement_Robot), 0, &_Type_itiElement_Robot_Utils, NULL, NULL, &scope_14, 1, 0 }
};
const MappingScope scope_13 = {
    "itiElemArr_Robot",
    scope_13_entries, 1
};

const MappingEntry scope_12_entries[3] = {
    /* 0 */ { MAP_FIELD, ".red", NULL, sizeof(kcg_uint8), offsetof(colorTy, red), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".green", NULL, sizeof(kcg_uint8), offsetof(colorTy, green), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".blue", NULL, sizeof(kcg_uint8), offsetof(colorTy, blue), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_12 = {
    "colorTy",
    scope_12_entries, 3
};

const MappingEntry scope_11_entries[3] = {
    /* 0 */ { MAP_FIELD, ".roadColor", NULL, sizeof(colorTy), offsetof(sensorsTy, roadColor), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 0 },
    /* 1 */ { MAP_FIELD, ".frontColor", NULL, sizeof(colorTy), offsetof(sensorsTy, frontColor), &_Type_colorTy_Utils, NULL, NULL, &scope_12, 1, 1 },
    /* 2 */ { MAP_FIELD, ".sonar", NULL, sizeof(kcg_int32), offsetof(sensorsTy, sonar), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_11 = {
    "sensorsTy",
    scope_11_entries, 3
};

const MappingEntry scope_10_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_255, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0 }
};
const MappingScope scope_10 = {
    "array_char_255",
    scope_10_entries, 1
};

const MappingEntry scope_9_entries[5] = {
    /* 0 */ { MAP_FIELD, ".lightRun", NULL, sizeof(kcg_bool), offsetof(eventTy, lightRun), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".speedExcess", NULL, sizeof(kcg_bool), offsetof(eventTy, speedExcess), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".exitRoad", NULL, sizeof(kcg_bool), offsetof(eventTy, exitRoad), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_FIELD, ".collisionEvent", NULL, sizeof(kcg_bool), offsetof(eventTy, collisionEvent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_FIELD, ".dirEvent", NULL, sizeof(kcg_bool), offsetof(eventTy, dirEvent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4 }
};
const MappingScope scope_9 = {
    "eventTy",
    scope_9_entries, 5
};

const MappingEntry scope_8_entries[2] = {
    /* 0 */ { MAP_FIELD, ".position", NULL, sizeof(positionTy), offsetof(obstTy, position), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 0 },
    /* 1 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(obstTy, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_8 = {
    "obstTy",
    scope_8_entries, 2
};

const MappingEntry scope_7_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(obstTy), 0, &_Type_obstTy_Utils, NULL, NULL, &scope_8, 1, 0 }
};
const MappingScope scope_7 = {
    "obstArr",
    scope_7_entries, 1
};

const MappingEntry scope_6_entries[2] = {
    /* 0 */ { MAP_FIELD, ".position", NULL, sizeof(positionTy), offsetof(trafLTy, position), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 0 },
    /* 1 */ { MAP_FIELD, ".light", NULL, sizeof(colorTyQ), offsetof(trafLTy, light), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_6 = {
    "trafLTy",
    scope_6_entries, 2
};

const MappingEntry scope_5_entries[1] = {
    /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(trafLTy), 0, &_Type_trafLTy_Utils, NULL, NULL, &scope_6, 1, 0 }
};
const MappingScope scope_5 = {
    "trafLArr",
    scope_5_entries, 1
};

const MappingEntry scope_4_entries[2] = {
    /* 0 */ { MAP_FIELD, ".TLights", NULL, sizeof(trafLArr), offsetof(sigTy, TLights), &_Type_trafLArr_Utils, NULL, NULL, &scope_5, 1, 0 },
    /* 1 */ { MAP_FIELD, ".obstacles", NULL, sizeof(obstArr), offsetof(sigTy, obstacles), &_Type_obstArr_Utils, NULL, NULL, &scope_7, 1, 1 }
};
const MappingScope scope_4 = {
    "sigTy",
    scope_4_entries, 2
};

const MappingEntry scope_3_entries[2] = {
    /* 0 */ { MAP_FIELD, ".x", NULL, sizeof(kcg_float64), offsetof(positionTy, x), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_FIELD, ".y", NULL, sizeof(kcg_float64), offsetof(positionTy, y), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 }
};
const MappingScope scope_3 = {
    "positionTy",
    scope_3_entries, 2
};

const MappingEntry scope_2_entries[3] = {
    /* 0 */ { MAP_FIELD, ".position", NULL, sizeof(positionTy), offsetof(phaseTy, position), &_Type_positionTy_Utils, NULL, NULL, &scope_3, 1, 0 },
    /* 1 */ { MAP_FIELD, ".velocity", NULL, sizeof(kcg_float64), offsetof(phaseTy, velocity), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_FIELD, ".heading", NULL, sizeof(kcg_float64), offsetof(phaseTy, heading), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2 }
};
const MappingScope scope_2 = {
    "phaseTy",
    scope_2_entries, 3
};

const MappingEntry scope_1_entries[38] = {
    /* 0 */ { MAP_OUTPUT, "RobotPhase", NULL, sizeof(phaseTy), (size_t)&outputs_ctx.RobotPhase, &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "RobotStatus", NULL, sizeof(statusTy), (size_t)&outputs_ctx.RobotStatus, &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_OUTPUT, "Signalization", NULL, sizeof(sigTy), (size_t)&outputs_ctx.Signalization, &_Type_sigTy_Utils, NULL, NULL, &scope_4, 1, 2 },
    /* 3 */ { MAP_OUTPUT, "Events", NULL, sizeof(eventTy), (size_t)&outputs_ctx.Events, &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 3 },
    /* 4 */ { MAP_OUTPUT, "scoreA", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.scoreA, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_OUTPUT, "scoreB", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.scoreB, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_OUTPUT, "time", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx.time, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_OUTPUT, "team", NULL, sizeof(array_char_255), (size_t)&outputs_ctx.team, &_Type_array_char_255_Utils, NULL, NULL, &scope_10, 1, 7 },
    /* 8 */ { MAP_INPUT, "InitialPhase", NULL, sizeof(phaseTy), (size_t)&inputs_ctx.InitialPhase, &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 8 },
    /* 9 */ { MAP_INPUT, "top", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.top, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_INPUT, "mapid", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.mapid, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_INPUT, "itiid", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.itiid, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(phaseTy), (size_t)&outputs_ctx._L7, &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(statusTy), (size_t)&outputs_ctx._L12, &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(phaseTy), (size_t)&outputs_ctx._L11, &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 14 },
    /* 15 */ { MAP_LOCAL, "_L16", NULL, sizeof(eventTy), (size_t)&outputs_ctx._L16, &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 15 },
    /* 16 */ { MAP_LOCAL, "_L15", NULL, sizeof(sensorsTy), (size_t)&outputs_ctx._L15, &_Type_sensorsTy_Utils, NULL, NULL, &scope_11, 1, 16 },
    /* 17 */ { MAP_LOCAL, "_L14", NULL, sizeof(interTy), (size_t)&outputs_ctx._L14, &_Type_interTy_Utils, NULL, NULL, NULL, 1, 17 },
    /* 18 */ { MAP_LOCAL, "_L13", NULL, sizeof(sigTy), (size_t)&outputs_ctx._L13, &_Type_sigTy_Utils, NULL, NULL, &scope_4, 1, 18 },
    /* 19 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19 },
    /* 20 */ { MAP_LOCAL, "_L21", NULL, sizeof(itiElemArr_Robot), (size_t)&outputs_ctx._L21, &_Type_itiElemArr_Robot_Utils, NULL, NULL, &scope_13, 1, 20 },
    /* 21 */ { MAP_LOCAL, "_L25", NULL, sizeof(interTy), (size_t)&outputs_ctx._L25, &_Type_interTy_Utils, NULL, NULL, NULL, 1, 21 },
    /* 22 */ { MAP_LOCAL, "_L26", NULL, sizeof(sensorsTy), (size_t)&outputs_ctx._L26, &_Type_sensorsTy_Utils, NULL, NULL, &scope_11, 1, 22 },
    /* 23 */ { MAP_LOCAL, "_L28", NULL, sizeof(array_char_255), (size_t)&outputs_ctx._L28, &_Type_array_char_255_Utils, NULL, NULL, &scope_10, 1, 23 },
    /* 24 */ { MAP_LOCAL, "_L42", NULL, sizeof(phaseTy), (size_t)&outputs_ctx._L42, &_Type_phaseTy_Utils, NULL, NULL, &scope_2, 1, 24 },
    /* 25 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L40, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 25 },
    /* 26 */ { MAP_LOCAL, "_L39", NULL, sizeof(statusTy), (size_t)&outputs_ctx._L39, &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 26 },
    /* 27 */ { MAP_LOCAL, "_L38", NULL, sizeof(eventTy), (size_t)&outputs_ctx._L38, &_Type_eventTy_Utils, NULL, NULL, &scope_9, 1, 27 },
    /* 28 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L37, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 28 },
    /* 29 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L36, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 29 },
    /* 30 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L43, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 30 },
    /* 31 */ { MAP_INSTANCE, "Robot::IndividualRobotControl 1", NULL, sizeof(outC_IndividualRobotControl_Robot), (size_t)&outputs_ctx.Context_IndividualRobotControl_1, NULL, NULL, NULL, &scope_15, 1, 31 },
    /* 32 */ { MAP_INSTANCE, "City::SmartCityControl 1", NULL, sizeof(outC_SmartCityControl_City), (size_t)&outputs_ctx.Context_SmartCityControl_1, NULL, NULL, NULL, &scope_91, 1, 32 },
    /* 33 */ { MAP_INSTANCE, "Robot::readIti 1", NULL, sizeof(outC_readIti_Robot), (size_t)&outputs_ctx.Context_readIti_1, NULL, NULL, NULL, &scope_138, 1, 33 },
    /* 34 */ { MAP_INSTANCE, "City::WallClock 3", NULL, sizeof(outC_WallClock_City), (size_t)&outputs_ctx.Context_WallClock_3, NULL, NULL, NULL, &scope_139, 1, 34 },
    /* 35 */ { MAP_INSTANCE, "City::ScoringA 3", NULL, sizeof(outC_ScoringA_City), (size_t)&outputs_ctx.Context_ScoringA_3, NULL, NULL, NULL, &scope_140, 1, 35 },
    /* 36 */ { MAP_INSTANCE, "Sounds 3", NULL, sizeof(outC_Sounds), (size_t)&outputs_ctx.Context_Sounds_3, NULL, NULL, NULL, &scope_143, 1, 36 },
    /* 37 */ { MAP_INSTANCE, "City::ScoringB 3", NULL, sizeof(outC_ScoringB_City), (size_t)&outputs_ctx.Context_ScoringB_3, NULL, NULL, NULL, &scope_159, 1, 37 }
};
const MappingScope scope_1 = {
    "TheChallenge/ TheChallenge",
    scope_1_entries, 38
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "TheChallenge", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
