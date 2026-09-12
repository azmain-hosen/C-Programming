# Operators

Operators are symbols used in C programming to perform calculations, compare values, evaluate logical expressions, assign and modify values, manipulate individual bits, and inspect memory size.

This section introduces the major operator categories used throughout C programming and builds a foundation for writing expressions, conditions, loops, functions, and more complex programs.

---

## What You Will Learn

This section covers the following operator categories:

1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. Assignment Operators
5. Increment and Decrement Operators
6. Bitwise Operators
7. `sizeof` Operator

---

## 1. Arithmetic Operators

Arithmetic operators are used to perform mathematical calculations.

| Operator | Name           | Example |
| -------- | -------------- | ------- |
| `+`      | Addition       | `a + b` |
| `-`      | Subtraction    | `a - b` |
| `*`      | Multiplication | `a * b` |
| `/`      | Division       | `a / b` |
| `%`      | Modulus        | `a % b` |

### Topics Covered

- Addition
- Subtraction
- Multiplication
- Division
- Modulus
- Average calculation
- Arithmetic expressions
- Operator precedence
- Parentheses and evaluation order

### Example

```c
int result = 10 + 5 * 2;
```

Multiplication has higher precedence than addition, so the expression is evaluated as:

```text
10 + (5 * 2)
= 10 + 10
= 20
```

Parentheses can be used to change the order of evaluation:

```c
int result = (10 + 5) * 2;
```

Result:

```text
30
```

---

## 2. Relational Operators

Relational operators are used to compare two values.

| Operator | Meaning                  | Example  |
| -------- | ------------------------ | -------- |
| `>`      | Greater than             | `a > b`  |
| `<`      | Less than                | `a < b`  |
| `>=`     | Greater than or equal to | `a >= b` |
| `<=`     | Less than or equal to    | `a <= b` |
| `==`     | Equal to                 | `a == b` |
| `!=`     | Not equal to             | `a != b` |

Relational expressions produce a logical result.

In C:

```text
1 → true
0 → false
```

### Example

```c
int age = 20;
int result = age >= 18;
```

Since `20 >= 18` is true, `result` will contain `1`.

Relational operators become especially important when working with:

- `if`
- `else`
- `while`
- `for`
- Conditional expressions

---

## 3. Logical Operators

Logical operators are used to combine or reverse logical expressions.

| Operator | Name | Example |
|----------|------|---------|
| `&&` | Logical AND | `a && b` |
| `||` | Logical OR | `a || b` |
| `!` | Logical NOT | `!a` |

### Basic Logic

#### Logical AND (`&&`)

Both expressions must be true.

```text
true && true   → true
true && false  → false
false && true  → false
false && false → false
```

#### Logical OR (`||`)

At least one expression must be true.

```text
true || true   → true
true || false  → true
false || true  → true
false || false → false
```

#### Logical NOT (`!`)

Reverses a logical result.

```text
!true  → false
!false → true
```

Logical operators are commonly used to build more complex conditions.

---

## 4. Assignment Operators

Assignment operators are used to assign values to variables and update existing values.

| Operator | Name                      | Equivalent  |
| -------- | ------------------------- | ----------- |
| `=`      | Assignment                | `a = 10`    |
| `+=`     | Addition assignment       | `a = a + 5` |
| `-=`     | Subtraction assignment    | `a = a - 5` |
| `*=`     | Multiplication assignment | `a = a * 5` |
| `/=`     | Division assignment       | `a = a / 5` |
| `%=`     | Modulus assignment        | `a = a % 5` |

### Example

```c
int score = 50;

score += 10;
```

This is equivalent to:

```c
score = score + 10;
```

The assignment operators provide a shorter way to update the value of an existing variable.

---

## 5. Increment and Decrement Operators

Increment and decrement operators modify a variable by exactly one.

| Operator | Name      | Example   |
| -------- | --------- | --------- |
| `++`     | Increment | `count++` |
| `--`     | Decrement | `count--` |

### Increment Example

```c
int count = 5;

count++;
```

Result:

```text
count = 6
```

### Decrement Example

```c
int count = 5;

count--;
```

Result:

```text
count = 4
```

These operators are frequently used in counters and loops.

---

## 6. Bitwise Operators

Bitwise operators work directly with the individual bits of integer values.

| Operator | Name        |
| -------- | ----------- | ---------- |
| `&`      | Bitwise AND |
| `        | `           | Bitwise OR |
| `^`      | Bitwise XOR |
| `~`      | Bitwise NOT |
| `<<`     | Left Shift  |
| `>>`     | Right Shift |

Bitwise operations work with the binary representation of integer values.

### Example: Bitwise AND

```c
int result = 5 & 3;
```

