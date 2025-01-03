#include <stdio.h>
#include "student.h"

#define MAX_STUDENTS 100

int main()
{
    puts("Test Read CSV...");
    student_t *students;

    int n = get_student_data_from_csv("students.csv", &students);

    for (int i = 0; i < n; i++)
    {
        print_student(students + i);
    }
}
