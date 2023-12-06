#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with specified permissions and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file (NULL-terminated string).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content) {
    int file_descriptor;
    ssize_t bytes_written;

    if (filename == NULL)
        return -1;

    file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (file_descriptor == -1)
        return -1;

    if (text_content != NULL) {
        bytes_written = write(file_descriptor, text_content, strlen(text_content));
        if (bytes_written == -1) {
            close(file_descriptor);
            return -1;
        }
    }

    close(file_descriptor);
    return 1;
}
