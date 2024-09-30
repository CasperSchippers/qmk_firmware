/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "action_layer.h"
#include "color.h"
#include QMK_KEYBOARD_H
#include "keychron_common.h"

#include "print.h"

enum layers{
    WIN_BASE,
    BASE,
    WIN_FN1,
    FN1,
    FN2,
    FN3,
};
    
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [WIN_BASE] = LAYOUT_69_ansi(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN,  KC_LALT,           KC_SPC,           MO(WIN_FN1), MO(FN2),       KC_SPC,            KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT),

    [BASE] = LAYOUT_69_ansi(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        KC_LCTL, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,              KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     MO(FN2), KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN,  KC_LALT,           MO(FN1),          MO(FN2),     MO(FN1),       KC_SPC,            KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT),

    [WIN_FN1] = LAYOUT_69_ansi(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_TASK, KC_FILE, RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          RGB_TOG,
        _______, BT_HST1,  BT_HST2,  BT_HST3, P2P4G,   _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          KC_INS,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI,           _______, _______, _______, _______,  _______,  _______,  _______,          KC_END,
        _______,           RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,  _______, NK_TOGG, _______, _______,  _______,  _______,  _______, KC_PGUP,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, KC_PGDN, _______),

    [FN1] = LAYOUT_69_ansi(
        KC_GRV,  KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL,           RGB_TOG,
        _______, BT_HST1,  BT_HST2,  BT_HST3, P2P4G,   XXXXXXX, KC_PGUP,  KC_HOME, KC_UP,   KC_END,  KC_DEL,   XXXXXXX,  XXXXXXX,  XXXXXXX,          KC_INS,
        _______, KC_CAPS,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,           KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,  XXXXXXX,  XXXXXXX,  _______,          KC_END,
        _______,           XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_BSPC, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  _______, KC_PGUP,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            XXXXXXX, KC_PGDN, XXXXXXX),

    [FN2] = LAYOUT_69_ansi(
        _______, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_P7,   KC_P8,   KC_P9,   KC_P0,    KC_PMNS,  KC_PPLS,  _______,          _______,
        _______, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_P4,   KC_P5,   KC_P6,   XXXXXXX,  KC_PSLS,  KC_PAST,  XXXXXXX,          _______,
        _______, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, KC_P1,   KC_P2,   KC_P3,    XXXXXXX,  XXXXXXX,  _______,          QK_MAKE,
        _______,           XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, KC_PCMM,  KC_PDOT,  XXXXXXX,  _______, QK_BOOT,
        _______, _______,  _______,           _______,          _______,  _______,          KC_P0,             _______,            DB_TOGG, QK_RBT,  EE_CLR ),

    [FN3] = LAYOUT_69_ansi(
        _______, _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, _______,  _______,  _______, _______, _______, _______,  _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, _______,  _______,  _______, _______, _______,           _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______,           _______,  _______, _______, _______, BAT_LVL,  BAT_LVL, _______, _______, _______,  _______,  _______,  _______, _______,
        _______, _______,  _______,           _______,          _______,  _______,          _______,           _______,            _______, _______, _______),

};

#if defined(ENCODER_MAP_ENABLE)
    const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
        [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
        [BASE] = {ENCODER_CCW_CW(C(KC_DOWN), C(KC_UP))},
        [WIN_FN1]  = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
        [FN1]      = {ENCODER_CCW_CW(_______, _______)},
        [FN2]      = {ENCODER_CCW_CW(_______, _______)},
        [FN3]      = {ENCODER_CCW_CW(_______, _______)},
    };
#endif // ENCODER_MAP_ENABLE

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    HSV hsv = (HSV){HSV_OFF};

    if (layer_state_is(FN1)) {
        hsv = (HSV){HSV_CYAN};
    } else if (layer_state_is(FN2)) {
        hsv = (HSV){HSV_RED};
    }

    if (hsv.v > rgb_matrix_get_val()) {
        hsv.v = rgb_matrix_get_val();
    }
    RGB rgb = hsv_to_rgb(hsv);

    for (uint8_t i = led_min; i < led_max; i++) {
        if (HAS_FLAGS(g_led_config.flags[i], 0x04)) { // 0x01 == LED_FLAG_MODIFIER
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }

    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(29, RGB_CYAN);
    }

    rgb_matrix_set_color(0, RGB_WHITE);

    return false;
}



// void keyboard_post_init_user(void) {
//     rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
//     rgb_matrix_sethsv_noeeprom(HSV_OFF);
// }

// void matrix_init_user(void) { // Runs boot tasks for keyboard
//     // rgblight_enable();
//     // rgblight_sethsv(0,255,255);
//     // rgblight_mode(3);
//     // print("string");
//     rgb_matrix_sethsv_noeeprom(HSV_CYAN);
// };

// void keyboard_post_init_user(void) {
//   rgblight_enable_noeeprom();
//   rgblight_sethsv_noeeprom(100, 255, 255); // or even sth. like rgblight_sethsv_noeeprom(HSV_TEAL);
// }