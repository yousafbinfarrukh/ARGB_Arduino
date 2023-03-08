# ARGB CONTROLLER USING ARDUINO
---
This code controls ARGB Strip over serial. In case of any querry contact me on yousafbinfarrukh@gmail.com

## 1. Supported Boards:

The code is supported on following Arduino Boards:
- AVR ATmega and ATtiny (any 8-bit) - 8 MHz, 12 MHz and 16 MHz
- Teensy 3.x and LC
- Arduino Due
- Arduino 101
- ATSAMD21 (Arduino Zero/M0 and other SAMD21 boards) @ 48 MHz
- ATSAMD51 @ 120 MHz
- Adafruit STM32 Feather @ 120 MHz
- ESP8266 any speed
- ESP32 any speed
- Nordic nRF52 (Adafruit Feather nRF52), nRF51 (micro:bit)
- Infineon XMC1100 BootKit @ 32 MHz
- Infineon XMC1100 2Go @ 32 MHz
- Infineon XMC1300 BootKit @ 32 MHz
- Infineon XMC4700 RelaxKit, XMC4800 RelaxKit, XMC4800 IoT Amazon FreeRTOS Kit @ 144 MHz

## 2. Dependencies:

The code depends on 'Adafruit Neo Pixel' arduino library used for controlling single-wire-based LED pixels and strips. Install instructions can be found on the github repository, [Here](https://github.com/adafruit/Adafruit_NeoPixel).

## 3. Features:
The controller has following features:

### 3.1. Persistent recovery using EEPROM 
The controller stores current mode and color in the EEPROM. When restarted, the mode and color is recovered from the EEPROM. Thus, the system maintains the state even after the reset. 

### 3.2. Modes
The controller has six main modes:

2. Wheel
3. Color Wipe
4. Rainbow 
5. Rainbow Cycle
6. Theatre Chase
7. Theatre Chase Rainbow

The function call manipulates these modes to make a total of 12 modes. See [modes.h](https://raw.githubusercontent.com/yousafbinfarrukh/ARGB_Arduino/main/main/MODES.h)

## 4. Contributing
If you want to contribute to this project please write to me at yousafbinfarrukh@gmail.com
