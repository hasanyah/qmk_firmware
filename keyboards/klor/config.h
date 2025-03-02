/*
Copyright 2022 GEIST <@geigeigeist>

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
/*#include "config_common.h"*/

// ┌─────────────────────────────────────────────────┐
// │ m c u   s e t t i n g s                         │
// └─────────────────────────────────────────────────┘
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader

// ┌─────────────────────────────────────────────────┐
// │ s p l i t   c o m m u n i c a t i o n           │
// └─────────────────────────────────────────────────┘

#define SERIAL_USE_MULTI_TRANSACTION
//#define SPLIT_LAYER_STATE_ENABLE
//#define SPLIT_USB_DETECT


// ┌─────────────────────────────────────────────────┐
// │ o l e d s                                       │
// └─────────────────────────────────────────────────┘

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X64
#    define SPLIT_OLED_ENABLE
#    define OLED_FONT_H  "./lib/glcdfont.c"
#endif


// ┌─────────────────────────────────────────────────┐
// │ r g b   l e d s                                 │
// └─────────────────────────────────────────────────┘

#define RGBLED_NUM 42
#define RGBLED_SPLIT { 21, 21 }
#define RGB_MATRIX_LED_COUNT RGBLED_NUM

#ifdef RGB_MATRIX_ENABLE
#    define SPLIT_TRANSPORT_MIRROR
#    define DRIVER_LED_TOTAL 42 // Number of LEDs
#    define RGB_MATRIX_SPLIT { 21, 21 }
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180
#    define RGB_MATRIX_STARTUP_HUE 35
#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#endif

// ┌─────────────────────────────────────────────────┐
// │ t r a c k b a l l                               │
// └─────────────────────────────────────────────────┘

#ifdef POINTING_DEVICE_ENABLE
#    define PAW3204_SCLK_PIN D0
#    define PAW3204_SDIO_PIN D1
#    define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#    define AUTO_MOUSE_DELAY 300
#endif
