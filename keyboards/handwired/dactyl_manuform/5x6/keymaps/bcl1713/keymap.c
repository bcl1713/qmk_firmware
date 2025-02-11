#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _NAV   1
#define _NUM   2

#define NUM     TO(_NUM  )
#define NAV     TO(_NAV  )
#define QWERT   TO(_QWERTY)

#define SFT_ESC SFT_T(KC_ESC)
#define CTL_BSP CTL_T(KC_BSPC)
#define ALT_SPC  ALT_T(KC_SPC)
#define SFT_ENT SFT_T(KC_ENTER) 

#define CTL_ESC LCTL_T(KC_ESC)
#define ALT_BSP LALT_T(KC_BSPC)

qk_tap_dance_action_t tap_dance_actions[] = {};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,             KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_EQL  ,
        KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,             KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_MINS ,
        CTL_ESC , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,             KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,
        KC_LALT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    ,             KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_BSLS ,
                            KC_LPRN , KC_RPRN ,                                                     KC_LBRC , KC_RBRC  ,
                                                KC_NO   , KC_BSPC ,             KC_SPC  , NUM     ,
                                                KC_HOME , SFT_ENT ,             SFT_ENT , KC_END  ,
                                                KC_DEL  , KC_LGUI ,             KC_RALT , NAV  
    ),

    [_NAV  ] = LAYOUT_5x6(
        _______ , _______ , _______ , _______ , _______ , _______ ,             _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , _______ , _______ , KC_MS_U , _______ , _______ ,             _______ , _______ , _______ , _______ , _______ , _______ ,
        _______ , KC_HOME , KC_MS_L , KC_MS_D , KC_MS_R , _______ ,             KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_PGUP , _______ ,
        _______ , _______ , KC_WH_L , KC_WH_U , KC_WH_D , KC_WH_R ,             _______ , _______ , _______ , _______ , KC_PGDN , _______ ,
                            _______ , _______ ,                                                     _______ , _______ ,
                                                QWERT   , KC_BTN1 ,             _______ , QWERT   ,
                                                _______ , KC_BTN2 ,             _______ , _______ ,
                                                _______ , KC_BTN3 ,             _______ , _______

    ),

    [_NUM  ] = LAYOUT_5x6(
        _______ , _______ , _______ , _______ , _______ , _______ ,             _______ , _______ , _______ , _______ , _______ , KC_MUTE ,
        KC_F12  , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,             KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11  ,
        _______ , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,             KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_VOLU ,
        _______ , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC ,             KC_CIRC , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , KC_VOLD ,
                            _______ , _______ ,                                                     _______ , _______ ,
                                                QWERT   , _______ ,             _______ , NAV     ,
                                                _______ , _______ ,             _______ , _______ ,
                                                _______ , _______ ,             _______ , _______
    )
};

