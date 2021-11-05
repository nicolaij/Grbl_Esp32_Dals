#pragma once
// clang-format off

/*
    i2s_out_xyzabc.h
    Part of Grbl_ESP32
    Pin assignments for the ESP32 I2S 6-axis board
    2018    - Bart Dring
    2020    - Mitch Bradley
    2020    - Michiyasu Odaki
    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/
#define MACHINE_NAME            "DALS 4 Axis milling"

#ifdef N_AXIS
        #undef N_AXIS
#endif
#define N_AXIS 3

#ifdef ENABLE_SD_CARD
    #undef ENABLE_SD_CARD
#endif

// === Special Features

// I2S (steppers & other output-only pins)
#define USE_I2S_OUT
#define USE_I2S_STEPS

#define I2S_OUT_BCK      GPIO_NUM_27
#define I2S_OUT_WS       GPIO_NUM_26
#define I2S_OUT_DATA     GPIO_NUM_25

//#define STEPPER_RESET   GPIO_NUM_19

// Motor Socket #1
#define X_STEP_PIN              I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_DISABLE_PIN           I2SO(6)

// Motor Socket #2
#define Y_STEP_PIN              I2SO(2)
#define Y_DIRECTION_PIN         I2SO(3)
#define Y_DISABLE_PIN           I2SO(7)

// Motor Socket #3
#define Z_STEP_PIN              I2SO(4)
#define Z_DIRECTION_PIN         I2SO(5)
#define Z_DISABLE_PIN           I2SO(8)

// OK to comment out to use pin for other features
//#define STEPPERS_DISABLE_PIN    GPIO_NUM_13

#define SPINDLE_TYPE            SpindleType::PWM
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_2   // labeled SpinPWM
#define SPINDLE_ENABLE_PIN      GPIO_NUM_23   // labeled SpinEnbl

#define COOLANT_MIST_PIN        I2SO(12)  // labeled Mist
#define COOLANT_FLOOD_PIN       I2SO(13)  // labeled Flood

#define PROBE_PIN               GPIO_NUM_34 // labeled Probe

#define X_LIMIT_PIN             GPIO_NUM_33
#define Y_LIMIT_PIN             GPIO_NUM_32
#define Z_LIMIT_PIN             GPIO_NUM_35

#define I2S_OUT_NUM_BITS    32

// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE

//**Storage
#define ENABLE_SD_CARD
#define GRBL_SPI_SS     GPIO_NUM_17
#define GRBL_SPI_MOSI   GPIO_NUM_5
#define GRBL_SPI_MISO   GPIO_NUM_19
#define GRBL_SPI_SCK    GPIO_NUM_18
#define GRBL_SPI_FREQ   4000000
