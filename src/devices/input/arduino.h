#include <stdint.h>

// TODO

#define COL1
#define COL2
#define COL3
#define COL4

#define ROW1
#define ROW2
#define ROW3
#define ROW4
#define ROW5
#define ROW7
#define ROW8

void iTermDeinit() {
}
#undef iDeinit
#define iDeinit iTermDeinit

void iTermInit() {
}
#undef iInit
#define iInit iTermInit

uint8_t iTermRead() {
}
#undef iRead
#define iRead iTermRead