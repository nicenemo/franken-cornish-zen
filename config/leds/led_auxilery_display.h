#pragma once

/* * Auxiliary Display Page (0x14)
 * Formatted for HID_MORPH_6 Macro (Page ID State)
 * Note: &ind prefix removed for macro compatibility
 */

/* --- PAGE 0x14: AUXILIARY DISPLAY SET/CLR PAIRS --- */

// Format: [Usage Page] [Usage ID] [Set Value], [Usage Page] [Usage ID] [Clear Value]

#define P14_AUX_B    0x14 0x02 1, 0x14 0x02 0 // Display Brightness
#define P14_AUX_S    0x14 0x24 1, 0x14 0x24 0 // Soft Button ID
#define P14_AUX_M    0x14 0x2E 1, 0x14 0x2E 0 // Character Manual
