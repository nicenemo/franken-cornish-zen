#pragma once

/* --- 1. Universal Hardware Utilities --- */

/* * P_OFF: The "Universal Null". 
 * Use this to fill empty slots in the HID_MORPH_6_IND macro.
 * Tapping it sends a "0" report which does nothing.
 */
#define P_OFF_ON       0x00 0x00 0 
#define P_OFF_OFF      0x00 0x00 0 

/* * P_CLR: Global Reset for the LED Page (0x08).
 * Resets/Clears all standard keyboard indicators.
 */
#define P_CLR_ON       0x08 0x00 0 
#define P_CLR_OFF      0x08 0x00 0 

/* Legacy 3-cell support for manual bindings like &ind P_OFF */
#define P_OFF          0x00 0x00 0
#define P_CLR          0x08 0x00 0


/* --- 2. HID Page Imports --- */
#include "led_usage.h"
#include "led_telephony_generic_desktop.h"
#include "led_power_device.h"
#include "led_battery_system_page.h"
#include "led_auxilery_display.h"
#include "illuminations.h"
#include "hid_morph_6_ind.h"
