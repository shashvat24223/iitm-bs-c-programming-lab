#include "utils.h"
#include <stdio.h>

int main()
{
    char filename[] = "students.csv";
    printf(
        "The number of lines in the file %s is %d\n",
        filename,
        file_get_n_lines(filename));
}