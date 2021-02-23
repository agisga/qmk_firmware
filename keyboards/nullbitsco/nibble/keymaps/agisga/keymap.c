/* Copyright 2020 Jay Greco
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

#define _MA 0
#define _FN 1

enum custom_keycodes {
  KC_CUST = SAFE_RANGE,
  KC_NEWLINE,
  KC_ELLIPSIS,
  KC_PQUESTION,
  AUTOCLOS_PAREN,
  AUTOCLOS_SQBRA,
  AUTOCLOS_CURLYBRA,
  AUTOCLOS_QUOTE,
  LATEX_PAREN,
  LATEX_SQBRA,
  LATEX_CURLYBRA,
  LATEX_SUM,
  LATEX_PROD,
  LATEX_INT,
  LATEX_NORM,
  LATEX_R,
  LATEX_N,
  LATEX_Z,
  LATEX_FRAC,
  LATEX_BOLD,
  LATEX_BOLDSYMBOL,
  LATEX_MATHRM,
  LATEX_MATHCAL,
  LATEX_SUP,
  LATEX_SUB,
  LATEX_ALPHA,
  LATEX_BETA,
  LATEX_EPS,
  LATEX_LAM,
  LATEX_GAM,
  LATEX_PHI,
  LATEX_XI
};

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ansi(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_ESC,
            KC_MUTE, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
            KC_NO, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP,
            TG(2), KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN,
            KC_INS, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
	[1] = LAYOUT_ansi(RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_PSCR,
            RGB_TOG, LGUI(LCTL(KC_RGHT)), LALT(KC_F4), KC_TRNS, LCTL(KC_RGHT), AUTOCLOS_SQBRA, KC_TRNS, LCTL(KC_INS), KC_TRNS, KC_HOME, KC_NEWLINE, LSFT(KC_INS), KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,
            KC_TRNS, KC_TRNS, KC_END, LCTL(KC_S), KC_DEL, AUTOCLOS_PAREN, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, AUTOCLOS_QUOTE, KC_EQL, KC_HOME,
            KC_TRNS, LGUI(LCTL(KC_LEFT)), KC_TRNS, KC_TRNS, KC_TRNS, AUTOCLOS_CURLYBRA, LCTL(KC_LEFT), KC_TRNS, KC_MENU, KC_TRNS, KC_ELLIPSIS, KC_PQUESTION, KC_TRNS, KC_PGUP, KC_END,
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_TRNS, KC_APP, KC_TRNS, LCTL(KC_LEFT), KC_PGDN, LCTL(KC_RGHT)),
	[2] = LAYOUT_ansi(KC_GRV, LATEX_BOLD, LATEX_BOLDSYMBOL, LATEX_MATHRM, LATEX_MATHCAL, KC_5, LATEX_SUP, KC_7, LATEX_PROD, LATEX_PAREN, LATEX_PAREN, LATEX_SUB, LATEX_SUM, KC_BSPC, KC_ESC,
            KC_MUTE, KC_TAB, KC_Q, KC_W, LATEX_EPS, LATEX_R, KC_T, KC_Y, KC_U, LATEX_INT, KC_O, KC_P, LATEX_SQBRA, LATEX_CURLYBRA, LATEX_NORM, KC_DEL,
            KC_NO, KC_CAPS, LATEX_ALPHA, KC_S, KC_D, LATEX_PHI, LATEX_GAM, KC_H, KC_J, KC_K, LATEX_LAM, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP,
            KC_TRNS, KC_LSFT, LATEX_Z, LATEX_XI, KC_C, KC_V, LATEX_BETA, LATEX_N, KC_M, KC_COMM, KC_DOT, LATEX_FRAC, KC_RSFT, KC_UP, KC_PGDN,
            KC_INS, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(1), KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT)
};
/* 
 * END
 */

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // Send keystrokes to host keyboard, if connected (see readme)
  process_record_remote_kb(keycode, record);
  switch(keycode) {
    case KC_CUST: //custom macro
      if (record->event.pressed) {
      }
    break;
          
    case KC_NEWLINE:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING(SS_TAP(X_END) SS_TAP(X_ENT));
      }
      break;
          
    case KC_ELLIPSIS:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("(...)");
      }
      break;

    case KC_PQUESTION:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("(?)");
      }
      break;

    case AUTOCLOS_PAREN:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("()" SS_TAP(X_LEFT));
      }
      break;
      
    case AUTOCLOS_SQBRA:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("[]" SS_TAP(X_LEFT));
      }
      break;
      
    case AUTOCLOS_CURLYBRA:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("{}" SS_TAP(X_LEFT));
      }
      break;
      
    case AUTOCLOS_QUOTE:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\"\"" SS_TAP(X_LEFT));
      }
      break;
          
    case LATEX_PAREN:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\left(\\right)" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
      }
      break;
      
    case LATEX_SQBRA:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\left[\\right]" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
      }
      break;
      
    case LATEX_CURLYBRA:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\left\\{\\right\\}" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
      }
      break;

    case LATEX_SUM:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\sum_{}^{}" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
      }
      break;

    case LATEX_PROD:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\prod_{}^{}" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
      }
      break;

    case LATEX_INT:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\int_{}^{}" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
      }
      break;

    case LATEX_FRAC:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\frac{}{}" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
      }
      break;

    case LATEX_BOLD:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\mathbf{}" SS_TAP(X_LEFT));
      }
      break;

    case LATEX_BOLDSYMBOL:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\boldsymbol{}" SS_TAP(X_LEFT));
      }
      break;

    case LATEX_MATHRM:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\mathrm{}" SS_TAP(X_LEFT));
      }
      break;

    case LATEX_MATHCAL:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\mathcal{}" SS_TAP(X_LEFT));
      }
      break;

    case LATEX_SUP:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("^{}" SS_TAP(X_LEFT));
      }
      break;

    case LATEX_SUB:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("_{}" SS_TAP(X_LEFT));
      }
      break;

    case LATEX_NORM:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\left\\|\\right\\|" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT));
      }
      break;

    case LATEX_R:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\mathbb{R}");
      }
      break;

    case LATEX_N:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\mathbb{N}");
      }
      break;

    case LATEX_Z:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\mathbb{Z}");
      }
      break;

    case LATEX_ALPHA:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\alpha");
      }
      break;


    case LATEX_BETA:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\beta");
      }
      break;


    case LATEX_EPS:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\varepsilon");
      }
      break;


    case LATEX_LAM:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\lambda");
      }
      break;


    case LATEX_GAM:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\gamma");
      }
      break;


    case LATEX_PHI:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\varphi");
      }
      break;


    case LATEX_XI:
      if (record->event.pressed) {
          // when keycode is pressed
          SEND_STRING("\\xi");
      }
      break;

    case RM_1: //remote macro 1
      if (record->event.pressed) {
      }
    break;

    case RM_2: //remote macro 2
      if (record->event.pressed) {
      }
    break;

    case RM_3: //remote macro 3
      if (record->event.pressed) {
      }
    break;

    case RM_4: //remote macro 4
      if (record->event.pressed) {
      }
    break;
    
  }
