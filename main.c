#include <stdio.h>
#include <devices/ILI9341.h>
int main() {
    Screen *s = sTermCreate();
    sLine(s, 0, 2, 5, 13, 0xF00F);
    getchar();
    sTermFree(s);
}