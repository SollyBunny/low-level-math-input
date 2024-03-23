#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

static struct termios term_termios;

void iTermDeinit() {
    fcntl(STDIN_FILENO, F_SETFL, 0);
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &term_termios);
}
#undef iDeinit
#define iDeinit iTermDeinit

void iTermInit() {
    fcntl(STDIN_FILENO, F_SETFL, O_NONBLOCK);
    struct termios raw;
    tcgetattr(STDIN_FILENO, &term_termios);
    tcgetattr(STDIN_FILENO, &raw);
    raw.c_lflag &= ~(ECHO | ICANON);
    raw.c_cc[VMIN] = 0;
    raw.c_cc[VTIME] = 1;
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}
#undef iInit
#define iInit iTermInit

uint8_t iTermRead() {
    uint8_t out = getchar();
    if (out == 255) return 0;
    return out;
}
#undef iRead
#define iRead iTermRead