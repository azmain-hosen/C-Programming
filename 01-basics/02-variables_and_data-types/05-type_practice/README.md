# Type Practice in C

This section contains a practical C programming example that combines variables, data types, constants, Boolean values, and formatted output in a single program.

## Practice Program

### 1. Student Information

**File:** `01-student-information.c`

This program displays student information using different C data types.

**Topics demonstrated:**

- Declaring and initializing variables
- Using `int` to store age and semester count
- Using `float` to store height
- Using `char` to store a grade
- Using `bool` with the `<stdbool.h>` header
- Declaring a constant with the `const` keyword
- Displaying formatted output using `printf()`
- Using escape sequences such as `\n` and `\t`

## Data Types and Variables Used

| Variable | Data Type | Purpose |
|---|---|---|
| `age` | `int` | Stores age |
| `height` | `float` | Stores height |
| `grade` | `char` | Stores a grade |
| `is_student` | `bool` | Represents student status |
| `semesters` | `const int` | Stores a constant semester count |

## Header Files

The program uses these header files:

```c
#include <stdio.h>
#include <stdbool.h>
```

- `<stdio.h>` provides functions such as `printf()`.
- `<stdbool.h>` provides the `bool`, `true`, and `false` identifiers in C.

## Folder Structure

```text
05-type-practice/
├── output/
├── 01-student-information.c
└── README.md
```

## Learning Objectives

After completing this practice program, learners should be able to:

- Combine multiple data types in one program.
- Initialize and use variables and constants.
- Display different types of values using appropriate format specifiers.
- Format console output using escape sequences.
- Apply previously learned concepts in a practical example.

## Purpose

The goal of this section is to reinforce the concepts covered in Basic Data Types, Variables, and Type Modifiers through a single practical C program.