// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Bsp│   │Ent├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_NO,        KC_Q,       KC_W,         KC_F,        KC_P,        KC_B,            KC_J,        KC_L,        KC_U,        KC_Y,     KC_SCLN, KC_NO,
        KC_NO, CTL_T(KC_A),LSFT_T(KC_R), OPT_T(KC_S), CMD_T(KC_T), ALL_T(KC_G),     ALL_T(KC_M), CMD_T(KC_N), OPT_T(KC_E),RSFT_T(KC_I), LT(2, KC_O), KC_NO,
        KC_NO,        KC_Z,        KC_X,        KC_C,        KC_D,        KC_V,             KC_K,       KC_H,     KC_COMM,      KC_DOT,     KC_SLSH, KC_NO,
                                  KC_LEFT_CTRL, LT(1,KC_SPC), MT(MOD_LSFT, KC_TAB),   LT(4,KC_BACKSPACE), LT(3,KC_ENTER), KC_ESCAPE
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                         KC_GRAVE,  KC_7,  KC_8,  KC_9, KC_BSLS, KC_NO,
        KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LCMD,   KC_NO,                          KC_MINS,  KC_4,  KC_5,  KC_6, KC_QUOT, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, QK_BOOT,                        S(KC_EQL),  KC_1,  KC_2,  KC_3, KC_SLSH, KC_NO,
                                     KC_LEFT_CTRL,  KC_SPC, KC_TAB,  KC_BACKSPACE, KC_ENTER,    KC_0
    ),

    [2] = LAYOUT_split_3x6_3(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                 KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                 KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_NO,  KC_NO,
                                       KC_NO,   KC_NO,  KC_NO,    KC_NO, KC_NO,     KC_NO
    ),

    [3] = LAYOUT_split_3x6_3(
        KC_NO, S(KC_BSLS), S(KC_9),  S(KC_8),  S(KC_7), S(KC_GRAVE),                   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
        KC_NO, S(KC_QUOT), S(KC_6),  S(KC_5),  S(KC_4),  S(KC_MINS),                   KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LCMD, KC_NO,
        KC_NO,      KC_NO, S(KC_3),  S(KC_2),  S(KC_1),      KC_EQL,                   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                                       KC_NO,   KC_NO,  KC_NO,    KC_NO, KC_NO,     KC_NO
    ),

    [4] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO,      KC_NO, S(KC_LBRC), S(KC_RBRC),     KC_NO,                   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
        KC_NO, KC_NO,      KC_NO,    S(KC_9),    S(KC_0),     KC_NO,                   KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LCMD, KC_NO,
        KC_NO, KC_NO, S(KC_COMM),    KC_LBRC,    KC_RBRC, S(KC_DOT),                   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                                                  KC_NO,      KC_NO,  KC_NO,    KC_NO, KC_NO,     KC_NO
    )
};

