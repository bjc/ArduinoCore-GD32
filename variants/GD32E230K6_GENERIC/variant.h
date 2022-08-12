/*
    Copyright (c) 2021, CommunityGD32Cores

    Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.
    3. Neither the name of the copyright holder nor the names of its contributors
       may be used to endorse or promote products derived from this software without
       specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
OF SUCH DAMAGE.
*/

#ifndef _VARIANT_
#define _VARIANT_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/* GPIO pins definitions */
#define PF0 0
#define PF1 1
#define PA8 2
#define PA9 3
#define PA10 4
#define PA11 5
#define PA12 6
#define PA13 7
#define PA14 8
#define PA15 9
#define PB3 10
#define PB4 11
#define PB5 12
#define PB6 13
#define PB7 14
/* analog pins */
#define PA0 15
#define PA1 16
#define PA2 17
#define PA3 18
#define PA4 19
#define PA5 20
#define PA6 21
#define PA7 22
#define PB0 23
#define PB1 24

/* digital pins and analog pins number definitions */
#define DIGITAL_PINS_NUM            25
#define ANALOG_PINS_NUM             10
#define ANALOG_PINS_START           PA0
#define ANALOG_PINS_LAST            PB1

/* LED definitions */
#define LED_BUILTIN                 PA4

/* user keys definitions */
#define KEY0                        PA0

/* SPI definitions */
#define PIN_SPI_SS                  PA15
#define PIN_SPI_MOSI                PB5
#define PIN_SPI_MISO                PB4
#define PIN_SPI_SCK                 PB3

/* I2C definitions */
#define PIN_WIRE_SDA                PB7
#define PIN_WIRE_SCL                PB6
#define USE_I2C                     1

/* TIMER or PWM definitions */
#define TIMER_TONE                  TIMER5
#define TIMER_SERVO                 TIMER6

#define PWM0                        PA4
#define PWM1                        PA6
#define PWM2                        PA7
#define PWM3                        PA8
#define PWM4                        PA9

/* USART definitions */
#define DEFAULT_HWSERIAL_INSTANCE 1           
#define PIN_SERIAL_RX               PA10
#define PIN_SERIAL_TX               PA9
#define SERIAL0_RX                  PA10
#define SERIAL0_TX                  PA9

/* ADC definitions */
#define ADC_RESOLUTION              10

#ifdef __cplusplus
} // extern "C"
#endif

#ifdef __cplusplus
    /* Port which normally prints to the Arduino Serial Monitor */
    #define SERIAL_PORT_MONITOR     Serial
    /* Hardware serial port, physical RX & TX pins. */
    #define SERIAL_PORT_HARDWARE    Serial1
#endif

#endif /* _VARIANT_ */
