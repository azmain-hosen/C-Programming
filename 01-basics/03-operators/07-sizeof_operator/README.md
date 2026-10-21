# Sizeof Operator in C

This section introduces the `sizeof` operator in C programming. It determines the storage size, in bytes, of a data type or object.

## Topics Covered

### 1. The `sizeof` Operator

- Using `sizeof` with variables.
- Using `sizeof` with data types.
- Determining storage size in bytes.
- Understanding that storage sizes can vary across C implementations.
- Displaying the result using the `%zu` format specifier.

## Understanding `sizeof`

The `sizeof` operator evaluates the size of its operand in bytes. Its result has the type `size_t`.

For example:

```c
#include <stdio.h>

int main(void)
{
    int number = 10;
    double decimal = 3.14;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of number: %zu bytes\n", sizeof(number));
    printf("Size of double: %zu bytes\n", sizeof(decimal));

    return 0;
}
```

## Important Notes

- `sizeof` is an operator, not a function.
- The result is measured in bytes.
- `sizeof(int)` gives the storage size of the `int` type on the current implementation.
- The exact sizes of data types depend on the C implementation and platform.
- `%zu` is the appropriate format specifier for printing a `size_t` value.

## Concepts Practiced

- The `sizeof` operator
- Storage size in bytes
- Using `sizeof` with data types and variables
- The `size_t` type
- Formatted output using `%zu`

## Learning Objectives

After completing this section, learners should be able to:

- Determine the storage size of variables and data types.
- Use the `sizeof` operator correctly.
- Display size values using `%zu`.
- Understand the difference between storage size and the range of values a type can represent.

## Purpose

The goal of this section is to understand how to inspect the storage sizes of C data types and prepare for more advanced topics involving memory and data representation.