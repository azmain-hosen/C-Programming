# Operators in C

This section covers the major operators in C programming. Operators are symbols used to perform calculations, compare values, evaluate conditions, assign values, manipulate bits, and inspect the storage size of data types and objects.

## Topics Covered

### 1. Arithmetic Operators

**Folder:** `01-arithmetic_operators/`

- Addition, subtraction, multiplication, division, and modulus
- Average calculations
- Arithmetic expressions
- Operator precedence and parentheses

### 2. Relational Operators

**Folder:** `02-relational_operators/`

- Greater than (`>`)
- Less than (`<`)
- Greater than or equal to (`>=`)
- Less than or equal to (`<=`)
- Equal to (`==`)
- Not equal to (`!=`)

### 3. Logical Operators

**Folder:** `03-logical_operators/`

- Logical AND (`&&`)
- Logical OR (`||`)
- Logical NOT (`!`)
- Combining conditions
- Short-circuit evaluation

### 4. Assignment Operators

**Folder:** `04-assignment_operators/`

- Assignment (`=`)
- Addition assignment (`+=`)
- Subtraction assignment (`-=`)
- Multiplication assignment (`*=`)
- Division assignment (`/=`)
- Modulus assignment (`%=`)

### 5. Increment and Decrement Operators

**Folder:** `05-increment_decrement/`

- Increment (`++`)
- Decrement (`--`)
- Prefix and postfix operations

### 6. Bitwise Operators

**Folder:** `06-bitwise_operators/`

- Bitwise AND (`&`)
- Bitwise OR (`|`)
- Bitwise XOR (`^`)
- Bitwise NOT (`~`)
- Left shift (`<<`)
- Right shift (`>>`)

### 7. Sizeof Operator

**Folder:** `07-sizeof_operator/`

- Using `sizeof` with variables and data types
- Determining storage size in bytes
- Using `%zu` to display the result

## Important Concepts

### Operator Precedence

When an expression contains multiple operators, precedence rules determine which operations are grouped first. Parentheses can be used to make the intended grouping explicit.

```c
int result1 = 10 + 5 * 2;    // Result: 20
int result2 = (10 + 5) * 2;  // Result: 30
```

### Logical and Bitwise Operators

Logical operators evaluate conditions and produce a result of `0` or `1`. Bitwise operators work on the individual bits of integer operands.

For example, `&&` is logical AND, whereas `&` is bitwise AND.

### The `sizeof` Operator

The `sizeof` operator determines the size of a type or object in bytes. Its result has type `size_t`, which can be displayed using `%zu`.

## Folder Structure

```text
03-operators/
├── 01-arithmetic_operators/
│   └── README.md
├── 02-relational_operators/
│   └── README.md
├── 03-logical_operators/
│   └── README.md
├── 04-assignment_operators/
│   └── README.md
├── 05-increment_decrement/
│   └── README.md
├── 06-bitwise_operators/
│   └── README.md
├── 07-sizeof_operator/
│   └── README.md
└── README.md
```

Each topic folder contains its respective C examples and documentation.

## Learning Objectives

After completing this section, learners should be able to:

- Perform mathematical calculations using arithmetic operators.
- Compare values using relational operators.
- Combine conditions using logical operators.
- Assign and update variable values.
- Use increment and decrement operators.
- Perform basic bitwise operations.
- Understand operator precedence and expression evaluation.
- Inspect the storage size of data types and objects using `sizeof`.

## Purpose

The goal of this section is to build a strong understanding of C operators and expressions before moving on to control flow, loops, functions, arrays, and more advanced programming concepts.