# First Program in C

This folder introduces the fundamentals of writing and executing C programs. It covers the basic structure of a C program, standard input/output, the `printf()` function, escape sequences, and formatted output.

## Topics Covered

- Basic structure of a C program
- The `main()` function
- The `printf()` function
- Including standard headers using `stdio.h`
- Using multiple `printf()` statements
- Escape sequences
- Formatted output using format specifiers
- String literal concatenation

## Learning Objectives

After completing this section, you should be able to:

- Write and execute a basic C program.
- Understand the purpose of `#include <stdio.h>`.
- Understand the role of the `main()` function.
- Display text using `printf()`.
- Use multiple `printf()` function calls.
- Apply common escape sequences.
- Display variables using format specifiers.
- Combine adjacent string literals in a `printf()` statement.

## Files in This Folder

| File | Description |
|---|---|
| `01-hello_world.c` | Prints the classic Hello World message. |
| `02-multiple_printf.c` | Demonstrates multiple `printf()` function calls. |
| `03-escape_sequences.c` | Demonstrates newline, tab, quotation marks, and backslashes. |
| `04-formatted_output.c` | Demonstrates variables and formatted output using format specifiers. |
| `05-print_practice.c` | Practices formatted text layouts and adjacent string literals. |

## Basic C Program Structure

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");

    return 0;
}
```

### Explanation

- `#include <stdio.h>` includes the standard input/output header.
- `int main(void)` defines the main function, where program execution begins.
- `printf()` displays output on the screen.
- `\n` moves the cursor to the next line.
- `return 0;` indicates successful program termination.

## Escape Sequences

Escape sequences are special character combinations used inside string literals.

| Escape Sequence | Description |
|---|---|
| `\n` | Newline |
| `\t` | Horizontal tab |
| `\\` | Backslash |
| `\"` | Double quotation mark |
| `\'` | Single quotation mark |

## Formatted Output

The `printf()` function supports format specifiers to display different types of values.

| Format Specifier | Data Type / Purpose |
|---|---|
| `%d` | Integer |
| `%f` | Floating-point number |
| `%.2f` | Floating-point number with two digits after the decimal point |
| `%c` | Character |
| `%s` | String |
| `%lld` | Long long integer |

Example:

```c
#include <stdio.h>

int main(void)
{
    int age = 18;
    float score = 95.5f;
    char grade = 'A';
    char name[] = "Alex";

    printf("Name  : %s\n", name);
    printf("Age   : %d\n", age);
    printf("Score : %.2f\n", score);
    printf("Grade : %c\n", grade);

    return 0;
}
```

## Adjacent String Literals

In C, consecutive string literals are automatically concatenated during compilation.

Example:

```c
printf("Hello, "
       "World!\n");
```

Output:

```text
Hello, World!
```

This technique helps organize long strings across multiple source-code lines.

## How to Compile and Run

Make sure you are inside this folder and that the `output` directory exists.

Compile:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic 01-hello_world.c -o output/01-hello_world
```

Run:

```bash
./output/01-hello_world
```

Replace the source filename and executable name to compile another program.

## Practice Ideas

1. Print your name, age, and country.
2. Display multiple lines using separate `printf()` calls.
3. Practice different escape sequences.
4. Create a formatted student profile using variables.
5. Print a structured text layout using adjacent string literals.

## Summary

This section establishes the foundation of C programming. It introduces the basic program structure, output operations, escape sequences, and formatted output.

These concepts will be used throughout the rest of the C programming journey.