return true;
}

// RGB config, for changing RGB settings on non-VIA firmwares
void change_RGB(bool clockwise) {
    bool shift = get_mods() & MOD_MASK_SHIFT;
    bool alt = get_mods() & MOD_MASK_ALT;
    bool ctrl = get_mods() & MOD_MASK_CTRL;

    if (clockwise) {
        if (alt) {
            rgblight_increase_hue();
        } else if (ctrl) {
            rgblight_increase_val();
        } else if (shift) {
            rgblight_increase_sat();
        } else {
            rgblight_step();
        }

  } else {
      if (alt) {
            rgblight_decrease_hue();
        } else if (ctrl) {
            rgblight_decrease_val();
        } else if (shift) {
            rgblight_decrease_sat();
        } else {
            rgblight_step_reverse();
        }
    } 
}

void encoder_update_kb(uint8_t index, bool clockwise) {
  if (layer_state_is(1)) {
    //change RGB settings
    change_RGB(clockwise);
  }
  else {
    if (clockwise) {
      tap_code(KC_VOLU);
  } else {
      tap_code(KC_VOLD);
    }  
  }
}

void matrix_init_user(void) {
  // Initialize remote keyboard, if connected (see readme)
  matrix_init_remote_kb();
}

void matrix_scan_user(void) {
  // Scan and parse keystrokes from remote keyboard, if connected (see readme)
  matrix_scan_remote_kb();
}
