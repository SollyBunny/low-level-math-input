#ifndef INCLUDE_SCREEN_H
#define INCLUDE_SCREEN_H

#include <stdint.h>

#include <glyph.h>
#include <bitmap.h>

uint16_t sWidth = 0;
uint16_t sHeight = 0;

#ifdef sInit

#ifndef sLine
void sDefaultLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    if (dy <= dx) {
        int d = dy - (dx / 2);
        int x = x1, y = y1;
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
        int d = dx - (dy / 2);
        int x = x1, y = y1;
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
void sDefaultBitmap(int *x, int *y, Bitmap *b) {
    for (int y1 = 0; y1 < b->h; ++y1) {
        unsigned char data = b->data[y1];
        if (data == 0) continue;
        unsigned char mask = 0b1;
        for (int x1 = 0; x1 < b->w; ++x1, mask <<= 1) {
            if (data & mask != 0) {
                sPoint(x1 + *x, y1 + *y);
            }
        }
    }
    *x += b->w;
    *y += b->h;
}
#define sBitmap sDefaultBitmap
#endif

#ifndef sGlyph
void sDefaultGlyph(int *x, int *y, Glyph *g) {
    *x += g->padleft;
    *y += g->padtop;
    sBitmap(x, y, &g->b);
    *x += g->padright;
    *y += g->padtop;
}
#define sGlyph sDefaultGlyph
#endif

#ifndef sText
void sDefaultText(int *x, int *y, char *text) {
    int ty;
    int my = *y;
    for (/* empty */; *text != '\0'; ++text) {
        ty = *y;
        sGlyph(s, x, &ty, &glyphs[*text]);
        if (ty > my) my = ty;
    }
    *y = my;
}
#define sText sDefaultText
#endif

#endif
#endif