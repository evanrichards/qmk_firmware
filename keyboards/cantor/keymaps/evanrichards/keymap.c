
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * Layer 0 -  Letters
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ F │ P │ B │       │ J │ L │ U │ Y │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A^│ Rוּ│ Sהּ│ T│ G⪾│       │⟄M │וּN │E │הּI │^O │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ D │ V │       │ K │ H │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │CTL├───┐           ┌───┤ESC│
      *           └───┤ ␣#├───┐   ┌───┤@⏎ ├───┘
      *               └───┤ │   │ ├───┘
      *                   └───┘   └───┘
      * Ideas -
      *   Remove shift from thumb cluster, replace with naviagion layer. ✔️
      *   Homerow mod changes to Ctrl, Alt, Command, Shift, Super. Need to move
      *     the navigation layer hold to one of the thumb keys first for
      *     symmetry.✔️
      *   I am using ESC but not CTL in the thumb cluster. What can I replace
      *     CTL with to be more useful?
      */
    [0] = LAYOUT_split_3x6_3(
        KC_NO,        KC_Q,       KC_W,         KC_F,        KC_P,        KC_B,            KC_J,        KC_L,        KC_U,        KC_Y,     KC_SCLN, KC_NO,
        KC_NO, CTL_T(KC_A), OPT_T(KC_R), CMT_T(KC_S), LSFT_T(KC_T), ALL_T(KC_G),     ALL_T(KC_M), RSFT_T(KC_N), CMD_T(KC_E),OPT_T(KC_I), CTL_T(KC_O), KC_NO,
        KC_NO,        KC_Z,        KC_X,        KC_C,        KC_D,        KC_V,             KC_K,       KC_H,     KC_COMM,      KC_DOT,     KC_SLSH, KC_NO,
                                         KC_LEFT_CTRL, LT(1,KC_SPC), LT(2, KC_TAB),   LT(4,KC_BACKSPACE), LT(3,KC_ENTER), KC_ESCAPE
    ),
     /*
      * Layer 1 - # Numbers
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │   │   │   │   │   │       │ ` │ 7 │ 8 │ 9 │ \ │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ ^ │ וּ │ הּ │  │   │       │ - │ 4 │ 5 │ 6 │ ' │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │   │   │   │   │ ⏻ │       │ + │ 1 │ 2 │ 3 │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │CTL├───┐           ┌───┤ 0 │
      *           └───┤  ├───┐   ┌───┤ ⏎ ├───┘
      *               └───┤TAB│   │  ├───┘
      *                   └───┘   └───┘
      * Ideas -
      *   Repeated / in this and layer 0, remove it.
      *   Clean up thumb clusters.
      */
    [1] = LAYOUT_split_3x6_3(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                         KC_GRAVE,  KC_7,  KC_8,  KC_9, KC_BSLS, KC_NO,
        KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LCMD,   KC_NO,                          KC_MINS,  KC_4,  KC_5,  KC_6, KC_QUOT, KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, QK_BOOT,                        S(KC_EQL),  KC_1,  KC_2,  KC_3, KC_SLSH, KC_NO,
                                     KC_LEFT_CTRL,  KC_SPC, KC_TAB,   KC_BACKSPACE, KC_ENTER,  KC_0
    ),
     /*
      * Layer 2 -  Navigation
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │   │   │   │   │   │       │   │   │   │   │   │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ ^ │ וּ │ הּ │  │   │       │ ⬅ │ ⬇ │ ⬆ │ ➡ │  │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │   │   │   │   │ ⏻ │       │ ⇇ │ ⇊ │ ⇈ │ ⇉ │   │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │   ├───┐           ┌───┤   │
      *           └───┤   ├───┐   ┌───┤   ├───┘
      *               └───┤   │   │   ├───┘
      *                   └───┘   └───┘
      * Ideas -
      *   Mouse Controls on the top row? May be better as its own layer.
      */
    [2] = LAYOUT_split_3x6_3(
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                 KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,  KC_NO,  KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                 KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_NO,  KC_NO,
                                       KC_NO,   KC_NO,  KC_NO,    KC_NO, KC_NO,   KC_NO
    ),

     /*
      * Layer 3 - @ Symbols
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ | │ ( │ * │ & │ ~ │       │   │   │   │   │   │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ " │ ^ │ % │ $ │ _ │       │   │  │ הּ │ וּ │ ^ │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │   │ # │ @ │ ! │ = │       │   │   │   │   │   │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │   ├───┐           ┌───┤   │
      *           └───┤   ├───┐   ┌───┤  ├───┘
      *               └───┤   │   │   ├───┘
      *                   └───┘   └───┘
      * Ideas -
      *   = here is not great, often need to use it with > which is a same
      *     key bigram on a different layer. Could replace with the ( which is
      *     rpreated and I have never used.
      *   | here is a bit out of the way, maybe it goes where = is now?
      *   Generally the placement of non-number shifts here are in these places
      *     because of symmetry with their non-shifted versions, but it may be
      *     better to pair them. I often think of them as paired. Proposing _
      *     under - on the right.
      *   Have also seen _ and - as combos because of the frequency of use,
      *     interesting idea.
      *   Could also do # layer plus shift for those... double finger holds?
      */
    [3] = LAYOUT_split_3x6_3(
        KC_NO, S(KC_BSLS), S(KC_9),  S(KC_8),  S(KC_7), S(KC_GRAVE),                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
        KC_NO, S(KC_QUOT), S(KC_6),  S(KC_5),  S(KC_4),  S(KC_MINS),                  KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LCMD, KC_NO,
        KC_NO,      KC_NO, S(KC_3),  S(KC_2),  S(KC_1),      KC_EQL,                  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                                                 KC_NO,       KC_NO,  KC_NO,   KC_NO, KC_NO,   KC_NO
    ),

     /*
      * Layer 4 -  Pairs
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │   │   │ { │ } │   │       │   │   │   │   │   │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │   │   │ ( │ ) │   │       │   │  │ הּ │ וּ │ ^ │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │   │ < │ [ │ ] │ > │       │   │   │   │   │   │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │   ├───┐           ┌───┤   │
      *           └───┤   ├───┐   ┌───┤   ├───┘
      *               └───┤   │   │  ├───┘
      *                   └───┘   └───┘
      * Ideas -
      *   < and > are a stretch, maybe move up a row? Both on the inside row?
      *   Very sparse.
      */
    [4] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO,      KC_NO, S(KC_LBRC), S(KC_RBRC),     KC_NO,                   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
        KC_NO, KC_NO,      KC_NO,    S(KC_9),    S(KC_0),     KC_NO,                   KC_NO, KC_LCTL, KC_LSFT, KC_LALT, KC_LCMD, KC_NO,
        KC_NO, KC_NO, S(KC_COMM),    KC_LBRC,    KC_RBRC, S(KC_DOT),                   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
                                                  KC_NO,      KC_NO,  KC_NO,    KC_NO, KC_NO,     KC_NO
    )
    /*
     * New layers:
     *  - Media: Music controls and volume
     *  - Mouse: Directions, accelerations, clicks
     *  - Function Keys: ?
     *
     *  - Copy/Paste/Cut/Undo/Redo (Vim copy?)
     */
};

