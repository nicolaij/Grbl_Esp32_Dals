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
#define MACHINE_NAME            "DALS 2 Axis Driver Board"

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

#define X_UNIPOLAR6
#define X_PIN_PHASE_1 I2SO(0)
#define X_PIN_PHASE_2 I2SO(1)
#define X_PIN_PHASE_3 I2SO(2)
#define X_PIN_PHASE_4 I2SO(3)
#define X_PIN_PHASE_5 I2SO(4)
#define X_PIN_PHASE_6 I2SO(5)

#define Y_UNIPOLAR6
#define Y_PIN_PHASE_1 I2SO(8)
#define Y_PIN_PHASE_2 I2SO(9)
#define Y_PIN_PHASE_3 I2SO(10)
#define Y_PIN_PHASE_4 I2SO(11)
#define Y_PIN_PHASE_5 I2SO(12)
#define Y_PIN_PHASE_6 I2SO(13)

#define SPINDLE_TYPE            SpindleType::NONE // only one spindle at a time

#define X_LIMIT_PIN             GPIO_NUM_32
#define Y_LIMIT_PIN             GPIO_NUM_33

#define COOLANT_MIST_PIN        GPIO_NUM_2

#define PROBE_PIN               GPIO_NUM_34  // labeled Probe

#define I2S_OUT_NUM_BITS    32

// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE
