#pragma once

/* * Lighting and Illumination Page (0x59)
 * Formatted for HID_MORPH_6 Macro (Page ID State)
 * Note: &ind prefix removed for macro compatibility
 */

/* --- PAGE 0x59: LIGHTING AND ILLUMINATION SET/CLR PAIRS --- */

#define P59_L_ATTR   0x59 0x01 1, 0x59 0x01 0 // Lamp Array Attributes
#define P59_L_CTRL   0x59 0x02 1, 0x59 0x02 0 // Lamp Array Control
#define P59_L_UPDT   0x59 0x07 1, 0x59 0x07 0 // Lamp Update Report
