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
//#include QMK_KEYBOARD_H
//#include "bitc_led.h"

// Use Bit-C LED to show CAPS LOCK status
//bool led_update_kb(led_t led_state) {
//    bool res = led_update_user(led_state);
//    if (res) {
//        set_bitc_LED(led_state.caps_lock ? LED_DIM : LED_OFF);
//    }
//    return res;
//}


// ---
// The following is based on: https://gist.github.com/jaygreco/a65328cbf32819f05ec0d86e33e41d69

// The following example shows caps lock status using the big LED instead of the Bit-C LED.
// Add this to the existing code in nibble.c, or in the keymap.c file.
// Uncomment the commented lines to restore bit-c LED (disabled in this example by default)

// Import the Big LED code at the top of the file
#include QMK_KEYBOARD_H
#include "bitc_led.h"
#include "big_led.h"


bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if (res) {
        // This function is a defult QMK function.
        // It checks the status of CAPS/NUM/SCROLL lock.
        // Use Big LED to show CAPS LOCK status
        set_big_LED_r(led_state.caps_lock ? LED_ON : LED_OFF);
        
        if (layer_state_is(1)) {
            set_bitc_LED(LED_DIM);
        }
        else if (layer_state_is(2)) {
            set_big_LED_b(LED_ON);
        }
        else if (layer_state_is(3)) {
            set_big_LED_g(LED_ON);
        }
        else {
            set_bitc_LED(LED_OFF);
            set_big_LED_g(LED_OFF);
            set_big_LED_b(LED_OFF);
        }
    }
    return res;
}


// another way, based on https://github.com/qmk/qmk_firmware/issues/2862
// My layer names
//#define _MAIN_L 0
//#define _FUNC_L 1
//#define _NAV_L 2
//
//uint32_t layer_state_set_user(uint32_t state) {
//  switch (biton32(state)) {
//    case _MAIN_L:
//      set_big_LED_g(LED_OFF);
//      set_big_LED_b(LED_OFF);
//      break;
//    case _FUNC_L:
//      set_big_LED_g(LED_ON);
//      break;
//    case _NAV_L:
//      set_big_LED_b(LED_ON);
//      break;
//  }
//  return state;
//}
