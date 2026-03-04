#pragma once

/* * HID Page 0x59: Lighting and Illumination
 * Split into _ON and _OFF for HID_MORPH_6_IND Macro
 */

#define P59_ILLUM_EN_ON     0x59 0x01 1
#define P59_ILLUM_EN_OFF    0x59 0x01 0
#define P59_ILLUM_AUT_ON    0x59 0x02 1
#define P59_ILLUM_AUT_OFF   0x59 0x02 0
#define P59_ILLUM_BRT_ON    0x59 0x03 1
#define P59_ILLUM_BRT_OFF   0x59 0x03 0
#define P59_ILLUM_SPD_ON    0x59 0x04 1
#define P59_ILLUM_SPD_OFF   0x59 0x04 0
#define P59_ILLUM_STP_ON    0x59 0x06 1
#define P59_ILLUM_STP_OFF   0x59 0x06 0
#define P59_ILLUM_CYC_ON    0x59 0x08 1
#define P59_ILLUM_CYC_OFF   0x59 0x08 0
#define P59_ILLUM_RED_ON    0x59 0x20 1
#define P59_ILLUM_RED_OFF   0x59 0x20 0
#define P59_ILLUM_GRN_ON    0x59 0x21 1
#define P59_ILLUM_GRN_OFF   0x59 0x21 0
#define P59_ILLUM_BLU_ON    0x59 0x22 1
#define P59_ILLUM_BLU_OFF   0x59 0x22 0
#define P59_ILLUM_UPT_ON    0x59 0x07 1
#define P59_ILLUM_UPT_OFF   0x59 0x07 0
