/* * HID_MORPH_6_IND Definition
 * Search Order: Base(Shift=Clear) -> GUI -> Ctrl -> Alt
 */
#define HID_MORPH_6_IND(NAME, P_NONE, P_GUI, P_CTL, P_ALT) \
    NAME##_n: NAME##_n { \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        bindings = <&ind P_NONE>; \
        mods = <(MOD_LSFT|MOD_RSFT)>; \
    }; \
    NAME##_g: NAME##_g { \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        bindings = <&NAME##_n>, <&ind P_GUI>; \
        mods = <(MOD_LGUI|MOD_RGUI)>; \
    }; \
    NAME##_c: NAME##_c { \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        bindings = <&NAME##_g>, <&ind P_CTL>; \
        mods = <(MOD_LCTL|MOD_RCTL)>; \
    }; \
    NAME##_IND: NAME##_IND { \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        bindings = <&NAME##_c>, <&ind P_ALT>; \
        mods = <(MOD_LALT|MOD_RALT)>; \
    };
