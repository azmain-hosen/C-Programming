# Relational Operators in C

This section covers relational operators in C programming. These operators compare two values and determine the relationship between them.

## Topics Covered

### 1. Greater Than

**File:** `01-greater_than.c`

- Using the greater-than operator (`>`).
- Checking whether one value is greater than another.

### 2. Less Than

**File:** `02-less_than.c`

- Using the less-than operator (`<`).
- Checking whether one value is smaller than another.

### 3. Greater Than or Equal To

**File:** `03-greater_than_or_equal.c`

- Using the greater-than-or-equal-to operator (`>=`).
- Checking whether one value is greater than or equal to another.

### 4. Less Than or Equal To

**File:** `04-less_than_or_equal.c`

- Using the less-than-or-equal-to operator (`<=`).
- Checking whether one value is less than or equal to another.

### 5. Equal To

**File:** `05-equal_to.c`

- Using the equality operator (`==`).
- Checking whether two values are equal.
- Understanding the difference between `=` and `==`.

### 6. Not Equal To

**File:** `06-not_equal.c`

- Using the not-equal-to operator (`!=`).
- Checking whether two values are different.

## Relational Operators

| Operator | Name | Purpose |
|---|---|---|
| `>` | Greater than | Checks whether the left value is greater |
| `<` | Less than | Checks whether the left value is smaller |
| `>=` | Greater than or equal to | Checks whether the left value is greater or equal |
| `<=` | Less than or equal to | Checks whether the left value is smaller or equal |
| `==` | Equal to | Checks whether two values are equal |
| `!=` | Not equal to | Checks whether two values are different |

## Return Values

In C, relational expressions evaluate to an integer result:

- `1` means true.
- `0` means false.

For example:

```c
int result = (10 > 5);
printf("%d\n", result); // Output: 1
```

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

- Comparing numeric values
- Relational operators
- Boolean results represented by `1` and `0`
- Difference between assignment (`=`) and equality (`==`)
- Using comparisons in programming expressions

## Learning Objectives

After completing this section, learners should be able to:

- Compare two values using relational operators.
- Understand the meaning of each relational operator.
- Interpret true and false results in C.
- Distinguish between assignment and equality operators.
- Prepare to use comparisons in conditional statements.

## Purpose

The goal of this section is to understand how C compares values and produces results that can be used in decision-making and control flow.