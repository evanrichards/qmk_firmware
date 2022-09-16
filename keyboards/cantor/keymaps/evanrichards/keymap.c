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
        KC_NO,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_NO,
        KC_NO, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_NO,
        KC_NO, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                               KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,
                                        KC_LEFT_CTRL, LT(1,KC_SPC), KC_TAB,      KC_BACKSPACE, KC_ENTER, KC_ESCAPE
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                           KC_GRAVE,    KC_7,    KC_8,    KC_9, KC_BACKSLASH, KC_NO,
       KC_NO,  KC_LCTL, KC_LSFT, KC_LALT, KC_LCMD,    KC_NO,                       KC_BACKSPACE,    KC_4,    KC_5,    KC_6,   KC_QUOTE,    KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  QK_BOOT,                             KC_DOT,    KC_1,    KC_2,    KC_3,  KC_SLSH, KC_NO,
                                        KC_LEFT_CTRL, KC_SPC, KC_TAB,      KC_BACKSPACE, KC_ENTER, KC_0
    )
};

