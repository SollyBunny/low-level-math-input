# low-level-math-input

HEAVILY NOT DONE AT ALL, JUST A TECH DEMO

An attempt to recreate the math input seen in calculators

It aims to be compatible with both running natively and running on an Arduino.

## Compiling / Running
### Linux
```sh
make build_pc
./build/llmi_pc_term_term
```
### Linux Debug
```sh
make build_pc_debug
./build/llmi_debug_term_term
```
`make`

### ESP32 / ILI9341 / 8x4 Button matrix
Connect pins as such
```
8x4 Button Matrix -> ESP32 S3 pins
TODO

ILI9341 Screen pins -> ESP32 S3 pins
VCC -> 3V
GND -> GND
CS -> 6
RESET -> 5
DC -> 4
SDI(MOSI) -> 11
SCK -> 12
LED -> 3V
SDD(MISO) -> 13
```
then run
```sh
make build_esp32
```
The code will be copied to clipboard, and can then be pasted into the Arduino IDE

### Other devices
Other devices can be built given you create the drivers for them in `/src/devices/<type>/<device>.h` and then use `make` `type=device` when building


`make build_esp32`

## Arduino Compatability
This project aims to be compilable in both an Arduino environment and a Linux environment

It does this by falling back to C to ensure compatibility

Restrictions:
* C with no GCC extensions
* No typedef
* Cannot define `init`, `loop` or `setup`

## TODO
* Create drivers for framebuffer / graphical Xorg
* Make the compiling system more intuitive

## Goals
* Feels like a CASIO
