#pragma once

/* * Battery System Page (0x85)
 * Formatted for HID_MORPH_6 Macro (Page ID State)
 * Note: &ind prefix removed for macro compatibility
 */

/* --- PAGE 0x85: BATTERY SYSTEM SET/CLR PAIRS --- */

#define P85_B_REM    0x85 0x42 1, 0x85 0x42 0 // Below Remaining Capacity
#define P85_B_CHG    0x85 0x44 1, 0x85 0x44 0 // Battery Charging (Data In)
#define P85_B_DIS    0x85 0x45 1, 0x85 0x45 0 // Battery Discharging (Data Out)
#define P85_B_REP    0x85 0x4B 1, 0x85 0x4B 0 // Need Replacement (Critical Error)
