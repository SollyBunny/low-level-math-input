
#include <stdint.h>

typedef gchar uint16_t;

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

void gAdd(gstring *s, gchar c) {
    gInsert(s, c, s->len);
}