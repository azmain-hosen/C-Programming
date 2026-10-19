# Type Modifiers in C

This section introduces type modifiers in C programming. Type modifiers change the range or properties of certain data types.

## Topics Covered

### 1. Signed and Unsigned Integers

**File:** `01-signed_unsigned.c`

- Using `signed int` to store positive and negative integer values.
- Using `unsigned int` to represent non-negative integer values.
- Displaying signed integers using `%d`.
- Displaying unsigned integers using `%u`.

**Example values:**

- `signed int a = -45`
- `signed int b = 45`
- `unsigned int c = 43`

### 2. Short and Long Integer Types

**File:** `02-short-long.c`

- Using `short int` for short integer types.
- Using `int` for regular integer types.
- Using `long int` and `long long int` for integer types with different minimum range requirements.
- Using `sizeof()` to determine the storage size of a data type or variable.
- Using `%zu` to display the result of `sizeof()`.

**Example types:**

- `short int`
- `int`
- `long int`
- `long long int`

Note: The actual storage sizes of these types depend on the C implementation and platform.

## Folder Structure

```text
03-type-modifiers/
├── output/
├── 01-signed_unsigned.c
├── 02-short-long.c
└── README.md
```

## Concepts Practiced

- Signed and unsigned integer types
- Type modifiers: `signed`, `unsigned`, `short`, and `long`
- Integer declarations and initialization
- Format specifiers such as `%d`, `%u`, and `%zu`
- The `sizeof()` operator
- Understanding storage size and integer ranges

## Learning Objectives

After completing this section, learners should be able to:

- Distinguish between signed and unsigned integers.
- Understand the purpose of `short`, `long`, and `long long`.
- Use appropriate format specifiers for integer output.
- Determine a type's storage size using `sizeof()`.
- Understand that type sizes can vary across platforms.

## Purpose

The goal of this section is to understand how C provides different integer types and how their properties affect the values they can represent.