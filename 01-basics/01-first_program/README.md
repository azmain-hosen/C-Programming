# First Program in C

This folder introduces the very first concepts of C programming. It focuses on basic syntax, the structure of a C program, and how to print output to the console using the standard input/output library.

## Topics Covered

- Writing a basic C program
- The main() function
- The printf() function
- Including standard headers with stdio.h
- Escape sequences such as \n

## Learning Objectives

By the end of this section, you should be able to:

- Create and run a simple C program
- Understand the structure of a C file
- Print text to the screen
- Use multiple printf() statements
- Format output with escape sequences

## Files in This Folder

1. 01-hello_world.c
   - Prints a simple "Hello World" message.

2. 02-multiple_printf.c
   - Uses multiple printf() calls to display several lines.

3. 03-escape_sequences.c
   - Demonstrates escape sequences like newline, tabs, and quotes.

4. 04-formatted_output.c
   - Shows formatted output using placeholders and text formatting.

5. 05-print_practice.c
   - Practice file for printing custom messages and output patterns.

## Basic C Program Structure

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### Explanation

- #include <stdio.h> includes the standard input/output library.
- int main() is the main function where program execution starts.
- printf() prints text on the screen.
- \n moves the cursor to the next line.
- return 0; indicates the program ended successfully.

## How to Compile and Run

Open a terminal in this folder and run:

```bash
gcc 01-hello_world.c -o hello
./hello
```

Replace 01-hello_world.c with any file name you want to compile.

## Practice Ideas

- Print your name and address
- Display multiple lines using printf()
- Use different escape sequences like \t, \n, and \"
- Create a small output pattern using repeated printf() statements

## Notes

This is the foundation of C programming. Once you understand how output works, you can move to variables, operators, control flow, loops, and more advanced topics.

## Summary

This section builds the basic understanding required for every C program: include headers, define main(), and print output using printf().
