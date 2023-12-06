#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message to STDERR and exits the program.
 * @exit_code: The exit code to use.
 * @error_message: The error message format string.
 * @...: Additional arguments for the format string.
 */
void print_error_and_exit(int exit_code, const char *error_message, ...) {
    va_list args;
    va_start(args, error_message);
    dprintf(STDERR_FILENO, error_message, args);
    va_end(args);
    exit(exit_code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        print_error_and_exit(97, "Usage: cp file_from file_to\n");
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
    if (fd_to == -1) {
        print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
    }

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);

        if (bytes_written == -1) {
            print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
        }
    }

    if (bytes_read == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    if (close(fd_from) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d\n", fd_from);
    }

    if (close(fd_to) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
    }

    return 0;
}
