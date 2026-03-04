/* * HID_MORPH_6 Macro Definition
 * Arguments: 
 * 1: NAME   - Physical key identifier (e.g., k02)
 * 2: P_NONE - Triggered by Tap (Shift clears it)
 * 3: P_GUI  - Triggered by GUI + Tap
 * 4: P_CTL  - Triggered by CTRL + Tap
 * 5: P_ALT  - Triggered by ALT + Tap
 */

#define HID_MORPH_6_IND(NAME, P_NONE, P_GUI, P_CTL, P_ALT) \
    NAME##_none: NAME##_none { \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        bindings = <&ind P_NONE>; \
        mods = <(MOD_LSFT|MOD_RSFT)>; \
    }; \
    NAME##_gui_stack: NAME##_gui_stack { \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        bindings = <&NAME##_none>, <&ind P_GUI>; \
        mods = <(MOD_LGUI|MOD_RGUI)>; \
    }; \
    NAME##_ctl_stack: NAME##_ctl_stack { \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        bindings = <&NAME##_gui_stack>, <&ind P_CTL>; \
        mods = <(MOD_LCTL|MOD_RCTL)>; \
    }; \
    NAME: NAME { \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        bindings = <&NAME##_ctl_stack>, <&ind P_ALT>; \
        mods = <(MOD_LALT|MOD_RALT)>; \
    };
