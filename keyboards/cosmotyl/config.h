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

// ┌─────────────────────────────────────────────────┐
// │ m c u   s e t t i n g s                         │
// └─────────────────────────────────────────────────┘
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader

// ┌─────────────────────────────────────────────────┐
// │ s p l i t   c o m m u n i c a t i o n           │
// └─────────────────────────────────────────────────┘
//
#define SERIAL_USE_MULTI_TRANSACTION
#define SPLIT_LAYER_STATE_ENABLE
//#define SPLIT_USB_DETECT
//
#define I2C_DRIVER I2CD1
#define I2C_SLAVE_ENABLE
#define I2C1_CLOCK_SPEED 400000
