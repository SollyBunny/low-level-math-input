#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#ifndef LLMI_FN_DRAWDOT
    #error "LLMI_FN_DRAWDOT not defined"
#endif
#ifndef LLMI_FN_DRAWLINE
    #error "LLMI_FN_DRAWLINE not defined"
#endif
#ifndef LLMI_FN_CLEAR
    #error "LLMI_FN_CLEAR not defined"
#endif
#ifndef LLMI_FN_FLUSH
    #error "LLMI_FN_FLUSH not defined"
#endif

#define llmi_clear LLMI_FN_CLEAR
#define llmi_flush LLMI_FN_FLUSH

typedef struct {
    uint8_t c;
    uint16_t x;
    uint16_t y;
    uint8_t w;
    uint8_t h;
} Token;

typedef struct {
    uint8_t w;
    uint8_t h;
    Token *str;
    uint16_t str_len;
    uint16_t str_cap;
} Screen;

typedef struct {
    Token tok;
    uint16_t pos;
};

Screen llmi_create(uint8_t w, uint8_t h) {
    Screen s;
    s.w = w;
    s.h = h;
    s.str_len = 0;
    s.str_cap = 0;
    return s;
}
Screen llmi_input(Screen *s, uint8_t c, uint16_t pos) {
    
}