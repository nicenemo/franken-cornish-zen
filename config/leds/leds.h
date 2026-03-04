#pragma once

/* --- 1. Universal Hardware Utilities --- */
// P_OFF: The "Universal Null" for empty macro slots
#define P_OFF      0x00 0x00 0 
// P_CLR: Global Reset for the LED Page (0x08)
#define P_CLR      0x08 0x00 0 

/* --- 2. HID Page Imports --- */
#include "led_usage.h"
#include "led_telephony_generic_desktop.h"
#include "led_power_device.h"
#include "led_battery_system_page.h"
#include "led_auxilery_display.h"
#include "illuminations.h"
#include "hid_morh6_ind.h"
