#pragma once

/* * Battery System Page (0x85)
 * Split into _ON and _OFF for HID_MORPH_6_IND Macro
 */

#define P85_B_REM_ON    0x85 0x42 1
#define P85_B_REM_OFF   0x85 0x42 0
#define P85_B_CHG_ON    0x85 0x44 1
#define P85_B_CHG_OFF   0x85 0x44 0
#define P85_B_DIS_ON    0x85 0x45 1
#define P85_B_DIS_OFF   0x85 0x45 0
#define P85_B_REP_ON    0x85 0x4B 1
#define P85_B_REP_OFF   0x85 0x4B 0
