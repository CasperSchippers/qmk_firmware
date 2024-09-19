/* Copyright 2021 Mikael Manukyan <arm.localhost@gmail.com>
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
#pragma once

#include "quantum.h"

#ifdef RGB_MATRIX_LEDMAPS_ENABLED

// no association keycode
#    define XXX \
        { 0, 0, 0 }

// clang-format off
// ______, ______,  ______,  ______, ______, ______, ______,  ______, ______, ______, ______,  ______,  ______,  ______,
// ______, ______,  ______,  ______, ______, ______, ______,  ______, ______, ______, ______,  ______,  ______,  ______,         ______,
// ______, ______,  ______,  ______, ______, ______,          ______, ______, ______, ______,  ______,  ______,  ______,         ______,
// ______,          ______,  ______, ______, ______, ______,  ______, ______, ______, ______,  ______,  ______,  ______, ______,
// ______, ______,  ______,          ______,         ______,  ______,         ______,          ______,           ______, ______, ______
#   define RGB_MATRIX_LAYOUT_LEDMAP( \
        kesc, k1,   k2,   k3,   k4,   k5,   k6,   k7,   k8,   k9,   k0,   kpls, kmin, kbsp,             \
        ktab, kq,   kw,   ke,   kr,   kt,   ky,   ku,   ki,   ko,   kp,   kbrl, kbrr, kbsl,       kdel, \
        kcps, ka,   ks,   kd,   kf,   kg,         kh,   kj,   kk,   kl,   kcol, kapo, kent,       khom, \
        klsh,       kz,   kx,   kc,   kv,   kb,   klck, kn,   km,   kcom, kdot, ksls, krsh, kup,        \
        kctr, kwin, kalt,       kspl,       kfn1, kfn2,       kspr,       ksup,       klft, kdwn, krgt  \
    ) \
    { \
        kesc, k1,   k2,   k3,   k4,   k5,   k6,   k7,   k8,   k9,   k0,   kpls, kmin, kbsp,             \
        ktab, kq,   kw,   ke,   kr,   kt,   ky,   ku,   ki,   ko,   kp,   kbrl, kbrr, kbsl,       kdel, \
        kcps, ka,   ks,   kd,   kf,   kg,         kh,   kj,   kk,   kl,   kcol, kapo, kent,       khom, \
        klsh,       kz,   kx,   kc,   kv,   kb,   klck, kn,   km,   kcom, kdot, ksls, krsh, kup,        \
        kctr, kwin, kalt,       kspl,       kfn1, kfn2,       kspr,       ksup,       klft, kdwn, krgt  \
    }
// clang-format on
typedef uint8_t ledmap[RGB_MATRIX_LED_COUNT][3];
extern const ledmap ledmaps[];

void set_layer_rgb(uint8_t led_min, uint8_t led_max, int layer);

void rgb_matrix_layers_enable(void);
void rgb_matrix_layers_disable(void);

// Just a handy defines to make our ledmaps look better
#    define RED \
        { HSV_RED }
#    define CORAL \
        { HSV_CORAL }
#    define ORANGE \
        { HSV_ORANGE }
#    define GOLDEN \
        { HSV_GOLDENROD }
#    define GOLD \
        { HSV_GOLD }
#    define YELLOW \
        { HSV_YELLOW }
#    define CHART \
        { HSV_CHARTREUSE }
#    define GREEN \
        { HSV_GREEN }
#    define SPRING \
        { HSV_SPRINGGREEN }
#    define TURQ \
        { HSV_TURQUOISE }
#    define TEAL \
        { HSV_TEAL }
#    define CYAN \
        { HSV_CYAN }
#    define AZURE \
        { HSV_AZURE }
#    define BLUE \
        { HSV_BLUE }
#    define PURPLE \
        { HSV_PURPLE }
#    define MAGENT \
        { HSV_MAGENTA }
#    define PINK \
        { HSV_PINK }
#    define BLACK \
        { HSV_BLACK }

#endif  // RGB_MATRIX_LEDMAPS_ENABLED

void rgb_matrix_indicators_keymap(void);
void rgb_matrix_indicators_advanced_keymap(uint8_t led_min, uint8_t led_max);
