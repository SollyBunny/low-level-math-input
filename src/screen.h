#ifndef INCLUDE_SCREEN_H_BASIC
#define INCLUDE_SCREEN_H_BASIC

#include <stdint.h>

typedef uint16_t upos;
typedef int16_t pos;
typedef uint16_t gchar;

upos sWidth = 0;
upos sHeight = 0;

#endif

#ifdef sInit
#ifndef INCLUDE_SCREEN_H_ADV
#define INCLUDE_SCREEN_H_ADV

#include "font.h"
#include "glyph.h"
#include "bitmap.h"

#ifndef sLine
void sDefaultLine(upos x1, upos y1, upos x2, upos y2) {
    pos dx = x2 - x1;
    pos dy = y2 - y1;
    if (dy <= dx) {
        pos d = dy - (dx / 2);
        upos x = x1, y = y1;
        sPoint(x, y);
        while (x < x2) {
            ++x;
            if (d < 0) d = d + dy;
            else {
                d += (dy - dx);
                ++y;
            }
            sPoint(x, y);
        }
    } else {
        pos d = dx - (dy / 2);
        upos x = x1, y = y1;
        sPoint(x, y);
        while (y < y2) { 
            ++y;
            if (d < 0) d = d + dx;
            else { 
                d += (dx - dy);
                ++x;
            }
            sPoint(x, y);
        }
    }
}
#define sLine sDefaultLine
#endif

#ifndef sBitmap

void sDefaultBitmap(upos *x, upos *y, struct Bitmap *b) {
    for (upos y1 = 0; y1 < b->h; ++y1) {
        uint32_t data = b->data[y1];
        if (data == 0) continue;
        upos x1 = 0;
        while (data) {
            if (data & 1) {
                sPoint(x1 + *x, y1 + *y);
            }
            data >>= 1;
            x1 += 1;
        }
    }
    *x += b->w;
    *y += b->h;
}
#define sBitmap sDefaultBitmap
#endif

#ifndef sGlyph
void sDefaultGlyph(upos *x, upos *y, gchar c) {
    struct Glyph *g = glyphs[c];
    if (!g) return;
    *x += g->padleft;
    *y += g->padtop;
    sBitmap(x, y, &g->b);
    *x += g->padright;
    *y += g->padtop;
}
#define sGlyph sDefaultGlyph
#endif

#ifndef sText
void sDefaultText(upos *x, upos *y, gchar *text) {
    upos ty;
    upos my = *y;
    for (/* empty */; *text != '\0'; ++text) {
        ty = *y;
        sGlyph(x, &ty, *text);
        if (ty > my) my = ty;
    }
    *y = my;
}
#define sText sDefaultText
#endif

#endif
#endif