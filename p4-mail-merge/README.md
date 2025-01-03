# Mail Merge

The goal of this project is to write a simple mail merge program in C.  This will be used to generate a series of "form letters" to be sent to students with their marks and grades.

The input to this program will be a csv file:

- `students.csv`: This is a CSV (comma-separated values) file that contains a list of students for whom you need to create the form letters.

## Project structure

```
├── inc (contains the header files)
│   ├── student.h (student_t and function declarations)
│   └── utils.h (function declarations and file_printf macro)
├── Makefile (contains targets for building and testing)
├── README.md
├── mail-merge-results (generated using the make command)
├── src (the source files)
│   ├── main.c (mail-merge program with command-line arguments)
│   ├── student.c (functions related to student)
│   └── utils.c (some file related utitlity functions)
├── students.csv (student data)
├── template.txt (sample template format)
└── test (contains sample programs that test a particular function)
    ├── test_compute_grade.c
    ├── test_file_get_content.c
    ├── test_file_n_lines.c
    ├── test_file_printf.c
    ├── test_read_csv.c
    └── test_student_struct.c
```

## Tasks

1. Defining `student_t` type in `student.h`
2. Implementing the `print_student` function in `student.c`.  
    Run `make test_student_struct` to test this function.
3. Implementing the `compute_grade` function in `student.c`.   
   Run `make test_compute_grade` to test this function.
4. Completing the `get_student_data_from_csv` function in `student.c`.  
   Run `make test_read_csv` to test this this function.
5. Creating a c-style format string in `main.c` similar to the example in `template.txt` file.
6. Using the `file_printf` macro (defined in `utils.h`) in `main.c` to print each template to the required files.


After completing the above tasks, run `make` to build the `mail-merge-results` executable. 

Perform the mail merge by passing the csv file and the output directory as command-line arguments.

```
./mail-merge-results students.csv output_dir
```

Now the reqired files will have generated in a folder called `output_dir`.




## Template expansion

Consider the following template - the template can be written as a single string in your code:

```
To,
{name} (roll no. {rollno})
Student of BS-ES course, IIT Madras

Dear {name},

You scored {marks} marks in the exam, and your grade is {grade}.

Sincerely,
The Dean
```

In this text, any parts that are placed within curly brackets (eg. `{name}`, `{rollno}` etc) are *placeholders* that need to be replaced with the appropriate text.  For example, if we had the following information:

```
name: Nitin C
rollno: abc123
marks: 50
```

then you need to expand the text as 

```
To,
Nitin C (roll no. abc123)
Student of BS-ES course, IIT Madras

Dear Nitin C,

You scored 50 marks in the exam, and your grade is D.

Sincerely,
The Dean
```

Note that in the above text, the `{grade}` was not specified, but needs to be computed with the following formula for marks:

- marks >= 90: S
- 90 > marks >= 80: A
- 80 > marks >= 70: B
- 70 > marks >= 60: C
- 60 > marks >= 50: D
- 50 > marks >= 40: E
- marks < 40: U

## CSV input file

The list of students will be given to you as a CSV (comma-separated values) file.  This contains a list of entries where each line is one student, and the data are separated by the *comma* (`,`) symbol.  For example:

```
Nitin C,abc123,50
Richard Feynman,xyz987,85
D Ritchie,iop567,99
```

You need to generate one output file for each user, and the name of the file should be `{rollno}.txt`.  For example, the files for this CSV will be

```
abc123.txt
xyz987.txt
iop567.txt
```

## Useful functions

- [`fgets`](https://en.cppreference.com/w/c/io/fgets)
- [`fscanf`](https://en.cppreference.com/w/c/io/fscanf)
- [`sprintf` and `fprintf`](https://en.cppreference.com/w/c/io/fprintf)

Other useful functions - not strictly needed here but can be used to generalize.

- [`strtok`](https://en.cppreference.com/w/c/string/byte/strtok)
- [`strstr`](https://en.cppreference.com/w/c/string/byte/strstr)

You should be able to read the CSV file using the `strtok` function, but you can also use any other C functions if needed.  The `sprintf` function can be used to generate the filenames into which you need to save the outputs, and also to generate the output if needed (although you can also use `fprintf` directly for that).

The `strstr` function can be useful to find placeholders and replace them with format specifiers (such as `%s`).

