#ifndef INCLUDE_GLYPH_H
#define INCLUDE_GLYPH_H

#include <stdint.h>

#include "bitmap.h"

struct Glyph {
    uint8_t w;
    uint8_t h;
    uint8_t padleft;
    uint8_t padright;
    uint8_t padtop;
    uint8_t padbottom;
    struct Bitmap b;
};

#endif