
#include <stdio.h>
#include <time.h>

#ifdef DEVICE_ILI9341
    #include "screen/ILI9341.h"
#else
    #include "screen/term.h"
#endif
#ifdef BRIDGE_arduino
    #include "bridge/arduino.h"
#else
    #include "bridge/term.h"
#endif

#include "screen.h"
#include "bridge.h"
#include "font.h"
#include "glyph.h"

void msleep(long msec) {
    struct timespec ts;
    ts.tv_sec = msec / 1000;
    ts.tv_nsec = (msec % 1000) * 1000000;
    nanosleep(&ts, &ts);
}

#define FIFO_NAME FIFO_FILE_IN
#define BUFFER_SIZE 1024

int main() {
    bInit();
    sInit();
    while (1) {
        msleep(100);
        int lines = bLines();
        if (lines > 0) {
            char *line = bRead();
            if (!line) continue;
            bWrite("Writing '%s'\n", line);
            gchar *gline = gstring(line);
            sColor(0);
            sClear();
            sColor(0x0F0F);
            upos x = 1;
            upos y = 1;
            sText(&x, &y, gline);
            sFlush();
            free(gline);
        }
    }
    return 0;
}

int a() {
    bInit();
    printf("%d\n", memcmp(glyphs[CHAR_h], &GLYPH_h, sizeof(GLYPH_h)));
    sInit();
    sColor(0xF00F);
    sLine(0, 2, 5, 100);
    sColor(0x0F0F);
    upos x = 10;
    upos y = 2;
    gchar text[] = { 'h', 'e', 'l', 'l', 'o', 0 };
    // sGlyph(&x, &y, CHAR_h);
    sText(&x, &y, text);
    x = 10;
    sText(&x, &y, text);
    sFlush();
    bWrite("Hello world\n");
    while (1) {
        int lines = bLines();
        if (lines > 0) {
            sDeinit();
            printf("%s\n", bRead());
            exit(1);
        }
        msleep(100);
        bWrite("Hello world\n");
    }
}