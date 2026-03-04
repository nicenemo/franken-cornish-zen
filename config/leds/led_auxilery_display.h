#pragma once

/* * Auxiliary Display Page (0x14)
 * Split into _ON and _OFF for HID_MORPH_6_IND Macro
 */

#define P14_AUX_B_ON    0x14 0x02 1
#define P14_AUX_B_OFF   0x14 0x02 0
#define P14_AUX_S_ON    0x14 0x24 1
#define P14_AUX_S_OFF   0x14 0x24 0
#define P14_AUX_M_ON    0x14 0x2E 1
#define P14_AUX_M_OFF   0x14 0x2E 0
