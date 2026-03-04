#pragma once

/* * FINAL STABLE VERSION: HID_MORPH_6_IND
 * * Priority: Alt > Ctrl > Gui > Base
 * * State: Shift = OFF | No Shift = ON
 * * Logic: Uses Token Pasting to combine parameter names with _ON and _OFF
 */

/ {
behaviors {
        ind: hid_indicator_report {
            compatible = "zmk,behavior-hid-indicator";
            #binding-cells = <3>; // Page, Usage, Value
        };
    };
};

#define HID_MORPH_6_IND(NAME, P_NONE, P_GUI, P_CTL, P_ALT) \
    / { \
        behaviors { \
            /* Level 1: Shift Sensing - Decides if the report is ON or OFF */ \
            NAME##_s_n: NAME##_s_n { \
                compatible = "zmk,behavior-mod-morph"; \
                #binding-cells = <0>; \
                bindings = <&ind P_NONE##_ON>, <&ind P_NONE##_OFF>; \
                mods = <(MOD_LSFT|MOD_RSFT)>; \
            }; \
            NAME##_s_g: NAME##_s_g { \
                compatible = "zmk,behavior-mod-morph"; \
                #binding-cells = <0>; \
                bindings = <&ind P_GUI##_ON>, <&ind P_GUI##_OFF>; \
                mods = <(MOD_LSFT|MOD_RSFT)>; \
            }; \
            NAME##_s_c: NAME##_s_c { \
                compatible = "zmk,behavior-mod-morph"; \
                #binding-cells = <0>; \
                bindings = <&ind P_CTL##_ON>, <&ind P_CTL##_OFF>; \
                mods = <(MOD_LSFT|MOD_RSFT)>; \
            }; \
            NAME##_s_a: NAME##_s_a { \
                compatible = "zmk,behavior-mod-morph"; \
                #binding-cells = <0>; \
                bindings = <&ind P_ALT##_ON>, <&ind P_ALT##_OFF>; \
                mods = <(MOD_LSFT|MOD_RSFT)>; \
            }; \
\
            /* Level 2: Modifier Routing - Decides WHICH indicator to target */ \
            NAME##_g: NAME##_g { \
                compatible = "zmk,behavior-mod-morph"; \
                #binding-cells = <0>; \
                bindings = <&NAME##_s_n>, <&NAME##_s_g>; \
                mods = <(MOD_LGUI|MOD_RGUI)>; \
            }; \
            NAME##_c: NAME##_c { \
                compatible = "zmk,behavior-mod-morph"; \
                #binding-cells = <0>; \
                bindings = <&NAME##_g>, <&NAME##_s_c>; \
                mods = <(MOD_LCTL|MOD_RCTL)>; \
            }; \
            NAME##_IND: NAME##_IND { \
                compatible = "zmk,behavior-mod-morph"; \
                #binding-cells = <0>; \
                bindings = <&NAME##_c>, <&NAME##_s_a>; \
                mods = <(MOD_LALT|MOD_RALT)>; \
            }; \
        }; \
    };
