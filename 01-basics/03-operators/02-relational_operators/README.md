# Relational Operators in C

This section introduces relational operators in C programming. These operators compare two values and determine the relationship between them.

Relational operators produce an integer result: `1` when the comparison is true and `0` when it is false.

## Topics Covered

### 1. Greater Than (`>`)

**File:** `01-greater_than.c`

- Using the greater-than operator.
- Checking whether the left value is greater than the right value.

### 2. Less Than (`<`)

**File:** `02-less_than.c`

- Using the less-than operator.
- Checking whether the left value is smaller than the right value.

### 3. Greater Than or Equal To (`>=`)

**File:** `03-greater_than_or_equal.c`

- Using the greater-than-or-equal-to operator.
- Checking whether the left value is greater than or equal to the right value.

### 4. Less Than or Equal To (`<=`)

**File:** `04-less_than_or_equal.c`

- Using the less-than-or-equal-to operator.
- Checking whether the left value is smaller than or equal to the right value.

### 5. Equal To (`==`)

**File:** `05-equal_to.c`

- Using the equality operator.
- Checking whether two values are equal.
- Understanding the difference between assignment (`=`) and equality (`==`).

### 6. Not Equal To (`!=`)

**File:** `06-not_equal.c`

- Using the not-equal-to operator.
- Checking whether two values are different.

## Relational Operators

| Operator | Name | Purpose |
|---|---|---|
| `>` | Greater than | Checks whether the left value is greater |
| `<` | Less than | Checks whether the left value is smaller |
| `>=` | Greater than or equal to | Checks whether the left value is greater than or equal to the right |
| `<=` | Less than or equal to | Checks whether the left value is smaller than or equal to the right |
| `==` | Equal to | Checks whether two values are equal |
| `!=` | Not equal to | Checks whether two values are different |

## Return Values

In C, relational expressions produce an integer result:

- `1` means true.
- `0` means false.

Example:

```c
#include <stdio.h>

int main(void)
{
    int result = (10 > 5);

    printf("%d\n", result);

    return 0;
}
```

Output:

```text
1
```

## Difference Between `=` and `==`

These two operators have different purposes.

### Assignment Operator (`=`)

The assignment operator stores a value in a variable.

```c
int age = 18;
```

### Equality Operator (`==`)

The equality operator compares two values.

```c
int result = (age == 18);
```

The expression evaluates to `1` because both values are equal.

## Using Relational Operators in Conditions

Relational operators are commonly used in conditional statements to make decisions.

Example:

```c
int age = 18;

if (age >= 18)
{
    printf("Eligible\n");
}
else
{
    printf("Not eligible\n");
}
```

Output:

```text
Eligible
```

This demonstrates how relational expressions can control program execution.

## Folder Structure

```text
02-relational_operators/
├── output/
├── 01-greater_than.c
├── 02-less_than.c
├── 03-greater_than_or_equal.c
├── 04-less_than_or_equal.c
├── 05-equal_to.c
├── 06-not_equal.c
└── README.md
```

## Concepts Practiced

- Comparing numeric values.
- Relational operators.
- True and false results represented by `1` and `0`.
- Difference between assignment (`=`) and equality (`==`).
- Using comparison expressions.
- Applying relational operators in conditional statements.

## Learning Objectives

After completing this section, learners should be able to:

- Compare two values using relational operators.
- Understand the meaning of each relational operator.
- Interpret true and false results in C.
- Distinguish between assignment and equality operators.
- Use relational expressions in conditional statements.
- Prepare for more advanced control-flow concepts.

## How to Compile and Run

Open a terminal inside this folder.

Create the output directory if it does not exist:

```bash
mkdir -p output
```

Compile a program using GCC:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic 01-greater_than.c -o output/01-greater_than
```

Run the compiled program:

```bash
./output/01-greater_than
```

Replace the source filename and executable name to compile another program.

Each source file can be compiled and executed independently.

## Practice Ideas

1. Compare two integers using each relational operator.
2. Experiment with comparisons that produce both true and false results.
3. Compare equal and unequal values.
4. Check whether a number is within a specified range.
5. Use relational expressions inside `if-else` statements.

## Purpose

The goal of this section is to understand how C compares values and produces results that can be used in decision-making and control flow.