#pragma once

/* * Power Device Page (0x84)
 * Formatted for HID_MORPH_6 Macro (Page ID State)
 * Note: &ind prefix removed for macro compatibility
 */

/* --- PAGE 0x84: POWER DEVICE SET/CLR PAIRS --- */

#define P84_OVLD     0x84 0x69 1, 0x84 0x69 0 // Power Overload
#define P84_HI_T     0x84 0x6B 1, 0x84 0x6B 0 // High Temperature
#define P84_LO_V     0x84 0x6D 1, 0x84 0x6D 0 // Low Voltage
#define P84_AW_P     0x84 0x72 1, 0x84 0x72 0 // Awaiting Power
