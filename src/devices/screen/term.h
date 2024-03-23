#include <stdint.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#include "../screen.h"
#include "../../color.h"

void sTermFlush() {
    fflush(stdout);
}
#undef sFlush
#define sFlush sTermFlush

void sTermColor(Color col) {
    uint8_t r = (col >> 12) * 17;
    uint8_t g = ((col & 0x0F00) >> 8) * 17;
    uint8_t b = ((col & 0x00F0) >> 4) * 17;
    uint8_t a = 255 - ((col & 0x000F) * 17);
    r -= a;
    g -= a;
    b -= a;
    printf("\x1b[48;2;%u;%u;%um", r, g, b);
}
#undef sColor
#define sColor sTermColor

void sTermClear() {
    printf("\x1b[2J");
}
#undef sClear
#define sClear sTermClear

void sTermPoint(uint16_t x, uint16_t y) {
    printf("\x1b[%d;%dH  ", y + 1, x * 2 + 1);
}
#undef sPoint
#define sPoint sTermPoint

void sTermIntHandeler(int _) {
    printf("\x1b[?25h\x1b[?1049l");
    exit(0);
}

void sTermInit() {
    struct winsize win;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &win);
    sWidth = win.ws_col / 2;
    sHeight = win.ws_row;
    printf("\x1b[?25l\x1b[?1049h\x1b[2J");
    signal(SIGINT, sTermIntHandeler);
}
#undef sInit
#define sInit sTermInit

void sTermDeinit() {
    printf("\x1b[?25h\x1b[?1049l");
    sFlush();
}
#undef sDeinit
#define sDeinit sTermDeinit