
#include <stdint.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

#include "devices/screen.h"
#include "devices/bridge.h"
#include "devices/input.h"

#include "font.h"
#include "glyph.h"

#define msleep(msec) usleep(msec * 1000)

void mainexit();
void maininit();

void onSerial(char *data);
void onInput(uint8_t key);

void render();

static gstring *input;

void render() {
    sColor(0);
    sClear();
    sColor(0x0F0F);
    upos x = 1;
    upos y = 1;
    sText(&x, &y, input);
    sFlush();
}

void onSerial(char* data) {
    bWrite("Got '%s'\n", data);
    if (data[0]) {
        uint8_t key = data[0];
        if (key == 127) {
            bWrite("Removed char\n");
            gEndPop(input);
        } else {
            gEndAdd(input, (gchar)key);
        }
        render();
    }
}

void onInput(uint8_t key) {
    bWrite("Got char '%c' (%d)\n", key, key);
    sColor(0xffff);
    sClear();
    sFlush();
    // if (key == 127) {
    //     bWrite("Removed char\n");
    //     gEndPop(input);
    // } else {
    //     gEndAdd(input, (gchar)key);
    // }
    render();
}

void mainexit() {
    bWrite("Exiting\n");
    bDeinit();
    sDeinit();
    iDeinit();
    exit(0);
}

void maininit() {
    bWrite("Hello 0\n");
    input = gCreate();
    gAlloc(input, 256);
    gEndAdd(input, 'a');
    // gEndAdd(input, 'l');
    // gEndAdd(input, 'l');
    // gEndAdd(input, 'o');
    // gEndAdd(input, '!');
    render();
    bWrite("Hello 3\n");
}

int main() {
    bInit();
    sInit();
    iInit();
    // sClear();
    #ifdef INPUT_TERM
        signal(SIGINT, mainexit);
    #endif
    bWrite("Started\n");
    maininit();
    int i = 0;
    while (1) {
        i += 1;
        if (i % 10 == 0) {
            bWrite("Im still alive %d\n", i);
        }
        msleep(100);
        int lines = bLines();
        if (lines > 0) {
            char *line = bRead();
            if (line) {
                onSerial(line);
            }
        }
        uint8_t key = iRead();
        if (key) {
            onInput(key);
        }
    }
    return 0;
}