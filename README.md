# low-level-math-input
An attempt to recreate the math input seen in calculators

## Compiling
### Linux
`make`

## ESP32
TODO: list pins and devices

`make build_esp32`

## Arduino Compatability
This project aims to be compilable in both an Arduino environment and a Linux environment

It does this by falling back to C to ensure compatibility

Restrictions:
* C with no GCC extensions
* No typedef
* Cannot define `init`, `loop` or `setup`