#pragma once

/* * Telephony (0x0B) and Generic Desktop (0x01)
 * Split into _ON and _OFF for HID_MORPH_6_IND Macro
 */

/* --- PAGE 0x0B: TELEPHONY --- */
#define P0B_PMUT_ON     0x0B 0x17 1
#define P0B_PMUT_OFF    0x0B 0x17 0
#define P0B_HOOK_ON     0x0B 0x18 1
#define P0B_HOOK_OFF    0x0B 0x18 0
#define P0B_RING_ON     0x0B 0x19 1
#define P0B_RING_OFF    0x0B 0x19 0
#define P0B_MSGT_ON     0x0B 0x1A 1
#define P0B_MSGT_OFF    0x0B 0x1A 0
#define P0B_HOLD_ON     0x0B 0x20 1
#define P0B_HOLD_OFF    0x0B 0x20 0

/* --- PAGE 0x01: GENERIC DESKTOP --- */
#define P01_SLP_ON      0x01 0x82 1
#define P01_SLP_OFF     0x01 0x82 0
#define P01_WAKE_ON     0x01 0x83 1
#define P01_WAKE_OFF    0x01 0x83 0
