#include <sys/ioctl.h>
#include <unistd.h>
#include <signal.h>
#include <screen.h>
#include <stdlib.h>

void sTermPoint(int x, int y, char col) {
    if (x == -1 && y == -1) {
        printf("\x1b[2J");
        fflush(stdout);
    } else {
        printf("\x1b[%d;%dH\x1b[48;5;%um  \x1b[0m", y + 1, x * 2 + 1, col);
        fflush(stdout);
    }
}

void sTermIntHandeler(int _) {
    printf("\x1b[?25h\x1b[?1049l");
    exit(0);
}

Screen *sTermCreate() {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    Screen *s = sCreate(w.ws_col / 2, w.ws_row, &sTermPoint);
    printf("\x1b[?25l\x1b[?1049h\x1b[2J");
    signal(SIGINT, sTermIntHandeler);
    return s;
}
void sTermFree(Screen *s) {
    printf("\x1b[?25h\x1b[?1049l");
    sFree(s);
}