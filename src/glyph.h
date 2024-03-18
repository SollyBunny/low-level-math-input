#ifndef INCLUDE_GLYPH_H
#define INCLUDE_GLYPH_H

#include <stdint.h>
#include <string.h>

#include "bitmap.h"

typedef uint16_t gchar;

gchar* gstring(const char* s) {
    if (s == NULL) return NULL;
    long len = strlen(s);
    gchar* g = malloc(sizeof(gchar) * (len + 1));
    for (long i = 0; i < len; ++i) {
        g[i] = s[i];
    }
    return g;
}

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