#ifndef INCLUDE_BITMAP_H
#define INCLUDE_BITMAP_H

typedef struct {
    int w;
    int h;
    char data[];
} Bitmap;

#endif