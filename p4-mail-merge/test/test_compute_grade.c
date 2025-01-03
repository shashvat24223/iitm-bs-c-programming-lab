#include <stdio.h>
#include "student.h"

int main()
{
    puts("Testing Compute Grade...");
    student_t s = {
        .name = "Nitin C",
        .rollno = "abc123",
        .marks = 50};

    compute_grade(&s);
    print_student(&s);
}
