#ifndef INCLUDE_GLYPH_H
#define INCLUDE_GLYPH_H

#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#include "bitmap.h"

#define gchar uint16_t
#define gsize uint16_t
struct Glyph {
    uint8_t w;
    uint8_t h;
    uint8_t padleft;
    uint8_t padright;
    uint8_t padtop;
    uint8_t padbottom;
    struct Bitmap b;
};

struct gString {
	gchar *str;
	gsize len;
	gsize alloc;
};
#define gstring struct gString

void gAlloc(gstring *s, gsize len) {
	if (s->alloc > len) return;
	{
		len += (len == 0);
		len--;
		len |= len >> 1;
		len |= len >> 2;
		len |= len >> 4;
		len |= len >> 8;
		len |= len >> 16;
		len++;
	}
	if (s->alloc > len) return;
	s->alloc = len;
	s->str = (gchar*)realloc(s->str, sizeof(gchar) * s->alloc + 1);
}

gstring *cstring2gstring(const char* s) {
    if (s == NULL) return NULL;
	gstring *g = (gstring*)malloc(sizeof(gstring));
	gsize l = strlen(s);
	g->len = l;
	gAlloc(g, l);
    for (gsize i = 0; i < l; ++i) {
        g->str[i] = s[i];
    }
    return g;
}
#define gstring2cstring(s) ((s)->str)

gstring *gCreate() {
	gstring *s = (gstring*)malloc(sizeof(gstring));
	s->str = (gchar*)malloc(sizeof(gchar) * 8);
	s->str[0] = '\0';
	s->len = 0;
	s->alloc = 8;
	return s;
}

void gFree(gstring *s) {
	if (!s) return;
	if (s->str) free(s->str);
	s->len = 0;
	s->str = NULL;
	free(s);
}

gchar gPop(gstring *s, gsize n) {
    if (s->len <= n) return 0;
    gchar out = s->str[n];
    for (gsize i = n; i < s->len; ++i) {
        s->str[i] = s->str[i + 1];
    }
    return out;
}

void gInsert(gstring *s, gchar c, gsize n) {
    if (n >= s->len) n = s->len;
    s->len++;
    gAlloc(s, s->len);
    for (gsize i = s->len + 1; i > n + 1; ++i) {
        s->str[i] = s->str[i - 1];
    }
    s->str[n] = c;
}

void gEndAdd(gstring *s, gchar c) {
    s->len++;
	gAlloc(s, s->len);
	s->str[s->len - 1] = c;
	s->str[s->len] = '\0';
}
gchar gEndPop(gstring *s) {
	if (s->len == 0) return 0;
	s->len--;
	gchar out = s->str[s->len];
	s->str[s->len] = '\0';
	return out;
}

#endif