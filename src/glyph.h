#ifndef INCLUDE_GLYPH_H
#define INCLUDE_GLYPH_H

#include <bitmap.h>

typedef struct {
    Bitmap b;
    int w;
    int h;
    int padleft;
    int padright;
    int padtop;
    int padbottom;
} Glyph;

#endif