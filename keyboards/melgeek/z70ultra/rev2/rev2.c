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

#include "quantum.h"
#ifdef RGB_MATRIX_ENABLE
const is31_led PROGMEM g_is31_leds[RGB_MATRIX_LED_COUNT] = {
    {0, CS28_SW1, CS30_SW1, CS29_SW1}, /* RGB10 */
    {0, CS28_SW2, CS30_SW2, CS29_SW2}, /* RGB11 */
    {0, CS28_SW3, CS30_SW3, CS29_SW3}, /* RGB12 */
    {0, CS28_SW4, CS30_SW4, CS29_SW4}, /* RGB13 */
    {0, CS28_SW5, CS30_SW5, CS29_SW5}, /* RGB14 */
    {0, CS28_SW6, CS30_SW6, CS29_SW6}, /* RGB15 */
    {0, CS28_SW7, CS30_SW7, CS29_SW7}, /* RGB16 */
    {0, CS28_SW8, CS30_SW8, CS29_SW8}, /* RGB17 */
    {0, CS28_SW9, CS30_SW9, CS29_SW9}, /* RGB18 */
    {0, CS31_SW1, CS33_SW1, CS32_SW1}, /* RGB28 */
    {0, CS31_SW2, CS33_SW2, CS32_SW2}, /* RGB29 */
    {0, CS31_SW3, CS33_SW3, CS32_SW3}, /* RGB30 */
    {0, CS31_SW4, CS33_SW4, CS32_SW4}, /* RGB31 */
    {0, CS31_SW5, CS33_SW5, CS32_SW5}, /* RGB32 */
    {0, CS31_SW6, CS33_SW6, CS32_SW6}, /* RGB33 */

    {0, CS25_SW1, CS27_SW1, CS26_SW1}, /* RGB1 */
    {0, CS25_SW2, CS27_SW2, CS26_SW2}, /* RGB2 */
    {0, CS25_SW3, CS27_SW3, CS26_SW3}, /* RGB3 */
    {0, CS25_SW4, CS27_SW4, CS26_SW4}, /* RGB4 */
    {0, CS25_SW5, CS27_SW5, CS26_SW5}, /* RGB5 */
    {0, CS25_SW6, CS27_SW6, CS26_SW6}, /* RGB6 */
    {0, CS25_SW7, CS27_SW7, CS26_SW7}, /* RGB7 */
    {0, CS25_SW8, CS27_SW8, CS26_SW8}, /* RGB8 */
    {0, CS25_SW9, CS27_SW9, CS26_SW9}, /* RGB9 */
    {0, CS34_SW1, CS36_SW1, CS35_SW1}, /* RGB46 */
    {0, CS34_SW2, CS36_SW2, CS35_SW2}, /* RGB47 */
    {0, CS34_SW3, CS36_SW3, CS35_SW3}, /* RGB48 */
    {0, CS34_SW4, CS36_SW4, CS35_SW4}, /* RGB49 */
    {0, CS34_SW5, CS36_SW5, CS35_SW5}, /* RGB50 */
    {0, CS31_SW7, CS33_SW7, CS32_SW7}, /* RGB34 */

    {0, CS22_SW1, CS24_SW1, CS23_SW1}, /* RGB37 */
    {0, CS22_SW2, CS24_SW2, CS23_SW2}, /* RGB38 */
    {0, CS22_SW3, CS24_SW3, CS23_SW3}, /* RGB39 */
    {0, CS22_SW4, CS24_SW4, CS23_SW4}, /* RGB40 */
    {0, CS22_SW5, CS24_SW5, CS23_SW5}, /* RGB41 */
    {0, CS22_SW6, CS24_SW6, CS23_SW6}, /* RGB42 */
    {0, CS22_SW7, CS24_SW7, CS23_SW7}, /* RGB43 */
    {0, CS22_SW8, CS24_SW8, CS23_SW8}, /* RGB44 */
    {0, CS22_SW9, CS24_SW9, CS23_SW9}, /* RGB45 */
    {0, CS34_SW9, CS36_SW9, CS35_SW9}, /* RGB54 */
    {0, CS34_SW8, CS36_SW8, CS35_SW8}, /* RGB53 */
    {0, CS34_SW7, CS36_SW7, CS35_SW7}, /* RGB52 */
    {0, CS34_SW6, CS36_SW6, CS35_SW6}, /* RGB51 */
    {0, CS31_SW8, CS33_SW8, CS32_SW8}, /* RGB35 */

    {0, CS19_SW2, CS21_SW2, CS20_SW2}, /* RGB56 */
    {0, CS19_SW4, CS21_SW4, CS20_SW4}, /* RGB58 */
    {0, CS19_SW5, CS21_SW5, CS20_SW5}, /* RGB59 */
    {0, CS19_SW6, CS21_SW6, CS20_SW6}, /* RGB60 */
    {0, CS19_SW7, CS21_SW7, CS20_SW7}, /* RGB61 */
    {0, CS19_SW8, CS21_SW8, CS20_SW8}, /* RGB62 */
    {0, CS19_SW9, CS21_SW9, CS20_SW9}, /* RGB63 */
    {0, CS19_SW3, CS21_SW3, CS20_SW3}, /* RGB57 */
    {0, CS19_SW1, CS21_SW1, CS20_SW1}, /* RGB55 */
    {0, CS37_SW5, CS39_SW5, CS38_SW5}, /* RGB23 */
    {0, CS37_SW6, CS39_SW6, CS38_SW6}, /* RGB24 */
    {0, CS37_SW7, CS39_SW7, CS38_SW7}, /* RGB25 */
    {0, CS37_SW8, CS39_SW8, CS38_SW8}, /* RGB26 */
    {0, CS31_SW9, CS33_SW9, CS32_SW9}, /* RGB36 */

    {0, CS6_SW1, CS8_SW1, CS7_SW1},    /* RGB64 */
    {0, CS6_SW3, CS8_SW3, CS7_SW3},    /* RGB66 */
    {0, CS6_SW4, CS8_SW4, CS7_SW4},    /* RGB67 */
    {0, CS6_SW5, CS8_SW5, CS7_SW5},    /* RGB69 */
    {0, CS6_SW6, CS8_SW6, CS7_SW6},    /* RGB70 */
    {0, CS6_SW2, CS8_SW2, CS7_SW2},    /* RGB65 */
    {0, CS37_SW1, CS39_SW1, CS38_SW1}, /* RGB19 */
    {0, CS37_SW2, CS39_SW2, CS38_SW2}, /* RGB20 */
    {0, CS37_SW3, CS39_SW3, CS38_SW3}, /* RGB21 */
    {0, CS37_SW4, CS39_SW4, CS38_SW4}, /* RGB22 */
    {0, CS37_SW9, CS39_SW9, CS38_SW9}, /* RGB27 */
};
led_config_t g_led_config = {
    {
    /*    C0      C1      C2      C3      C4      C5      C6      C7      C8      C9     C10      C11     C12     C13     C14              */
    /*    10      11      12      13      14      15      16      17      18      28      29      30      31      32      33            R0 */
        {  0,      1,      2,      3,     4,       5,      6,      7,      8,      9,     10,     11,     12,     13,     14,     }, /* R0 */
    /*     1       2       3       4       5       6       7       8       9      46      47      48      49      40      34            R1 */
        { 15,     16,     17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     29,     }, /* R1 */
    /*    37      38      39      40      41      42      43      44      45      54      53      52              51      26            R2 */
        { 30,     31,     32,     33,     34,     35,     36,     37,     38,     39,     40,     41,     NO_LED, 42,     56,     }, /* R2 */
    /*    56              58      59      60      61      62      63      57      55      23      24      25      27      35            R3 */
        { 44,     NO_LED, 45,     46,     47,     48,     49,     50,     51,     52,     53,     54,     55,     68,     43,     }, /* R3 */
    /*    64      66      67              69      70      65                      19      20              21      22      36            R4 */
        { 58,     59,     60,     NO_LED, 61,     62,     63,     NO_LED, NO_LED, 64,     65,     NO_LED, 67,     66,     57,     }, /* R4 */
    }, {
        {0,  0},  {16,  0},  {32,  0}, {48,  0}, {64,  0},  {80,  0},  {96,  0}, {112,  0}, {128,  0}, {144,  0}, {160,  0}, {176,  0}, {192,  0}, {216,  0}, {240,  0},
		{4, 16},  {24, 16},  {40, 16}, {56, 16}, {72, 16},  {88, 16}, {104, 16}, {120, 16}, {136, 16}, {152, 16}, {168, 16}, {184, 16}, {200, 16}, {220, 16}, {240, 16},
		{6, 32},  {28, 32},  {44, 32}, {60, 32}, {76, 32},  {92, 32}, {108, 32}, {124, 32}, {140, 32}, {156, 32}, {172, 32}, {188, 32},            {214, 32}, {240, 32},
		{10, 48}, {36, 48},  {52, 48}, {68, 48}, {84, 48}, {100, 48}, {116, 48}, {132, 48}, {148, 48}, {164, 48}, {180, 48},            {202, 48}, {224, 48}, {240, 48},
		{2, 64},  {22, 64},  {42, 64},           {74, 64},  {98, 64}, {122, 64},                       {158, 64}, {176, 64},            {208, 64}, {224, 64}, {240, 64},
	}, {
	       4,       4,         4,        4,        4,        4,        4,        4,          4,         4,         4,          4,        4,         4,
		   4,       4,         4,        4,        4,        4,        4,        4,          4,         4,         4,          4,        4,         4,
		   4,       4,         4,        4,        4,        4,        4,        4,          4,         4,         4,          4,                   4,
		   4,                  4,        4,        4,        4,        4,        4,          4,         4,         4,          4,        4,
		   4,       4,         4,                  4,        4,        4,                               4,         4,
		                                                               4,        4,          4,         4,         4,          4,        4,         4,
	}
};

