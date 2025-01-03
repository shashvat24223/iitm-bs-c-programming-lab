#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/// @brief Get the number lines in a given file.
/// @param filename Name of the file
/// @return The number of files present in a file.
int file_get_n_lines(char *filename)
{
    FILE *f = fopen(filename, "r");
    char c;
    int n_lines = 0;
    while ((c = fgetc(f)) != EOF)
    {
        if (c == '\n')
        {
            n_lines++;
        }
    }
    fseek(f, -1, SEEK_CUR);
    if (fgetc(f) != '\n')
    {
        n_lines++;
    }
    fclose(f);
    return n_lines;
}

/// @brief Get the contents of a file as string.
/// @param filename Name of the file
/// @return Contents of the file.
char *file_get_content(char *filename)
{
    FILE *f = fopen(filename, "r");
    // Get the size of the file
    fseek(f, 0, SEEK_END);
    int size = ftell(f);
    fseek(f, 0, SEEK_SET);

    // allocate memory for file content
    char *content = malloc(size * sizeof(char));

    // read the content
    char buff[100];
    while (fgets(buff, 100, f) != NULL)
    {
        strcat(content, buff);
    }
    fclose(f);
    return content;
}
