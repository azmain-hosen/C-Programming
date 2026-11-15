# Basic Data Types in C

This section introduces fundamental data types in C programming. It demonstrates how to declare variables, assign values, and display different types of data using the `printf()` function.

It also introduces Boolean values and the use of `void` in function declarations and definitions.

## Topics Covered

### 1. Integer (`int`)

**File:** `01-integer.c`

- Declaring an integer variable.
- Assigning an integer value.
- Displaying an integer using `%d`.

### 2. Float (`float`)

**File:** `02-float.c`

- Declaring a floating-point variable.
- Assigning a decimal value.
- Understanding the `f` suffix in floating-point literals.
- Displaying a floating-point value using `%.2f`.

### 3. Double (`double`)

**File:** `03-double.c`

- Declaring a double-precision floating-point variable.
- Assigning a decimal value.
- Displaying a double value using `%f`.
- Controlling decimal precision using `%.6f`.

### 4. Character (`char`)

**File:** `04-character.c`

- Declaring a character variable.
- Assigning a single character using single quotes.
- Displaying a character using `%c`.

### 5. Boolean (`bool`)

**File:** `05-boolean.c`

- Including the `<stdbool.h>` header.
- Declaring Boolean variables.
- Using `true` and `false`.
- Displaying Boolean values as `1` and `0` using `%d`.

### 6. Void (`void`)

**File:** `06-void.c`

- Understanding `void` as a function return type.
- Using `void` in the parameter list to indicate no parameters.
- Defining and calling a function that does not return a value.

## Folder Structure

```text
01-basic_data-types/
├── output/
├── 01-integer.c
├── 02-float.c
├── 03-double.c
├── 04-character.c
├── 05-boolean.c
├── 06-void.c
└── README.md
```

## Concepts Practiced

- Fundamental C data types.
- Variable declaration and assignment.
- Integer values.
- Floating-point values.
- Character representation.
- Boolean values using `<stdbool.h>`.
- Format specifiers in `printf()`.
- Functions with and without return values.

## Format Specifiers

| Format Specifier | Purpose |
|---|---|
| `%d` | Display an integer |
| `%f` | Display a floating-point value |
| `%.2f` | Display two digits after the decimal point |
| `%.6f` | Display six digits after the decimal point |
| `%c` | Display a character |
| `%s` | Display a string |

## Important Notes

- `int` is used for integer values.
- `float` and `double` are used for floating-point values.
- `double` typically provides greater precision than `float`.
- `char` is used to represent character values.
- `bool` is available through `<stdbool.h>` in C17.
- Boolean values can be displayed as `1` (true) and `0` (false) using `%d`.
- `void` is commonly used as a function return type when no value is returned.
- Using `void` in a function parameter list explicitly indicates that the function takes no parameters.

## How to Compile and Run

Open a terminal inside this folder.

Create the output directory if it does not exist:

```bash
mkdir -p output
```

Compile a program using GCC:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic 01-integer.c -o output/01-integer
```

Run the compiled program:

```bash
./output/01-integer
```

Replace the source filename and executable name to compile another program.

## Practice Ideas

1. Declare and assign integer variables with different values.
2. Experiment with different floating-point values.
3. Compare the displayed precision of `float` and `double`.
4. Store different characters in a `char` variable.
5. Experiment with Boolean values using `true` and `false`.
6. Create additional functions with and without return values.

## Learning Objectives

After completing this section, learners should be able to:

- Identify and use the fundamental C data types introduced in this section.
- Declare variables and assign values.
- Understand integer and floating-point values.
- Display different data types using appropriate format specifiers.
- Understand Boolean values.
- Understand how `void` is used in function declarations and definitions.

## Purpose

The purpose of this section is to establish a foundation in C data types and prepare for more advanced topics such as variables, type modifiers, type ranges, and type conversions.