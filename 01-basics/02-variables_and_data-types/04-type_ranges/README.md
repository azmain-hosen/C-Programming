# Integer Type Ranges in C

This section demonstrates how to determine the minimum and maximum values of integer types in C using predefined constants from the `<limits.h>` header.

## Topics Covered

### 1. Integer Ranges

**File:** `01-integer_ranges.c`

- Including the `<limits.h>` header.
- Using `INT_MIN` to get the minimum value of `int`.
- Using `INT_MAX` to get the maximum value of `int`.
- Using `UINT_MAX` to get the maximum value of `unsigned int`.
- Displaying integer limits with `printf()`.

## Important Constants

| Constant | Description |
|---|---|
| `INT_MIN` | Minimum representable value of `int` |
| `INT_MAX` | Maximum representable value of `int` |
| `UINT_MAX` | Maximum representable value of `unsigned int` |

## Header File

The `<limits.h>` header defines constants that describe the minimum and maximum values supported by standard integer types.

```c
#include <limits.h>
```

## Example Output

On a system where `int` and `unsigned int` use 32 bits, the output is typically:

```text
INT_MIN : -2147483648
INT_MAX : 2147483647
UINT_MAX : 4294967295
```

Actual values depend on the C implementation.

## Folder Structure

```text
04-type-ranges/
├── output/
├── 01-integer_ranges.c
└── README.md
```

## Concepts Practiced

- The `<limits.h>` header
- Integer minimum and maximum values
- Signed and unsigned integer ranges
- Predefined macros
- Formatted output using `%d` and `%u`

## Learning Objectives

After completing this section, learners should be able to:

- Find the limits of integer types using standard macros.
- Explain the difference between signed and unsigned integer ranges.
- Use `<limits.h>` to inspect implementation-specific integer limits.
- Display integer limit values using appropriate format specifiers.

## Purpose

The goal of this section is to understand the value ranges supported by integer types and how to inspect those ranges in C programs.