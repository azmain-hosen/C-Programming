# Logical Operators in C

This section covers logical operators in C programming. These operators combine or reverse logical conditions and produce a result of either true (`1`) or false (`0`).

## Topics Covered

### 1. Logical AND (`&&`)

**File:** `01-logical_and.c`

- Using the logical AND operator (`&&`).
- Understanding that both conditions must be true for the result to be true.
- Combining multiple conditions in one expression.

### 2. Logical OR (`||`)

**File:** `02-logical_or.c`

- Using the logical OR operator (`||`).
- Understanding that at least one condition must be true for the result to be true.
- Combining alternative conditions.

### 3. Logical NOT (`!`)

**File:** `03-logical_not.c`

- Using the logical NOT operator (`!`).
- Reversing a logical result.
- Understanding how true becomes false and false becomes true.

## Logical Operators

| Operator | Name | Result |
|---|---|---|
| `&&` | Logical AND | True only when both operands are true |
| `\|\|` | Logical OR | True when at least one operand is true |
| `!` | Logical NOT | Reverses the logical value |

## Truth Tables

### Logical AND (`&&`)

| A | B | A && B |
|---:|---:|---:|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### Logical OR (`||`)

| A | B | A \|\| B |
|---:|---:|---:|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

### Logical NOT (`!`)

| A | !A |
|---:|---:|
| 0 | 1 |
| 1 | 0 |

## Important Note

In C, zero represents false and any nonzero value represents true when used as a logical condition. Logical operators produce an `int` result of either `0` or `1`.

Logical AND (`&&`) and logical OR (`||`) also use short-circuit evaluation: the second operand may not be evaluated when the first operand already determines the result.

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

- Logical AND, OR, and NOT
- Combining logical conditions
- Truth tables
- True and false values in C
- Short-circuit evaluation
- Logical expressions

## Learning Objectives

After completing this section, learners should be able to:

- Use logical operators to combine conditions.
- Understand the difference between AND, OR, and NOT.
- Evaluate logical expressions.
- Recognize how logical operators behave in C conditions.
- Prepare to use logical expressions in conditional statements and loops.

## Purpose

The goal of this section is to understand logical operations and prepare for writing programs that make decisions based on multiple conditions.