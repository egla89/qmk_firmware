/*
Copyright 2019 Sebastian Spindler <sebastian.spindler@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "keymap_extras/keymap_german.h"

//Layer renaming
#define _DL  0                     //default
#define _FUN 1                     //function layer

//Keymapping renaming
#define ______  KC_TRNS            //renaming KC_TRNS for readability in keymaps
#define RGB_MI  RGB_MODE_FORWARD   //increase RGB mode
#define RGB_MD  RGB_MODE_REVERSE   //decrease RGB mode
#define RGB_ST  RGB_M_P            //rgb static


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DL] = LAYOUT(
      KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,      KC_5,    KC_6,    KC_7,   KC_8,    KC_9, KC_0,   DE_SS,   DE_ACUT, ______, KC_BSPC,   \
      KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,      KC_T,    KC_Y,    KC_U,   KC_I,    KC_O, KC_P,   DE_UE,   DE_PLUS,          ______,   \
      KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,      KC_G,    KC_H,    KC_J,   KC_K,    KC_L, DE_OE,  DE_AE,   DE_HASH,          KC_ENT,   \
      KC_LSFT, KC_GRAVE, KC_Z,    KC_X,   KC_C,      KC_V,    KC_B,    KC_N,   KC_M, KC_COMM, KC_DOT, DE_MINS,          KC_RSFT, MO(_FUN),   \
      KC_LCTL, KC_LGUI, KC_LALT,                             KC_SPC                        , ______, KC_ALGR, KC_RGUI,         KC_RCTL   ),

  [_FUN] = LAYOUT(
      KC_NUBS, KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11,  KC_F12, ______,  RESET,   \
      ______, RGB_TOG, RGB_MI,  RGB_MD,  RGB_ST,  ______,  ______,  ______, ______, ______, ______, KC_UP, ______,         ______,   \
      ______, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, ______,  ______,  ______, ______, ______, KC_LEFT, KC_DOWN, KC_RIGHT,         ______,   \
      ______, ______,  RGB_VAI, RGB_VAD, ______,  ______,  ______,  ______, ______, KC_MPRV, KC_MPLY, KC_MNXT,           ______, ______,   \
      ______, ______, ______,                              ______                         , ______, KC_VOLD, KC_MUTE,        KC_VOLU),
};
