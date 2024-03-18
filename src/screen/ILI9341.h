#include <stdint.h>

#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

#include "../screen.h"
#include "../color.h"

/*
ILI9341 Screen pins -> ES32 S3 pins
VCC -> 3V
GND -> GND
CS -> 6
RESET -> 5
DC -> 4
SDI(MOSI) -> 11
SCK -> 12
LED -> 3V
SDD(MISO) -> 13
T_CLK
T_CS
T_DIN
T_DO
T_IRQ
*/
#ifndef TFT_CS
	#define TFT_CS 6
#endif
#ifndef TFT_RST
	#define TFT_RST 5
#endif
#ifndef TFT_DC
	#define TFT_DC 4
#endif

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);
Color tftcolor = 0;
int tftwritten = 0;

void sILI9341Flush() {
	if (tftwritten) {
		tft.endWrite();
		tft.startWrite();
		tftwritten = 0;
	}
	tft.flush();
}
#undef sFlush
#define sFlush sILI9341Flush


#define sILI9341Color(col) { tftcolor = col; }
#undef sColor
#define sColor sILI9341Color

void sILI9341Clear() {
    tft.fillScreen(tftcolor);
}
#undef sClear
#define sClear sILI9341Clear

void sILI9341Point(uint16_t x, uint16_t y) {
    tft.writePixel(x, y, tftcolor);
	tftwritten = 1;
}
#undef sPoint
#define sPoint sILI9341Point

void sILI9341Init() {
	tft.flush();
	tft.begin();
	tft.fillScreen(0);
	tft.flush();
	tft.startWrite();
}
#undef sInit
#define sInit sILI9341Init

void sILI9341Deinit() {
	sFlush();
}
#undef sDeinit
#define sDeinit sILI9341Deinit