
#include <stdio.h>

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

int main() {
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
    #ifndef DEVICE_ILI9341
        getchar();
        sDeinit();
    #endif
}