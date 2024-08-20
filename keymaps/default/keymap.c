// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐
     * │5 6│ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │7 8│ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │910│ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │1314│ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │2221│
     * └───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_5x5(
        TO(0),    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    TO(1),    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    TO(2),    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_MINUS,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_EQUAL
    ),
    [1] = LAYOUT_ortho_5x5(
        TO(0),    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    TO(1),    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    TO(2),    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_MS_BTN1,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_MS_BTN2
    ),
    [2] = LAYOUT_ortho_5x5(
        TO(0),    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    TO(1),    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    TO(2),    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_F23,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_F24
    )
};
