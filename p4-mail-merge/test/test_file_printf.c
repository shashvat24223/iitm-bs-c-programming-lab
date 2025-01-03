#include <stdio.h>
#include "student.h"
#include "utils.h"

int main()
{
    puts("Test file_printf macro...");
    student_t s = {
        .name = "Nitin C",
        .rollno = "abc123",
        .marks = 50,
        .grade = 'D'};

    char filename[] = "student_info.txt";
    printf("Printing template to %s\n", filename);
    file_printf(
        filename,
        "%s (%s) got grade %c with %d marks.\n",
        s.name, s.rollno, s.grade, s.marks);
}