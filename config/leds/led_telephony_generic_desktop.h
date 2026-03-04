#pragma once

/* * Telephony and Generic Desktop Page (0x0B & 0x01)
 * Formatted for HID_MORPH_6 Macro (Page ID State)
 * Note: &ind prefix removed for macro compatibility
 */

/* --- PAGE 0x0B: TELEPHONY SET/CLR PAIRS --- */

#define P0B_PMUT     0x0B 0x17 1 0x0B 0x17 0 // Phone Mute
#define P0B_HOOK     0x0B 0x18 1 0x0B 0x18 0 // Off-Hook
#define P0B_RING     0x0B 0x19 1 0x0B 0x19 0 // Ringing
#define P0B_MSGT     0x0B 0x1A 1 0x0B 0x1A 0 // Message Waiting (Tel)
#define P0B_HOLD     0x0B 0x20 1 0x0B 0x20 0 // Call Hold

/* --- PAGE 0x01: GENERIC DESKTOP SET/CLR PAIRS --- */

#define P01_SLP      0x01 0x82 1 0x01 0x82 0 // System Sleep
#define P01_WAKE     0x01 0x83 1 0x01 0x83 0 // System Wake
