#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

#define FIFO_FILE_IN "./serial_in.fifo"
#define FIFO_FILE_OUT "./serial_out.fifo"

FILE *fifo_in;

int bTermLines() {
    long originalPos = ftell(fifo_in);
    int newlineCount = 0;
    int c;
    while ((c = fgetc(fifo_in)) != EOF) {
        if (c == '\n') ++newlineCount;
    }
    fseek(fifo_in, originalPos, SEEK_SET); // Move cursor back to original position
    return newlineCount;
}
#undef bLines
#define bLines bTermLines

char* bTermRead() {
    char *line;
    ssize_t n = 512;
    ssize_t res = getline(&line, &n, fifo_in);
    if (res <= 0) {
        free(line);
        return NULL;
    }
    if (line == NULL) return NULL;
}
#undef bRead
#define bRead bTermRead

void bTermWrite(char* line) {
    int fd;
    // Open FIFO for writing
    if ((fd = open(FIFO_FILE_OUT, O_WRONLY)) < 0) {
        perror("open");
        exit(1);
    }
    // Write line to FIFO
    write(fd, line, strlen(line));
    close(fd);
}
#undef bWrite
#define bWrite bTermWrite

void bTermOpenFIFO(const char* path) {
    struct stat buf;
    if (stat(path, &buf) != 0) {
        perror("stat");
        exit(1);
    }
    if (S_ISFIFO(buf.st_mode)) {
        return;
    }
    if (mkfifo(path, 0666) < 0) {
        perror("mkfifo");
        exit(1);
    }
}

void bTermInit() {
    
	bTermOpenFIFO(FIFO_FILE_IN);
    bTermOpenFIFO(FIFO_FILE_OUT);
    return;
    if ((fifo_in = fopen(FIFO_FILE_IN, "r")) < 0) {
        perror("fopen");
        exit(1);
    }
}
#undef bInit
#define bInit bTermInit

#define bTermDeinit() /* empty */
#undef bDeinit
#define bDeinit bTermDeinit