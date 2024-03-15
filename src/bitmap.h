#ifndef INCLUDE_BITMAP_H
#define INCLUDE_BITMAP_H

#include <stdint.h>

typedef struct {
    uint8_t w;
    uint8_t h;
    uint32_t data[32];
} Bitmap;

#endif