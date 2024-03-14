#include <stdio.h>
#include <devices/term.h>
int main() {
    Screen *s = sTermCreate();
    sLine(s, 0, 2, 5, 13, 20);
    getchar();
    sTermFree(s);
}