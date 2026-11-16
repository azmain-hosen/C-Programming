# Logical Operators in C

This section introduces logical operators in C programming. These operators combine multiple conditions or reverse a logical condition and produce an integer result of either `1` (true) or `0` (false).

The examples demonstrate Logical AND, Logical OR, and Logical NOT operators.

## Topics Covered

### 1. Logical AND (`&&`)

**File:** `01-logical_and.c`

- Using the logical AND operator (`&&`).
- Understanding that both operands must be true for the result to be true.
- Combining multiple conditions in one expression.

### 2. Logical OR (`||`)

**File:** `02-logical_or.c`

- Using the logical OR operator (`||`).
- Understanding that at least one operand must be true for the result to be true.
- Combining alternative conditions.

### 3. Logical NOT (`!`)

**File:** `03-logical_not.c`

- Using the logical NOT operator (`!`).
- Reversing a logical value.
- Understanding how true becomes false and false becomes true.

## Logical Operators

| Operator | Name | Purpose |
|---|---|---|
| `&&` | Logical AND | True only when both operands are true |
| <code>&#124;&#124;</code> | Logical OR | True when at least one operand is true |
| `!` | Logical NOT | Reverses the logical value |

## Truth Tables

Truth tables show the possible results of logical operations.

### Logical AND (`&&`)

The result is true only when both operands are true.

| A | B | A && B |
|---:|---:|---:|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### Logical OR (`||`)

The result is true when at least one operand is true.

| A | B | A \|\| B |
|---:|---:|---:|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

### Logical NOT (`!`)

The result is the opposite of the operand's logical value.

| A | !A |
|---:|---:|
| 0 | 1 |
| 1 | 0 |

## True and False Values in C

In C:

- Zero (`0`) represents false in a logical condition.
- Any nonzero value represents true.
- Logical operators produce an `int` result of either `0` or `1`.

Example:

```c
#include <stdio.h>

int main(void)
{
    int first = 5;
    int second = 0;

    printf("First: %d\n", !!first);
    printf("Second: %d\n", !!second);

    return 0;
}
```

Output:

```text
First: 1
Second: 0
```

## Logical Operator Precedence

Logical operators have different precedence levels.

| Priority | Operator | Description |
|---|---|---|
| Higher | `!` | Logical NOT |
| Middle | `&&` | Logical AND |
| Lower | `||` | Logical OR |

Parentheses can be used to make the intended evaluation order clearer.

Example:

```c
int result = (10 > 5) && (20 > 15);
```

Both conditions are true, so the result is `1`.

## Short-Circuit Evaluation

Logical AND (`&&`) and Logical OR (`||`) use short-circuit evaluation.

This means the second operand may not be evaluated when the first operand already determines the final result.

### Logical AND Example

```c
int number = 0;

if (number != 0 && 10 / number > 1)
{
    printf("Condition is true.\n");
}
```

The first condition is false, so the second condition is not evaluated. This prevents division by zero.

### Logical OR Example

```c
int is_student = 1;

if (is_student || is_employee)
{
    printf("Access granted.\n");
}
```

When the first condition is true, the second operand does not need to be evaluated.

## Using Logical Operators in Conditions

Logical operators are commonly used with conditional statements to combine multiple requirements.

Example:

```c
int age = 20;
int has_id = 1;

if (age >= 18 && has_id)
{
    printf("Eligible.\n");
}
else
{
    printf("Not eligible.\n");
}
```

Output:

```text
Eligible.
```

## Folder Structure

```text
03-logical_operators/
├── output/
├── 01-logical_and.c
├── 02-logical_or.c
├── 03-logical_not.c
└── README.md
```

## Concepts Practiced

- Logical AND (`&&`)
- Logical OR (`||`)
- Logical NOT (`!`)
- Truth tables
- True and false values in C
- Combining logical conditions
- Logical operator precedence
- Short-circuit evaluation
- Logical expressions in conditional statements

## Learning Objectives

After completing this section, learners should be able to:

- Use logical operators to combine conditions.
- Understand the differences between AND, OR, and NOT.
- Evaluate logical expressions using truth tables.
- Understand zero and nonzero values in logical conditions.
- Recognize logical operator precedence.
- Understand short-circuit evaluation.
- Use logical expressions in conditional statements and loops.

## How to Compile and Run

Open a terminal inside this folder.

Create the output directory if it does not exist:

```bash
mkdir -p output
```

Compile a program using GCC:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic 01-logical_and.c -o output/01-logical_and
```

Run the compiled program:

```bash
./output/01-logical_and
```

Replace the source filename and executable name to compile another program.

Each source file can be compiled and executed independently.

## Practice Ideas

1. Use AND to check whether a person meets two eligibility conditions.
2. Use OR to check whether at least one of two conditions is true.
3. Use NOT to reverse a logical condition.
4. Create expressions using all three logical operators.
5. Experiment with short-circuit evaluation.
6. Use logical operators inside `if-else` statements.

## Purpose

The goal of this section is to develop a strong understanding of logical operations in C programming and prepare for writing programs that make decisions based on multiple conditions.