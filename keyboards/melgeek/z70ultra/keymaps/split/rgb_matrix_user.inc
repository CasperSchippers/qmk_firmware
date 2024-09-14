// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(MOD_LAYER)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

// Number of helper functions
static void set_color_modifiers(uint8_t r, uint8_t g, uint8_t b) {
  rgb_matrix_set_color(44, r, g, b);
  rgb_matrix_set_color(58, r, g, b);
  rgb_matrix_set_color(59, r, g, b);
  rgb_matrix_set_color(60, r, g, b);
  rgb_matrix_set_color(64, r, g, b);
  rgb_matrix_set_color(55, r, g, b);
}

// e.g: A simple effect, self-contained within a single method
static bool MOD_LAYER(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  rgb_matrix_set_color_all(RGB_OFF);
  set_color_modifiers(RGB_CYAN);

  rgb_matrix_set_color(23, RGB_YELLOW);
  rgb_matrix_set_color(37, RGB_YELLOW);
  rgb_matrix_set_color(38, RGB_YELLOW);
  rgb_matrix_set_color(39, RGB_YELLOW);

  return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS