#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

#define FIFO_FILE "./serial_bridge.fifo"

int bTermLines() {
    int fd;
    int count = 0;
    char ch;
    // Open FIFO for reading
    if ((fd = open(FIFO_FILE, O_RDONLY | O_NONBLOCK)) < 0) {
        perror("open");
        exit(1);
    }
    // Count the number of newline characters ('\n')
    while (read(fd, &ch, 1) > 0) {
        if (ch == '\n') {
            count++;
        }
    }
    close(fd);
    return count;
}
#undef bLines
#define bLines bTermLines

char* bTermRead() {
    int fd;
    char ch;
    static char line[1024]; // Assuming max line length of 1024
    // Open FIFO for reading
    if ((fd = open(FIFO_FILE, O_RDONLY | O_NONBLOCK)) < 0) {
        perror("open");
        exit(1);
    }
    // Read a line from FIFO
    int i = 0;
    while (read(fd, &ch, 1) > 0) {
        if (ch == '\n') {
            line[i] = '\0'; // Null terminate the string
            close(fd);
            return line;
        } else {
            line[i++] = ch;
        }
    }
    close(fd);
    return NULL; // No line available
}
#undef bRead
#define bRead bTermRead

void bTermWrite(char* line) {
    int fd;
    // Open FIFO for writing
    if ((fd = open(FIFO_FILE, O_WRONLY)) < 0) {
        perror("open");
        exit(1);
    }
    // Write line to FIFO
    write(fd, line, strlen(line));
    close(fd);
}
#undef bWrite
#define bWrite bTermWrite

void bTermInit() {
	remove(FIFO_FILE);
	if (mkfifo(FIFO_FILE, 0666) < 0) {
        perror("mkfifo");
        exit(1);
    }
}
#undef bInit
#define bInit bTermInit

void bTermDeinit() {
	remove(FIFO_FILE);
	unlink(FIFO_FILE);
}
#undef bDeinit
#define bDeinit bTermDeinit