const is31_led g_is31_indicator_leds[6] = {
    {0, CS5_SW1, CS3_SW1, CS4_SW1}, /* RGB71 */
    {0, CS5_SW2, CS3_SW2, CS4_SW2}, /* RGB72 */
    {0, CS5_SW3, CS3_SW3, CS4_SW3}, /* RGB73 */
    {0, CS5_SW4, CS3_SW4, CS4_SW4}, /* RGB74 */
    {0, CS5_SW5, CS3_SW5, CS4_SW5}, /* RGB75 */
    {0, CS5_SW6, CS3_SW6, CS4_SW6}, /* RGB76 */
};

bool led_update_kb(led_t led_state) {
    if (led_update_user(led_state)) {
        if (led_state.caps_lock) {
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[2], 0xff, 0x00, 0x00);
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[3], 0xff, 0x00, 0x00);
        } else {
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[2], 0x00, 0x00, 0x00);
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[3], 0x00, 0x00, 0x00);
        }

        if (led_state.num_lock) {
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[1], 0x00, 0xff, 0x00);
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[4], 0x00, 0xff, 0x00);
        } else {
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[1], 0x00, 0x00, 0x00);
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[4], 0x00, 0x00, 0x00);
        }

        if (led_state.scroll_lock) {
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[0], 0x00, 0x00, 0xff);
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[5], 0x00, 0x00, 0xff);
        } else {
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[0], 0x00, 0x00, 0x00);
            is31fl3741_set_pwm_buffer(&g_is31_indicator_leds[5], 0x00, 0x00, 0x00);
        }
    }
    return true;
}

void matrix_init_kb(void) {
    for (int i = 0; i < DRIVER_INDICATOR_LED_TOTAL; ++i) {
        is31_led led = g_is31_indicator_leds[i];
        is31fl3741_set_scaling_registers(&led, 0xFF, 0xFF, 0xFF);
    }

    is31fl3741_update_led_control_registers(DRIVER_ADDR_1, 0);

    matrix_init_user();
}
#endif
