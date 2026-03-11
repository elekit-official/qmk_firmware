// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    MYHELLO = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case MYHELLO:
        if (record->event.pressed) {
            // when keycode MYHELLO is pressed
            SEND_STRING("HELLO");
        } else {
            // when keycode MYHELLO is released
        }
        break;
    }
    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
	LCTL(KC_KP_MINUS),    LCTL(KC_KP_PLUS),    KC_MUTE,
        MYHELLO,    LCTL(KC_X),    LCTL(KC_C),    LCTL(KC_V),
        KC_NO, KC_NO
    ),
    [1] = LAYOUT(
	_______,    _______,    _______,
        _______,    _______,    _______,    _______,
        KC_NO, KC_NO
    ),
    [2] = LAYOUT(
	_______,    _______,    _______,
        _______,    _______,    _______,    _______,
        KC_NO, KC_NO
    ),
    [3] = LAYOUT(
	_______,    _______,    _______,
        _______,    _______,    _______,    _______,
        KC_NO, KC_NO
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [2] =   { ENCODER_CCW_CW(KC_NO, KC_NO) },
    [3] =   { ENCODER_CCW_CW(KC_NO, KC_NO) }
};
#endif