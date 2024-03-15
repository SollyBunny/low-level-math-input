#ifndef INCLUDE_SCREEN_H
#define INCLUDE_SCREEN_H

#include <stdlib.h>
#include <bitmap.h>

typedef struct {
    int w;
    int h;
    void (*draw)(int x, int y, char col);
} Screen;

Screen *sCreate(int w, int h, void (*draw)(int x, int y, char col)) {
    Screen *s = malloc(sizeof(Screen));
    if (!s) return NULL;
    s->w = w;
    s->h = h;
    s->draw = draw;
    return s;
}

void sFree(Screen *s) {
    free(s);
}

void sClear(Screen *s) {
    s->draw(-1, -1, 0);
}

void sPoint(Screen *s, int x, int y, char col) {
    s->draw(x, y, col);
}

void sLine(Screen *s, int x1, int y1, int x2, int y2, char col) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    if (dy <= dx) {
        int d = dy - (dx / 2);
        int x = x1, y = y1;
        sPoint(s, x, y, col);
        while (x < x2) {
            ++x;
            if (d < 0) d = d + dy;
            else {
                d += (dy - dx);
                ++y;
            }
            sPoint(s, x, y, col);
        }
    } else {
        int d = dx - (dy / 2);
        int x = x1, y = y1;
        sPoint(s, x, y, col);
        while (y < y2) { 
            ++y;
            if (d < 0) d = d + dx;
            else { 
                d += (dx - dy);
                ++x;
            }
            sPoint(s, x, y, col);
        }
    }
}

void sBitmap(Screen *s, int x, int y, Bitmap *b, char col) {
    for (int y1 = 0; y1 < b->h; ++y1) {
        unsigned char data = b->data[y1];
        if (data == 0) continue;
        unsigned char mask = 0b1;
        for (int x1 = 0; x < b->w; ++x1, mask <<= 1) {
            if (data & mask != 0) {
                sPoint(s, x1 + x, y1 + y, col);
            }
        }
    }
}

#endif