# Variables and Data Types in C

This section introduces the fundamental concepts of variables and data types in C programming. It covers basic data types, variable declaration and initialization, type modifiers, integer ranges, and practical exercises.

Each subsection contains C programming examples and documentation to help develop a clear understanding of how C represents and stores different types of data.

## Topics Covered

### 1. Basic Data Types

This subsection introduces fundamental data types in C.

- Integer (`int`)
- Floating-point (`float`)
- Double-precision floating-point (`double`)
- Character (`char`)
- Boolean (`bool`)
- Void (`void`)

**Folder:** `01-basic_data-types/`

### 2. Variables

This subsection covers how variables are declared, initialized, assigned, and used in C.

- Variable declaration
- Variable initialization
- Variable assignment
- Variable reassignment
- Working with multiple variables
- Constant variables using `const`
- Variable naming rules

**Folder:** `02-variables/`

### 3. Type Modifiers

This subsection introduces type modifiers that affect the characteristics and value ranges of integer types.

- `signed`
- `unsigned`
- `short`
- `long`
- `long long`
- Using the `sizeof` operator to determine storage size

**Folder:** `03-type_modifiers/`

### 4. Type Ranges

This subsection demonstrates how to determine the minimum and maximum values supported by integer types.

- The `<limits.h>` header
- `INT_MIN`
- `INT_MAX`
- `UINT_MAX`
- Signed and unsigned integer ranges
- Predefined integer limit macros

**Folder:** `04-type_ranges/`

### 5. Practical Exercises

The practical exercise combines previously learned concepts in a single C program.

**Student Information Program**

- Using multiple data types
- Variable declaration and initialization
- Constant variables
- Boolean values
- Formatted output
- Escape sequences

**Folder:** `05-type_practice/`

## Folder Structure

```text
02-variables_and_data-types/
│
├── 01-basic_data-types/
│   ├── output/
│   ├── 01-integer.c
│   ├── 02-float.c
│   ├── 03-double.c
│   ├── 04-character.c
│   ├── 05-boolean.c
│   ├── 06-void.c
│   └── README.md
│
├── 02-variables/
│   ├── output/
│   ├── 01-declaration.c
│   ├── 02-initialization.c
│   ├── 03-assignment.c
│   ├── 04-reassignment.c
│   ├── 05-multiple_variables.c
│   ├── 06-const_variable.c
│   ├── 07-variable_naming.c
│   └── README.md
│
├── 03-type_modifiers/
│   ├── output/
│   ├── 01-signed_unsigned.c
│   ├── 02-short-long.c
│   └── README.md
│
├── 04-type_ranges/
│   ├── output/
│   ├── 01-integer_ranges.c
│   └── README.md
│
├── 05-type_practice/
│   ├── output/
│   ├── 01-student-information.c
│   └── README.md
│
└── README.md
```

Each topic folder contains its own C programs and documentation.

## Concepts Practiced

- Fundamental C data types
- Variable declaration and initialization
- Variable assignment and reassignment
- Constants using the `const` keyword
- Multiple variables and data types
- Variable naming rules and conventions
- Signed and unsigned integer types
- Integer type modifiers
- Storage size using the `sizeof` operator
- Integer minimum and maximum values
- Predefined macros from `<limits.h>`
- Formatted output using `printf()`

## Learning Objectives

After completing this section, learners should be able to:

- Identify and use fundamental C data types.
- Declare, initialize, assign, and reassign variables.
- Understand the difference between declaration, initialization, and assignment.
- Use constants and follow variable naming rules.
- Work with multiple variables of different data types.
- Understand signed and unsigned integers.
- Use type modifiers such as `short`, `long`, and `long long`.
- Determine the storage size of variables using `sizeof`.
- Find integer limits using standard macros from `<limits.h>`.
- Use appropriate format specifiers with `printf()`.
- Apply previously learned concepts in practical C programs.

## Compilation and Execution

Each subsection contains its own C programs and instructions for compiling and running them.

To compile a C program using GCC, the following command can be used:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic program.c -o program
```

Run the compiled program:

```bash
./program
```

Refer to the README.md inside each topic folder for specific compilation and execution instructions.

## Purpose

The goal of this section is to build a strong foundation in C programming by understanding how different data types represent information, how variables store and manage values, and how integer types handle storage sizes and value ranges.

These concepts provide the foundation for more advanced C programming topics such as operators, type conversions, control flow, arrays, and functions.