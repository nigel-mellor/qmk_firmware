#include QMK_KEYBOARD_H
#include "config.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool led_update_user(led_t led_state) {
  static bool savedCapsLock = 0;
  static uint8_t savedBacklightLevel = BACKLIGHT_DEFAULT_LEVEL;

  if (led_state.caps_lock != savedCapsLock) {
    savedCapsLock = led_state.caps_lock;
    if (led_state.caps_lock) {
      savedBacklightLevel = get_backlight_level();
      if (savedBacklightLevel > 1) {
        backlight_level_noeeprom(1);
      }
    }
    else {
      if (savedBacklightLevel != get_backlight_level()) {
        backlight_level_noeeprom(savedBacklightLevel);
      }
    }
  }
  return true;
}

void keyboard_post_init_user(void) {
  // rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_MOOD);
}
