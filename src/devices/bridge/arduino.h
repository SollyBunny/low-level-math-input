#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#define ARDUINO_BUFFER_SIZE 128

int bArduinoLines() {
	if (Serial.available() > 0) return 1;
	return 0;
}
#undef bLines
#define bLines bArduinoLines

char* bArduinoRead() {
    static char arduino_buffer[ARDUINO_BUFFER_SIZE];
    static ssize_t bytes_read;
    bytes_read = Serial.readBytesUntil('\n', arduino_buffer, ARDUINO_BUFFER_SIZE - 1);
    if (bytes_read < 1) return NULL;
    arduino_buffer[bytes_read] = '\0';
    return arduino_buffer;
}
#undef bRead
#define bRead bArduinoRead

void bArduinoWrite(char* fmt, ...) {
    static char arduino_buffer[ARDUINO_BUFFER_SIZE];
    static int n;
    va_list args;
    va_start(args, fmt);
    n = vsnprintf(arduino_buffer, ARDUINO_BUFFER_SIZE, fmt, args);
    va_end(args);
    Serial.write(arduino_buffer, n);
}
#undef bWrite
#define bWrite bArduinoWrite

void bArduinoInit() {
	Serial.begin();
}
#undef bInit
#define bInit bArduinoInit

void bArduinoDeinit() {
	Serial.end();
}
#undef bDeinit
#define bDeinit bArduinoDeinit