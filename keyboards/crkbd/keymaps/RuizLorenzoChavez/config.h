/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

//#define USE_MATRIX_I2C

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif


// Enable Kinetic mode for mouse keys
#define MK_KINETIC_SPEED

// Basic mouse key settings
#define MOUSEKEY_DELAY  3           // Delay before cursor movement (milliseconds)
#define MOUSEKEY_INTERVAL 7       // Time between cursor movements (milliseconds)

// Kinetic acceleration parameters
#define MK_CURVE_LINEAR 3.0        // Linear acceleration factor
#define MK_CURVE_OFFSET 0          // Start acceleration after this many intervals
#define MK_CURVE_CENTER 35         // Inflection point of the acceleration curve
#define MK_CURVE_SCALE 30          // Scale factor for the acceleration curve
#define MK_MOMENTUM_MULT 2       // Momentum multiplication factor
#define MK_MOMENTUM_THRESHOLD 25  // Minimum time before momentum kicks in

// Additional settings to fine-tune movement
#define MOUSEKEY_MOVE_DELTA 5      // Initial movement distance per interval
#define MOUSEKEY_INITIAL_SPEED 600 // Initial speed (units/minute)
#define MOUSEKEY_BASE_SPEED 5000   // Base movement speed (units/minute)
#define MOUSEKEY_DECELERATED_SPEED 400  // Slower speed (units/minute)
#define MOUSEKEY_ACCELERATED_SPEED 3000 // Faster speed (units/minute)
