#pragma once

/* * HID Page 0x59: Lighting and Illumination
 * Format for HID_MORPH_6_IND: 
 * [UsagePage] [UsageID] [SetValue] [UsagePage] [UsageID] [ClearValue]
 */

// --- GLOBAL STATE ---
// Enables or disables the entire Lamp Array (Physical LEDs)
#define P59_ILLUM_EN    0x59 0x01 1 0x59 0x01 0 

// Autonomous Mode: 1 = Keyboard Logic (Internal) 0 = Host Logic (Windows/OpenRGB)
#define P59_ILLUM_AUT   0x59 0x02 1 0x59 0x02 0 

// --- CONTROLS ---
// Global Intensity/Brightness (Step Up / Reset)
#define P59_ILLUM_BRT   0x59 0x03 1 0x59 0x03 0 

// Animation/Effect Speed (Faster / Slower)
#define P59_ILLUM_SPD   0x59 0x04 1 0x59 0x04 0 

// Cycle through hardware-defined patterns
#define P59_ILLUM_CYC   0x59 0x08 1 0x59 0x08 0 

// Immediate Stop/Pause of current lighting effect
#define P59_ILLUM_STP   0x59 0x06 1 0x59 0x06 0 

// --- DESIGN UPDATES ---
// Required by some OS drivers to "Commit" a new color design
#define P59_ILLUM_UPT   0x59 0x07 1 0x59 0x07 0 

// --- COLOR CHANNEL DIAGNOSTICS ---
// Toggles for testing specific RGB lines
#define P59_ILLUM_RED   0x59 0x20 1 0x59 0x20 0 
#define P59_ILLUM_GRN   0x59 0x21 1 0x59 0x21 0 
#define P59_ILLUM_BLU   0x59 0x22 1 0x59 0x22 0
