# Type Casting in C

This section covers explicit type casting in C programming. Type casting converts a value from one data type to another using a cast operator.

## Topics Covered

### 1. Integer to Float

**File:** `01-int-to-float.c`

- Converting an integer value to `float`.
- Using the cast operator `(float)`.
- Displaying floating-point values using `printf()`.

### 2. Float to Integer

**File:** `02-float-to-int.c`

- Converting a floating-point value to `int`.
- Using the cast operator `(int)`.
- Understanding that the fractional part is discarded when converting a floating-point value to an integer.

### 3. Integer to Character

**File:** `03-int_to_char.c`

- Converting an integer value to `char`.
- Using the cast operator `(char)`.
- Understanding character codes and their representation.

### 4. Character to Integer

**File:** `04-char_to_int.c`

- Converting a character value to `int`.
- Using the cast operator `(int)`.
- Exploring the integer code associated with a character.

## Example

```c
#include <stdio.h>

int main(void)
{
    int number = 25;
    float converted_number = (float)number;

    printf("Original integer: %d\n", number);
    printf("Converted float: %.2f\n", converted_number);

    return 0;
}
```

**Output:**

```text
Original integer: 25
Converted float: 25.00
```

## Important Notes

- Explicit type casting uses the cast operator, such as `(float)` or `(int)`.
- Converting a `float` to `int` discards the fractional part; it does not round to the nearest integer.
- Converting an integer to a character type may produce a character representation that depends on the execution character set and the value's represent ability.
- Character codes such as `65` for `'A'` apply to ASCII-compatible systems.

## Folder Structure

```text
01-type_casting/
├── output/
├── 01-int-to-float.c
├── 02-float-to-int.c
├── 03-int_to_char.c
├── 04-char_to_int.c
└── README.md
```

## Concepts Practiced

- Explicit type casting
- Integer and floating-point data types
- Character and integer conversions
- Cast operators
- Type conversion behavior
- Formatted output with `printf()`

## Learning Objectives

After completing this section, learners should be able to:

- Convert values between basic C data types using explicit casts.
- Understand the behavior of integer-to-float and float-to-integer conversions.
- Explain how character and integer conversions work.
- Recognize potential data loss during type conversion.

## Purpose

The goal of this section is to understand explicit type casting and how C handles conversions between fundamental data types.
