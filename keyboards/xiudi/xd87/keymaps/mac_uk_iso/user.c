#include QMK_KEYBOARD_H

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool led_update_user(led_t led_state) {
    if (led_state.caps_lock) {
      breathing_enable();
    }
    else {
      breathing_disable();
    }
    return true;
}

void keyboard_post_init_user(void) {
  // rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_MOOD);
}
