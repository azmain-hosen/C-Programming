# Type Modifiers in C

This section introduces type modifiers in C programming. Type modifiers are used to modify the range and characteristics of certain integer data types.

The examples demonstrate signed and unsigned integers, different integer type modifiers, and the use of the `sizeof` operator to determine storage size.

## Topics Covered

### 1. Signed and Unsigned Integers

**File:** `01-signed_unsigned.c`

- Using `signed int` to store negative and positive integer values.
- Using `unsigned int` to represent non-negative integer values.
- Understanding the difference between signed and unsigned integers.
- Displaying signed integers using `%d`.
- Displaying unsigned integers using `%u`.

**Example values:**

```c
signed int negative_number = -45;
signed int positive_number = 45;
unsigned int unsigned_number = 43;
```

### 2. Short and Long Integer Types

**File:** `02-short-long.c`

- Using `short int` for integer values.
- Using `int` for standard integer values.
- Using `long int` and `long long int` for integer types with different minimum range requirements.
- Understanding the storage size of different integer types.
- Using the `sizeof` operator.
- Using `%zu` to display the result of `sizeof`.

**Example types:**

- `short int`
- `int`
- `long int`
- `long long int`

## Understanding Type Modifiers

### Signed Integer

A signed integer can represent both negative and non-negative integer values.

Example:

```c
signed int temperature = -10;
```

### Unsigned Integer

An unsigned integer can represent only non-negative integer values.

Example:

```c
unsigned int age = 18;
```

### Short and Long

C provides different integer types with different minimum value-range requirements.

- `short int`
- `int`
- `long int`
- `long long int`

Their actual storage sizes and maximum representable values depend on the C implementation.

## The sizeof Operator

The `sizeof` operator determines the storage size of a data type or object in bytes.

Example:

```c
#include <stdio.h>

int main(void)
{
    int number = 100;

    printf("Size: %zu bytes\n", sizeof(number));

    return 0;
}
```

### Important Notes

- `sizeof` is an operator, not a function.
- Its result has the type `size_t`.
- `%zu` is the appropriate format specifier for displaying a `size_t` value with `printf`.
- The actual sizes of integer types depend on the implementation and platform.
- `long int` and `long long int` can have the same storage size on a particular system.

## Folder Structure

```text
03-type_modifiers/
├── output/
├── 01-signed_unsigned.c
├── 02-short-long.c
└── README.md
```

## Concepts Practiced

- Signed and unsigned integer types.
- Type modifiers: `signed`, `unsigned`, `short`, and `long`.
- Integer declaration and initialization.
- Negative and non-negative integer values.
- Format specifiers: `%d`, `%u`, and `%zu`.
- The `sizeof` operator.
- Storage size and integer ranges.
- Platform-dependent integer sizes.

## Learning Objectives

After completing this section, learners should be able to:

- Distinguish between signed and unsigned integers.
- Understand the purpose of `short`, `long`, and `long long`.
- Declare and initialize different integer types.
- Choose appropriate format specifiers.
- Determine storage size using the `sizeof` operator.
- Understand that integer sizes and ranges depend on the C implementation.

## How to Compile and Run

Open a terminal inside this folder.

Create the output directory if it does not exist:

```bash
mkdir -p output
```

Compile the first program:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic 01-signed_unsigned.c -o output/01-signed_unsigned
```

Run:

```bash
./output/01-signed_unsigned
```

Compile the second program:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic 02-short-long.c -o output/02-short-long
```

Run:

```bash
./output/02-short-long
```

## Practice Ideas

1. Declare signed integer variables with positive and negative values.
2. Experiment with unsigned integer variables.
3. Compare the storage sizes of `short int`, `int`, `long int`, and `long long int`.
4. Observe how integer type sizes vary across different platforms.
5. Experiment with `sizeof` using different integer types.

## Purpose

The purpose of this section is to understand integer type modifiers in C and how they affect the representable ranges and storage requirements of integer types.