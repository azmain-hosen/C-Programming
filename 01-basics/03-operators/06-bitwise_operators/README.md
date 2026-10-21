# Bitwise Operators in C

This section covers bitwise operators in C programming. These operators perform operations on individual bits of integer values.

## Topics Covered

### 1. Bitwise AND (`&`)

**File:** `01-bitwise-and.c`

- Using the bitwise AND operator (`&`).
- Understanding how corresponding bits are compared.
- A result bit is `1` only when both corresponding bits are `1`.

### 2. Bitwise OR (`|`)

**File:** `02-bitwise-or.c`

- Using the bitwise OR operator (`|`).
- Understanding how corresponding bits are combined.
- A result bit is `1` when at least one corresponding bit is `1`.

### 3. Bitwise XOR (`^`)

**File:** `03-bitwise-xor.c`

- Using the bitwise XOR operator (`^`).
- Understanding how corresponding bits are compared.
- A result bit is `1` when the corresponding bits are different.

### 4. Bitwise NOT (`~`)

**File:** `04-bitwise-not.c`

- Using the bitwise NOT operator (`~`).
- Inverting the bits of an integer operand.
- Understanding that the result depends on the integer type and its representation.

### 5. Left Shift (`<<`)

**File:** `05-left-shift.c`

- Using the left-shift operator (`<<`).
- Shifting bits toward higher bit positions.
- Understanding how shifting affects an integer value.

### 6. Right Shift (`>>`)

**File:** `06-right-shift.c`

- Using the right-shift operator (`>>`).
- Shifting bits toward lower bit positions.
- Understanding how right shifting affects an integer value.

## Bitwise Operators

| Operator | Name | Purpose |
|---|---|---|
| `&` | Bitwise AND | Sets a result bit when both corresponding bits are `1` |
| `\|` | Bitwise OR | Sets a result bit when either corresponding bit is `1` |
| `^` | Bitwise XOR | Sets a result bit when corresponding bits differ |
| `~` | Bitwise NOT | Inverts the bits of the operand |
| `<<` | Left shift | Shifts bits toward higher positions |
| `>>` | Right shift | Shifts bits toward lower positions |

## Example

```c
#include <stdio.h>

int main(void)
{
    unsigned int a = 5;
    unsigned int b = 3;

    printf("Bitwise AND: %u\n", a & b);
    printf("Bitwise OR: %u\n", a | b);
    printf("Bitwise XOR: %u\n", a ^ b);

    return 0;
}
```

**Output:**

```text
Bitwise AND: 1
Bitwise OR: 7
Bitwise XOR: 6
```

## Important Notes

- Bitwise operators work on integer operands.
- Bitwise operators (`&`, `|`, `^`) are different from logical operators (`&&`, `||`).
- Shift operations must use valid shift counts.
- Bitwise NOT (`~`) inverts the bits of the promoted integer operand.

## Folder Structure

```text
06-bitwise_operators/
├── output/
├── 01-bitwise-and.c
├── 02-bitwise-or.c
├── 03-bitwise-xor.c
├── 04-bitwise-not.c
├── 05-left-shift.c
├── 06-right-shift.c
└── README.md
```

## Concepts Practiced

- Binary representation of integers
- Bitwise AND, OR, XOR, and NOT
- Left-shift and right-shift operations
- Difference between bitwise and logical operators
- Manipulating individual bits

## Learning Objectives

After completing this section, learners should be able to:

- Explain how bitwise operators process integer values.
- Perform basic bitwise operations.
- Understand left and right shifts.
- Distinguish bitwise operators from logical operators.
- Recognize the importance of valid operands and shift counts.

## Purpose

The goal of this section is to understand bit-level operations in C and build a foundation for topics such as bit manipulation, flags, and low-level programming.