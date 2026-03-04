#pragma once

/* * Power Device Page (0x84)
 * Split into _ON and _OFF for HID_MORPH_6_IND Macro
 */

#define P84_OVLD_ON     0x84 0x69 1
#define P84_OVLD_OFF    0x84 0x69 0
#define P84_HI_T_ON     0x84 0x6B 1
#define P84_HI_T_OFF    0x84 0x6B 0
#define P84_LO_V_ON     0x84 0x6D 1
#define P84_LO_V_OFF    0x84 0x6D 0
#define P84_AW_P_ON     0x84 0x72 1
#define P84_AW_P_OFF    0x84 0x72 0
