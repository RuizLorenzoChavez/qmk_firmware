/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _NUM,
    _SYM,
    _NAV,
    _FUN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x5_3(
  //,--------------------------------------------.                    ,--------------------------------------------.
       KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                         KC_J,    KC_L,    KC_U,    KC_Y,   KC_SCLN,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_A, LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_D,             KC_H, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), KC_O,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_K,    KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                  QK_GESC, LGUI(KC_TAB), LT(_NUM, KC_SPC),    LT(_SYM, KC_ENT), LT(_NAV, KC_BSPC), LT(_FUN, KC_DEL)
                             //`--------------------------'  `--------------------------'
    ),

    [_NUM] = LAYOUT_split_3x5_3(
    //,--------------------------------------------.                    ,--------------------------------------------.
         KC_0,    KC_9,    KC_8,    KC_7,    KC_6,                       _______, _______, _______, _______, _______,
    //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
         KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       _______, _______, _______, _______, _______,
    //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______,
    //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                  _______, _______, _______,    _______, _______, _______
                               //`--------------------------'  `--------------------------'
    ),

    [_SYM] = LAYOUT_split_3x5_3(
        //,--------------------------------------------.                    ,--------------------------------------------.
           _______, _______, _______, _______, _______,                       KC_ASTR, KC_MINS,  KC_EQL, KC_PERC, KC_NUHS,
        //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
           _______, _______, _______, _______, _______,                       KC_QUOT, KC_LPRN, KC_RPRN, KC_AMPR, KC_BSLS,
        //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
           _______, _______, _______, _______, _______,                       KC_EXLM, KC_LBRC, KC_RBRC,   KC_AT, KC_CIRC,
        //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                       _______, _______, _______,    _______, _______, _______
                                   //`--------------------------'  `--------------------------'
    ),

    [_NAV] = LAYOUT_split_3x5_3(
        //,--------------------------------------------.                    ,--------------------------------------------.
            MS_BTN2, MS_BTN4,   MS_UP, MS_BTN5, MS_WHLU,                      KC_COPY, KC_PGUP, LSFT_T(KC_UP), KC_HOME, C(KC_A),
        //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
            MS_BTN1, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD,                       KC_CUT, C_S_T(KC_LEFT), RSFT_T(KC_DOWN), RCS_T(KC_RGHT), KC_BSPC,
        //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, MS_WHLL, MS_WHLR,                      KC_PSTE, KC_PGDN, KC_PSCR,  KC_END, KC_DEL,
        //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                       _______, _______, _______,    _______, _______, _______
                                   //`--------------------------'  `--------------------------'
    ),

    [_FUN] = LAYOUT_split_3x5_3(
        //,--------------------------------------------.                    ,--------------------------------------------.
            XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX, XXXXXXX,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,
        //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
            KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX,                        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, KC_VOLD, XXXXXXX, XXXXXXX,                       KC_F11,  KC_F12, KC_LALT, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                       _______, _______, _______,    _______, _______, _______
                                   //`--------------------------'  `--------------------------'
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
