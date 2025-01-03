#ifndef UTILS_H
#define UTILS_H

int file_get_n_lines(char *filename);

char *file_get_content(char *filename);

/**
 * @brief A macro that works similar to fprintf but takes file name instead of fstream.
 * 
 * It is just a wrapper around the fprintf function.
 * @param filename The name of the file to print the template.
 * @param format C style format string.
 * @param ... The formating arguments.
 */
#define file_printf(filename, format, ...) \
    FILE *f = fopen(filename, "w");                  \
    fprintf(f, template, __VA_ARGS__);               \
    fclose(f);

#endif