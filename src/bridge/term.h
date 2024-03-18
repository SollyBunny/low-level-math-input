#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/select.h>
#include <sys/time.h>
#include <string.h>
#include <sys/poll.h>
#include <stdarg.h>

#define FIFO_FILE_IN "./serial_in.fifo"
#define FIFO_FILE_OUT "./serial_out.fifo"

int term_fifo_in, term_fifo_out;
fd_set term_fifo_in_read_fs;
#define TERM_BUFFER_SIZE 1024
char term_buffer[TERM_BUFFER_SIZE];


int bTermLines() {
    if ((term_fifo_in = open(FIFO_FILE_IN, O_RDONLY | O_NONBLOCK)) < 0) {
        close(term_fifo_in);
        return 0;
    }
    static ssize_t bytes_read;
    bytes_read = read(term_fifo_in, term_buffer, TERM_BUFFER_SIZE);
    if (bytes_read < 1) return 0;
    return 1;
}
#undef bLines
#define bLines bTermLines

char* bTermRead() {
    return NULL;
    if ((term_fifo_in = open(FIFO_FILE_IN, O_RDONLY)) < 0) {
        printf("fail\n");
        close(term_fifo_in);
        return NULL;
    }
    static ssize_t bytes_read;
    bytes_read = read(term_fifo_in, term_buffer, TERM_BUFFER_SIZE);
    if (bytes_read < 1) return NULL;
    return term_buffer;
}
#undef bRead
#define bRead bTermRead

void bTermWrite(char* fmt, ...) {
    if ((term_fifo_out = open(FIFO_FILE_OUT, O_WRONLY | O_NONBLOCK)) < 0) {
        return;
    }
    static int n;
    va_list args;
    va_start(args, fmt);
    n = vsnprintf(term_buffer, TERM_BUFFER_SIZE, fmt, args);
    va_end(args);
    write(term_fifo_out, term_buffer, n);
    close(term_fifo_out);
}
#undef bWrite
#define bWrite bTermWrite

void bTermOpenFIFO(const char* path) {
    struct stat buf;
    if (stat(path, &buf) != 0) {
        if (mkfifo(path, 0666) < 0) {
            perror("mkfifo");
            exit(1);
        }
        return;
    }
    if (S_ISFIFO(buf.st_mode)) {
        return;
    } else {
        perror("not fifo");
        exit(1);
    }
}

void bTermInit() {
	bTermOpenFIFO(FIFO_FILE_IN);
    bTermOpenFIFO(FIFO_FILE_OUT);
}
#undef bInit
#define bInit bTermInit

#define bTermDeinit() /* empty */
#undef bDeinit
#define bDeinit bTermDeinit