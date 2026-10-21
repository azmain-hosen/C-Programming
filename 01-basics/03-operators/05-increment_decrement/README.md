# Increment and Decrement Operators in C

This section covers the increment (`++`) and decrement (`--`) operators in C programming. These operators increase or decrease the value of a variable by one.

## Topics Covered

### 1. Increment Operator (`++`)

**File:** `01-increment.c`

- Increasing a variable's value by one.
- Understanding prefix increment (`++a`).
- Understanding postfix increment (`a++`).
- Observing how prefix and postfix increment behave in expressions.

### 2. Decrement Operator (`--`)

**File:** `02-decrement.c`

- Decreasing a variable's value by one.
- Understanding prefix decrement (`--a`).
- Understanding postfix decrement (`a--`).
- Observing how prefix and postfix decrement behave in expressions.

## Increment and Decrement Operators

| Operator | Name | Purpose |
|---|---|---|
| `++a` | Prefix increment | Increases the value first, then evaluates the expression |
| `a++` | Postfix increment | Evaluates the expression first, then increases the value |
| `--a` | Prefix decrement | Decreases the value first, then evaluates the expression |
| `a--` | Postfix decrement | Evaluates the expression first, then decreases the value |

## Example

```c
int number = 5;

printf("%d\n", ++number);  // Output: 6

number = 5;
printf("%d\n", number++);  // Output: 5
printf("%d\n", number);    // Output: 6
```

## Important Notes

- Increment increases a variable's value by one.
- Decrement decreases a variable's value by one.
- Prefix and postfix forms can produce different results when used inside expressions.
- Use these operators with modifiable variables, not constants.

## Folder Structure

```text
05-increment_decrement/
├── output/
├── 01-increment.c
├── 02-decrement.c
└── README.md
```

## Concepts Practiced

- Increment and decrement operators
- Prefix and postfix notation
- Updating variable values
- Expression evaluation
- Understanding the order of operations involving these operators

## Learning Objectives

After completing this section, learners should be able to:

- Increase and decrease variable values using `++` and `--`.
- Distinguish between prefix and postfix forms.
- Predict the results of simple expressions using these operators.
- Use increment and decrement operators appropriately in C programs.

## Purpose

The goal of this section is to understand how increment and decrement operators modify variables and how prefix and postfix forms affect expression results.