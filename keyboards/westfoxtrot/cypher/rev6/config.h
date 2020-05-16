#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x21FF
#define PRODUCT_ID      0xAA98
#define DEVICE_VER      0x0001
#define MANUFACTURER    westfoxtrot
#define PRODUCT         cypher
#define DESCRIPTION     QMK Firmware for rev6 Cypher PCB

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 19

/*
 * Keyboard Matrix Assignments
*/
#define MATRIX_ROW_PINS { A14, A15, B3, B11, B10 }
#define MATRIX_COL_PINS { A10, A9, A8, B14, B13, B12, B2, B1, B0, A5, A4, A3, A2, A1, A13, C15, C14, C13, A0 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define BACKLIGHT_PIN A6

#define RGB_DI_PIN B15
#ifdef RGB_DI_PIN
   #define RGBLED_NUM 10
   #define RGBLIGHT_HUE_STEP 12
   #define RGBLIGHT_SAT_STEP 25
   #define RGBLIGHT_VAL_STEP 12
   #define RGBLIGHT_LIMIT_VAL 255
   #define RGBLIGHT_SLEEP
   #define RGBLIGHT_ANIMATIONS
#endif