Binary representation:

```text
5 = 0101
3 = 0011

    0101
  & 0011
  ------
    0001
```

Therefore:

```text
5 & 3 = 1
```

### Basic Bitwise Concepts

```text
&   → Bitwise AND
|   → Bitwise OR
^   → Bitwise XOR
~   → Bitwise NOT
<<  → Left Shift
>>  → Right Shift
```

Bitwise operators are especially useful in:

- Low-level programming
- Embedded systems
- Hardware-related programming
- Flags and masks
- Bit manipulation
- Binary data processing

---

## 7. `sizeof` Operator

The `sizeof` operator is used to determine the amount of memory occupied by a type or object, measured in bytes.

### Example

```c
#include <stdio.h>

int main(void)
{
    int age = 18;

    printf("Size of age: %zu bytes\n", sizeof(age));

    return 0;
}
```

The result depends on the C implementation and platform.

The `sizeof` operator is useful for:

- Understanding data type sizes
- Inspecting memory usage
- Working with arrays
- Understanding how C stores data
- Writing portable C programs

---

## Operator Precedence

When an expression contains multiple operators, C follows precedence rules to determine which operators are evaluated first.

A simplified precedence order for the arithmetic operators covered in this section is:

```text
()
↓
*  /  %
↓
+  -
```

For example:

```c
int result = 10 + 5 * 2;
```

is evaluated as:

```text
10 + (5 * 2)
= 20
```

But:

```c
int result = (10 + 5) * 2;
```

is evaluated as:

```text
(10 + 5) * 2
= 30
```

Parentheses can therefore be used to explicitly control the order of evaluation.

---

## Learning Progression

The operators in this section are organized from fundamental calculations to more advanced operations:

```text
Arithmetic
    ↓
Relational
    ↓
Logical
    ↓
Assignment
    ↓
Increment / Decrement
    ↓
Bitwise
    ↓
sizeof
```

This progression helps build a strong foundation before moving into conditional statements, loops, arrays, pointers, and more advanced C programming concepts.

---

## Practical Application

Operators are not isolated features. They are building blocks used throughout C programming.

```text
Arithmetic Operators
        ↓
Calculations

Relational Operators
        ↓
Comparisons

Logical Operators
        ↓
Complex Conditions

Assignment Operators
        ↓
Updating Variables

Increment / Decrement
        ↓
Counters and Loops

Bitwise Operators
        ↓
Low-Level Bit Manipulation

sizeof
        ↓
Memory and Data Type Analysis
```

These operators will be used repeatedly in later sections such as:

- Control Flow
- Loops
- Functions
- Arrays
- Pointers
- Data Structures
- Problem Solving
- Real-World Projects

---

## Folder Structure

```text
03-operators/
│
├── 01-arithmetic-operators/
│   ├── 01-addition.c
│   ├── 02-subtraction.c
│   ├── 03-multiplication.c
│   ├── 04-division.c
│   ├── 05-modulus.c
│   ├── 06-average.c
│   └── 07-arithmetic-expression.c
│
├── 02-relational-operators/
│   ├── 01-greater-than.c
│   ├── 02-less-than.c
│   ├── 03-greater-than-or-equal.c
│   ├── 04-less-than-or-equal.c
│   ├── 05-equal-to.c
│   └── 06-not-equal.c
│
├── 03-logical-operators/
│   ├── 01-logical-and.c
│   ├── 02-logical-or.c
│   └── 03-logical-not.c
│
├── 04-assignment-operators/
│   ├── 01-assignment.c
│   ├── 02-addition-assignment.c
│   ├── 03-subtraction-assignment.c
│   ├── 04-multiplication-assignment.c
│   ├── 05-division-assignment.c
│   └── 06-modulus-assignment.c
│
├── 05-increment-decrement/
│   ├── 01-increment.c
│   └── 02-decrement.c
│
├── 06-bitwise-operators/
│   ├── 01-bitwise-and.c
│   ├── 02-bitwise-or.c
│   ├── 03-bitwise-xor.c
│   ├── 04-bitwise-not.c
│   ├── 05-left-shift.c
│   └── 06-right-shift.c
│
├── 07-sizeof-operator/
│
└── README.md
```

---

## Section Goal

The goal of this section is to develop a clear and practical understanding of C operators and expressions.

By completing this section, you should be able to:

- Perform mathematical calculations using arithmetic operators
- Compare values using relational operators
- Combine logical expressions
- Assign and update variable values
- Increment and decrement values
- Perform basic bitwise operations
- Understand operator precedence
- Inspect the memory size of data types and variables using `sizeof`

These concepts form an essential foundation for writing structured, reliable, and more complex C programs.
