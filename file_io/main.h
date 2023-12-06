

#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <string.h>
#include <stddef.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error_and_exit(int exit_code, const char *error_message, ...);
int _putchar(char c);
#endif /* MAIN_H */

