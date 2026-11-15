# Arithmetic Operators in C

This section introduces arithmetic operators in C programming. These operators perform mathematical calculations using numeric values and variables.

The examples demonstrate basic arithmetic operations, division, modulus, average calculation, and arithmetic expressions.

## Topics Covered

### 1. Addition

**File:** `01-addition.c`

- Using the addition operator (`+`).
- Adding two integer values.
- Displaying the sum using `printf()`.

### 2. Subtraction

**File:** `02-subtraction.c`

- Using the subtraction operator (`-`).
- Finding the difference between two integer values.

### 3. Multiplication

**File:** `03-multiplication.c`

- Using the multiplication operator (`*`).
- Multiplying two integer values.
- Understanding the result data type.

### 4. Division

**File:** `04-division.c`

- Using the division operator (`/`).
- Dividing one floating-point value by another.
- Understanding floating-point division.
- Handling division by zero.

### 5. Modulus

**File:** `05-modulus.c`

- Using the modulus operator (`%`).
- Finding the remainder after integer division.
- Handling division by zero and special integer edge cases.

### 6. Average

**File:** `06-average.c`

- Calculating the average of two numbers.
- Using type casting.
- Understanding floating-point calculations.

### 7. Arithmetic Expressions

**File:** `07-arithmetic_expression.c`

- Combining multiple arithmetic operators in one expression.
- Understanding operator precedence.
- Using parentheses to control evaluation order.
- Comparing integer and floating-point division.

## Arithmetic Operators

| Operator | Name | Purpose |
|---|---|---|
| `+` | Addition | Adds two values |
| `-` | Subtraction | Finds the difference |
| `*` | Multiplication | Multiplies values |
| `/` | Division | Divides one value by another |
| `%` | Modulus | Calculates the remainder |

## Operator Precedence

Operator precedence determines the order in which operators are evaluated in an expression.

For the operators covered in this section:

| Priority | Operators | Description |
|---|---|---|
| Higher | `*`, `/`, `%` | Multiplication, division, and modulus |
| Lower | `+`, `-` | Addition and subtraction |

Operators with the same precedence are generally evaluated from left to right.

Parentheses can be used to control the order of evaluation.

### Example

```c
int result1 = 10 + 5 * 2;
int result2 = (10 + 5) * 2;
```

Results:

```text
result1 = 20
result2 = 30
```

Multiplication is performed before addition unless parentheses change the evaluation order.

## Integer and Floating-Point Division

C performs different types of division depending on the operand types.

### Integer Division

When both operands are integers, the fractional part is discarded.

```c
int result = 7 / 2;
```

Output:

```text
3
```

### Floating-Point Division

When at least one operand is a floating-point value, the result can contain a fractional part.

```c
double result = 7.0 / 2.0;
```

Output:

```text
3.50
```

## Type Casting in Arithmetic

Type casting converts a value from one data type to another.

Example:

```c
int num1 = 5;
int num2 = 8;

double average = ((double)num1 + (double)num2) / 2.0;
```

The integer values are converted to `double` before addition, allowing floating-point calculation.

## Important Notes

- Division by zero is undefined for arithmetic division.
- The modulus operator (`%`) is used with integer operands.
- Signed integer overflow causes undefined behavior in C.
- Using `long long` can provide a wider result range than `int` on common systems, but it also has a finite range.
- Always use appropriate format specifiers when displaying results.
- Check the return value of `scanf()` to ensure that input was read successfully.

## Folder Structure

```text
01-arithmetic_operators/
├── output/
├── 01-addition.c
├── 02-subtraction.c
├── 03-multiplication.c
├── 04-division.c
├── 05-modulus.c
├── 06-average.c
├── 07-arithmetic_expression.c
└── README.md
```

## Concepts Practiced

- Arithmetic operators.
- Variables and numeric data types.
- Integer and floating-point calculations.
- Addition, subtraction, multiplication, and division.
- Modulus and remainders.
- Type casting.
- Operator precedence.
- Arithmetic expressions.
- Input validation.
- Handling special arithmetic cases.

## Learning Objectives

After completing this section, learners should be able to:

- Perform basic arithmetic operations in C.
- Use arithmetic operators correctly.
- Calculate averages using mathematical expressions.
- Understand operator precedence.
- Use parentheses to control expression evaluation.
- Distinguish between integer and floating-point division.
- Calculate remainders using the modulus operator.
- Apply type casting in arithmetic calculations.
- Recognize common arithmetic errors such as division by zero and integer overflow.

## How to Compile and Run

Open a terminal inside this folder.

Create the output directory if it does not exist:

```bash
mkdir -p output
```

Compile a program using GCC:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic -Wconversion -Wshadow 01-addition.c -o output/01-addition
```

Run the compiled program:

```bash
./output/01-addition
```

Replace the source filename and executable name to compile another program.

Each source file can be compiled and executed independently.

## Practice Ideas

1. Calculate the sum of three integers.
2. Find the difference between two numbers.
3. Multiply positive and negative integers.
4. Divide floating-point numbers.
5. Calculate the remainder of two integers.
6. Calculate the average of three numbers.
7. Experiment with expressions involving multiple arithmetic operators.
8. Compare integer division with floating-point division.

## Purpose

The goal of this section is to develop a strong foundation in mathematical operations in C programming and prepare for more advanced programming concepts involving expressions, operators, and problem solving.