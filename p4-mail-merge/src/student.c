#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"
#include "utils.h"

// Global Parameters
#define MAX_STRING 100

// Task 2: Implement the print_student function

/**
 * @brief Prints the student struct
 * @param s student struct
 *
 * Prints the output in the following format:
 *
 * `{name} ({rollno}) got grade {grade} with {marks} marks.`
 *
 * Eg.
 *
 * Nitin C (abc123) got grade D with 50 marks.
 */
void print_student(student_t* s)
{
    printf(...);
}

// Task 3: Implement the compute_grade_function

/**
 * @brief Computes the grade based on the student marks
 * @param student Pointer to the student
 * @return The grade as character
 *
 * The grades are assinged as follows
 *  - marks >= 90: S
 *  - 90 > marks >= 80: A
 *  - 80 > marks >= 70: B
 *  - 70 > marks >= 60: C
 *  - 60 > marks >= 50: D
 *  - 50 > marks >= 40: E
 *  - marks < 40: U
 */
char compute_grade(student_t *s)
{
}

// Task 4: Fill the ... parts in the get_student_data_from_csv function

/// @brief Get the sudent data as a dynamic array from a csv file.
/// @param filename The csv file
/// @param students Pointer to hold the array of students
/// @return The number of elements in the student array
int get_student_data_from_csv(char *filename, student_t *students)
{

    // Uncomment the below and fill the necessary parts.

    // Get the number of lines in the file
    // int num = file_get_n_lines(...);

    // Dynamically allocate space for the students.
    // students = malloc(...);

    // Open a file for reading
    // FILE *fp = fopen(filename, "r");
    // char buf[MAX_STRING];
    
    // while (fgets(buf, MAX_STRING, fp) != NULL)
    // {
    //     student_t *s = &students[num];
    //     sscanf(buf, "%[^,],%[^,],%d", &(s->name), &(s->rollno), &(s->marks));
    //     compute_grade(s);
    // }
    // return num;
}
