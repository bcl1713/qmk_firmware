#include QMK_KEYBOARD_H

#define KC_SPM3 LT(3, KC_SPC)
#define KC_TBM2 LT(2, KC_TAB)
#define KC_BSM1 LT(1, KC_BSPC)

#define KC_GUIA GUI_T(KC_A)
#define KC_ALTS LALT_T(KC_S)
#define KC_CTLD LCTL_T(KC_D)
#define KC_SFTF LSFT_T(KC_F)
#define KC_GUSC GUI_T(KC_SCLN)
#define KC_ALTL RALT_T(KC_L)
#define KC_CTLK RCTL_T(KC_K)
#define KC_SFTJ RSFT_T(KC_J)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_GUIA, KC_ALTS, KC_CTLD, KC_SFTF, KC_G,            KC_H,    KC_SFTJ, KC_CTLK, KC_ALTL, KC_GUSC,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                               KC_TBM2, KC_BSM1,         KC_SPM3, KC_ENT
  ),

  [1] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_7,    KC_8,    KC_9,    KC_PMNS,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,         KC_TRNS, KC_4,    KC_5,    KC_6,    KC_PPLS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_1,    KC_2,    KC_3,    KC_PENT,
                               KC_TRNS, KC_TRNS,         KC_TRNS, KC_0
  ),

  [2] = LAYOUT(
    KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_CAPS,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS,         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, CW_TOGG,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TRNS,
                               KC_TRNS, KC_TRNS,         KC_DEL,  KC_TRNS
  ),

  [3] = LAYOUT(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,         KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_QUOT,         KC_TRNS, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
    KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_GRV,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS,
                               KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS
  ),

};
