/* Layout */
#define KEYS_L 0 1 2 3 4 10 11 12 13 14 20 21 22 23 24
#define KEYS_R 5 6 7 8 9 15 16 17 18 19 25 26 27 28 29
#define THUMBS 30 31 32 33

/* ZMK_BEHAVIOR */
#define ZMK_BEHAVIOR_CORE_adaptive_key    compatible = "zmk,behavior-adaptive-key";    #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_auto_layer      compatible = "zmk,behavior-auto-layer";      #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_caps_word       compatible = "zmk,behavior-caps-word";       #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_dynamic_macro   compatible = "zmk,behavior-dynamic-macro";   #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_hold_tap        compatible = "zmk,behavior-hold-tap";        #binding-cells = <2>
#define ZMK_BEHAVIOR_CORE_key_repeat      compatible = "zmk,behavior-key-repeat";      #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_macro           compatible = "zmk,behavior-macro";           #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_macro_one_param compatible = "zmk,behavior-macro-one-param"; #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_macro_two_param compatible = "zmk,behavior-macro-two-param"; #binding-cells = <2>
#define ZMK_BEHAVIOR_CORE_mod_morph       compatible = "zmk,behavior-mod-morph";       #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_sticky_key      compatible = "zmk,behavior-sticky-key";      #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_tap_dance       compatible = "zmk,behavior-tap-dance";       #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_tri_state       compatible = "zmk,behavior-tri-state";       #binding-cells = <0>

#define ZMK_BEHAVIOR(name, type, ...) \
    / { \
        behaviors { \
            name: name { \
                ZMK_BEHAVIOR_CORE_ ## type; \
                __VA_ARGS__ \
            }; \
        }; \
    };

#define ZMK_ADAPTIVE_KEY(name, ...) ZMK_BEHAVIOR(name, adaptive_key, __VA_ARGS__)
#define ZMK_AUTO_LAYER(name, ...) ZMK_BEHAVIOR(name, auto_layer, __VA_ARGS__)
#define ZMK_CAPS_WORD(name, ...) ZMK_BEHAVIOR(name, caps_word, __VA_ARGS__)
#define ZMK_HOLD_TAP(name, ...) ZMK_BEHAVIOR(name, hold_tap, __VA_ARGS__)
#define ZMK_KEY_REPEAT(name, ...) ZMK_BEHAVIOR(name, key_repeat, __VA_ARGS__)
#if ZMK_HELPERS_KEEP_NATIVE != 1
    #undef ZMK_MACRO
    #define ZMK_MACRO(name, ...) ZMK_BEHAVIOR(name, macro, __VA_ARGS__)
#endif
#define ZMK_MACRO_ONE_PARAM(name, ...) ZMK_BEHAVIOR(name, macro_one_param, __VA_ARGS__)
#define ZMK_MACRO_TWO_PARAM(name, ...) ZMK_BEHAVIOR(name, macro_two_param, __VA_ARGS__)
#define ZMK_MOD_MORPH(name, ...) ZMK_BEHAVIOR(name, mod_morph, __VA_ARGS__)
#define ZMK_STICKY_KEY(name, ...) ZMK_BEHAVIOR(name, sticky_key, __VA_ARGS__)
#define ZMK_TAP_DANCE(name, ...) ZMK_BEHAVIOR(name, tap_dance, __VA_ARGS__)
#define ZMK_TRI_STATE(name, ...) ZMK_BEHAVIOR(name, tri_state, __VA_ARGS__)
