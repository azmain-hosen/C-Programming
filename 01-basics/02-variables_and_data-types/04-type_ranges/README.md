# Integer Type Ranges in C

This section demonstrates how to determine the minimum and maximum values supported by different integer types in C programming.

It uses predefined macros from the standard `<limits.h>` header to examine signed and unsigned integer ranges.

## Topics Covered

### 1. Integer Type Ranges

**File:** `01-integer_ranges.c`

- Including the `<limits.h>` header.
- Understanding minimum and maximum integer values.
- Using predefined macros to determine integer limits.
- Comparing signed and unsigned integer ranges.
- Displaying integer limits using appropriate format specifiers.

## Important Header File

The `<limits.h>` header defines macros that describe the minimum and maximum values supported by standard integer types.

```c
#include <limits.h>
```

## Important Integer Limit Macros

| Data Type | Minimum Macro | Maximum Macro |
|---|---|---|
| `signed char` | `SCHAR_MIN` | `SCHAR_MAX` |
| `unsigned char` | 0 | `UCHAR_MAX` |
| `short int` | `SHRT_MIN` | `SHRT_MAX` |
| `unsigned short int` | 0 | `USHRT_MAX` |
| `int` | `INT_MIN` | `INT_MAX` |
| `unsigned int` | 0 | `UINT_MAX` |
| `long int` | `LONG_MIN` | `LONG_MAX` |
| `unsigned long int` | 0 | `ULONG_MAX` |
| `long long int` | `LLONG_MIN` | `LLONG_MAX` |
| `unsigned long long int` | 0 | `ULLONG_MAX` |

## Format Specifiers

Different integer types require appropriate format specifiers when displayed using `printf()`.

| Format Specifier | Purpose |
|---|---|
| `%d` | Signed integer |
| `%u` | Unsigned integer |
| `%ld` | Long integer |
| `%lu` | Unsigned long integer |
| `%lld` | Long long integer |
| `%llu` | Unsigned long long integer |

## Example

```c
#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("INT_MIN : %d\n", INT_MIN);
    printf("INT_MAX : %d\n", INT_MAX);
    printf("UINT_MAX : %u\n", UINT_MAX);

    return 0;
}
```

## Example Output

On a system where `int` and `unsigned int` use 32 bits:

```text
INT_MIN : -2147483648
INT_MAX : 2147483647
UINT_MAX : 4294967295
```

Actual values depend on the C implementation and platform.

## Important Notes

- The `<limits.h>` header provides predefined integer limit macros.
- Signed integer types can represent negative and non-negative values.
- Unsigned integer types can represent only non-negative values.
- Each integer type has implementation-defined minimum requirements for its supported range.
- The actual maximum and minimum values can differ across platforms.
- `unsigned` integer types have a minimum value of zero.

## Folder Structure

```text
04-type_ranges/
├── output/
├── 01-integer_ranges.c
└── README.md
```

## Concepts Practiced

- The `<limits.h>` header.
- Integer minimum and maximum values.
- Signed and unsigned integer ranges.
- Integer limit macros.
- Format specifiers for different integer types.
- Platform-dependent integer ranges.

## Learning Objectives

After completing this section, learners should be able to:

- Find integer limits using standard macros.
- Understand minimum and maximum integer values.
- Distinguish between signed and unsigned integer ranges.
- Use `<limits.h>` to inspect integer limits.
- Choose appropriate format specifiers for integer values.
- Understand how integer ranges depend on the C implementation.

## How to Compile and Run

Open a terminal inside this folder.

Create the output directory if it does not exist:

```bash
mkdir -p output
```

Compile:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic -Wconversion -Wshadow 01-integer_ranges.c -o output/01-integer_ranges
```

Run:

```bash
./output/01-integer_ranges
```

## Practice Ideas

1. Compare the minimum and maximum values of different signed integer types.
2. Compare signed and unsigned integer ranges.
3. Experiment with the integer limit macros from `<limits.h>`.
4. Observe how integer ranges differ across platforms.

## Purpose

The purpose of this section is to understand integer ranges in C programming and learn how to inspect the limits of different integer types using standard predefined macros.