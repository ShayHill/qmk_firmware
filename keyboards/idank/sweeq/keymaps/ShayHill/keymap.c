#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

/* The default Ferris Sweep keymap nav and fkeys swapped and nav/mouse aligned to
 * Vim's hjkl. Swapping nav and fkeys puts all numbers on the left hand and all nav
 * on the right. */

#define A_SFT LSFT_T(KC_A)
#define S_NAV LT(2,KC_S)
#define D_MOUSE LT(1,KC_D)
#define F_SYMR LT(3,KC_F)
#define J_SYML LT(4,KC_J)
#define E_NAV LT(2,KC_E)
#define K_FUN LT(5,KC_K)
#define L_NUM LT(6,KC_L)
#define SCLN_SFT LSFT_T(KC_SCLN)
#define ENT_SFT LSFT_T(KC_ENT)
#define X_CTL LCTL_T(KC_X)
#define C_ALT LALT_T(KC_C)
#define COMM_ALT LALT_T(KC_COMM)
#define DOT_CTL LCTL_T(KC_DOT)
#define SPC_SYS LT(7,KC_SPC)
#define CTL_ALT LCTL(KC_LALT)
#define CA_SFT LCA(KC_LSFT)

#define OS_LSFT OSM(MOD_LSFT)
#define OS_LCTL OSM(MOD_LCTL)
#define OS_LALT OSM(MOD_LALT)
#define OS_LGUI OSM(MOD_LGUI)
#define OS_RSFT OSM(MOD_RSFT)
#define OS_RCTL OSM(MOD_RCTL)
#define OS_RALT OSM(MOD_RALT)
#define OS_RGUI OSM(MOD_RGUI)
#define TAB_OS LT(8,KC_TAB)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(  // alpha
        KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    ,
        A_SFT   , S_NAV   , D_MOUSE , F_SYMR  , KC_G    , KC_H    , J_SYML  , K_FUN   , L_NUM   , ENT_SFT,
        KC_Z    , X_CTL   , C_ALT   , KC_V    , KC_B    , KC_N    , KC_M    , COMM_ALT, DOT_CTL , KC_SLSH ,
                                      TAB_OS  , KC_BSPC , SPC_SYS , TAB_OS
    ),

    [1] = LAYOUT_split_3x5_2(  // mouse
        _______ , _______ , _______ , _______ , _______ , KC_BTN1 , KC_WH_U , KC_BTN2 , _______ , _______ ,
        KC_LSFT , KC_BTN2 , XXXXXXX , KC_BTN1 , _______ , KC_MS_L , KC_MS_D , KC_MS_U , KC_MS_R , KC_RSFT ,
        _______ , KC_LCTL , KC_LALT , _______ , _______ , KC_WH_L , KC_WH_D , KC_WH_R , KC_RCTL , _______ ,
                                      _______ , _______ , _______ , _______
    ),

    [2] = LAYOUT_split_3x5_2(  // nav
        _______ , _______ , _______ , _______ , _______ , KC_HOME , KC_PGDN , KC_PGUP , KC_END  , _______ ,
        CA_SFT  , XXXXXXX , CTL_ALT , KC_LGUI , _______ , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_RSFT ,
        _______ , KC_LCTL , KC_LALT , _______ , _______ , _______ , _______ , KC_RALT , KC_RCTL , _______ ,
                                      _______ , _______ , _______ , _______
    ),

    [3] = LAYOUT_split_3x5_2(  // symr
        _______ , _______ , _______ , _______ , _______ , _______ , KC_UNDS , KC_PIPE , KC_QUOT , _______ ,
        KC_CIRC , KC_ASTR , KC_AMPR , XXXXXXX , _______ , KC_HASH , KC_TILD , KC_SLSH , KC_DQUO , KC_DLR  ,
        _______ , KC_LCTL , KC_LALT , _______ , _______ , _______ , KC_MINS , KC_BSLS , KC_GRV  , _______ ,
                                      _______ , _______ , _______ , _______
    ),

    [4] = LAYOUT_split_3x5_2(  // syml
        _______ , KC_COLN , KC_LT   , KC_GT   , KC_SCLN , _______ , _______ , _______ , _______ , _______ ,
        KC_LCBR , KC_RCBR , KC_LPRN , KC_RPRN , KC_AT   , _______ , XXXXXXX , KC_EQL  , KC_PLUS , KC_PERC ,
        _______ , KC_EXLM , KC_LBRC , KC_RBRC , KC_MUTE , _______ , _______ , KC_RALT , KC_RCTL , _______ ,
                                      KC_VOLD , _______ , _______ , KC_VOLU
    ),

    [5] = LAYOUT_split_3x5_2(  // fun
        _______ , KC_F7   , KC_F8   , KC_F9   , KC_F10  , _______ , _______ , _______ , _______ , KC_PSCR ,
        KC_LSFT , KC_F4   , KC_F5   , KC_F6   , KC_F11  , _______ , XXXXXXX , CTL_ALT , XXXXXXX , KC_RSFT ,
        _______ , KC_F1   , KC_F2   , KC_F3   , KC_F12  , _______ , _______ , KC_RALT , KC_RCTL , _______ ,
                                      _______ , _______ , _______ , _______
    ),

    [6] = LAYOUT_split_3x5_2(  // num
        KC_PSLS , KC_KP_7 , KC_KP_8 , KC_KP_9 , KC_PPLS , _______ , _______ , _______ , _______ , _______ ,
        KC_KP_0 , KC_KP_4 , KC_KP_5 , KC_KP_6 , KC_PMNS , _______ , XXXXXXX , XXXXXXX , XXXXXXX , KC_RSFT ,
        KC_PAST , KC_KP_1 , KC_KP_2 , KC_KP_3 , KC_PEQL , _______ , _______ , _______ , _______ , _______ ,
                                      _______ , _______ , _______ , _______
    ),

    [7] = LAYOUT_split_3x5_2(  // sys
        _______ , _______ , KC_COLN , KC_ESC  , _______ , _______ , _______ , _______ , _______ , KC_DEL  ,
        _______ , KC_PERC , KC_SLSH , KC_ENT  , _______ , DF(1)   , KC_RGUI , XXXXXXX , XXXXXXX , KC_RSFT ,
        _______ , _______ , _______ , KC_EXLM , _______ , DF(0)   , _______ , COMM_ALT, DOT_CTL , QK_BOOT ,
                                      CW_TOGG , KC_TAB  , _______ , KC_CAPS
    ),

    [8] = LAYOUT_split_3x5_2(  // one-shot
        _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
        OS_LSFT , _______ , _______ , OS_LGUI , _______ , _______ , OS_RGUI , _______ , _______ , OS_RSFT ,
        _______ , OS_LCTL , OS_LALT , _______ , _______ , _______ , _______ , OS_RALT , OS_RCTL , _______ ,
                                      XXXXXXX , _______ , _______  , XXXXXXX
    ),
};


// Caps Word defaults minus shifting the minus key.
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        /* case KC_MINS: */
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case KC_MINS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

