/* Copyright 2020 MelGeek <melgeek001365@gmail.com>
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

#include QMK_KEYBOARD_H

// #ifdef RGBLIGHT_ENABLE
// //Following line allows macro to read current RGB settings
// extern rgblight_config_t rgblight_config;
// #endif

#define _QWERTY 0
#define _MOD_LSB 1
#define _MOD_FN 2
#define _MOD_CAPS 3




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { 
    [_QWERTY] = LAYOUT_ansi_split_space( /* Base */
        QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,               MO(1),                    KC_SPC,                KC_RALT,   MO(2), KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_MOD_LSB] = LAYOUT_ansi_split_space( /* left space-bar */
        KC_GRV,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME,   KC_UP,  KC_END,  KC_DEL, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,          XXXXXXX, _______,
        _______,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______,
        _______, _______, _______,                   XXXXXXX,          KC_BSPC,                   _______, _______, _______, _______, _______
    ),
    [_MOD_FN] = LAYOUT_ansi_split_space( /* FN */
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  _______,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, KC_PSCR, KC_SCRL, KC_PAUS, QK_BOOT, _______,
        _______, RGB_SPI, RGB_SPD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          EE_CLR,  _______,
        _______,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, NK_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_VOLU, _______,
        _______, _______, _______,                   XXXXXXX,          XXXXXXX,                   _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [_MOD_CAPS] = LAYOUT_ansi_split_space( /* numpad */
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, _______,
        _______,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,
        _______, _______, _______,                   _______,          _______,                   _______, _______, _______, _______, _______
    )
};


        // _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,
        // _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        // _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, _______,
        // _______,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,
        // _______, _______, _______,                   _______,          _______,                   _______, _______, _______, _______, _______


/* 
 * RGB custom lighting section
 * 
 */

// void eeconfig_init_user(void) {  // EEPROM is getting reset!
//   // use the non noeeprom versions, to write these values to EEPROM too
//   rgblight_enable(); // Enable RGB by default
//   rgblight_sethsv_white();  // Set it to white by default
//   rgblight_mode(RGBLIGHT_MODE_BREATHING); // set to breathing by default
// }

layer_state_t layer_state_set_user(layer_state_t state) {
  switch(biton32(state)) {
  case _MOD_LSB:
    rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_MOD_LAYER);
    // rgb_matrix_sethsv_noeeprom(HSV_BLACK);

    // rgb_matrix_set_color(1, 255, 255, 255);
    break;
  case _MOD_FN:
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_RED);
    break;
  case _MOD_CAPS:
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_BLUE);
    break;
  default:
    // Default colors
    rgb_matrix_mode_noeeprom(RGB_MATRIX_GRADIENT_LEFT_RIGHT);
    rgb_matrix_sethsv_noeeprom(HSV_RED);
    break;
  }
  return state;
}
