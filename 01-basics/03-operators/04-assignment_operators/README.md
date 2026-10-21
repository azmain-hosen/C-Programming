# Assignment Operators in C

This section covers assignment operators in C programming. These operators assign values to variables and update their values using arithmetic operations.

## Topics Covered

### 1. Assignment Operator (`=`)

**File:** `01-assignment.c`

- Using the assignment operator to assign a value to a variable.
- Updating a variable's stored value.

### 2. Addition Assignment (`+=`)

**File:** `02-addition-assignment.c`

- Adding a value to an existing variable.
- Understanding the shorthand form of addition and assignment.

### 3. Subtraction Assignment (`-=`)

**File:** `03-subtraction-assignment.c`

- Subtracting a value from an existing variable.
- Updating a variable using subtraction assignment.

### 4. Multiplication Assignment (`*=`)

**File:** `04-multiplication-assignment.c`

- Multiplying a variable by a value.
- Storing the result back in the same variable.

### 5. Division Assignment (`/=`)

**File:** `05-division-assignment.c`

- Dividing a variable by a value.
- Assigning the result back to the variable.
- Understanding integer division when using integer types.

### 6. Modulus Assignment (`%=`)

**File:** `06-modulus-assignment.c`

- Calculating the remainder after integer division.
- Storing the remainder in the original variable.

## Assignment Operators

| Operator | Example | Equivalent Expression |
|---|---|---|
| `=` | `a = 10` | Assigns `10` to `a` |
| `+=` | `a += 5` | `a = a + 5` |
| `-=` | `a -= 5` | `a = a - 5` |
| `*=` | `a *= 5` | `a = a * 5` |
| `/=` | `a /= 5` | `a = a / 5` |
| `%=` | `a %= 5` | `a = a % 5` |

## Example

```c
int number = 10;

number += 5;
printf("%d\n", number);  // Output: 15

number *= 2;
printf("%d\n", number);  // Output: 30
```

## Important Notes

- Assignment operators update the value stored in a variable.
- Division by zero must be avoided.
- The modulus operator (`%`) is used with integer operands in C.
- With integer variables, division assignment (`/=`) produces an integer result when the operands are integers.

## Folder Structure

```text
04-assignment_operators/
├── output/
├── 01-assignment.c
├── 02-addition_assignment.c
├── 03-subtraction_assignment.c
├── 04-multiplication_assignment.c
├── 05-division_assignment.c
├── 06-modulus_assignment.c
└── README.md
```

## Concepts Practiced

- Assignment and compound assignment
- Arithmetic operations on variables
- Updating existing values
- Integer division and modulus
- Using shorthand operators to write concise code

## Learning Objectives

After completing this section, learners should be able to:

- Assign values to variables.
- Apply compound assignment operators.
- Update variable values using arithmetic operations.
- Understand the difference between simple assignment and compound assignment.
- Avoid common errors such as division by zero.

## Purpose

The goal of this section is to understand how assignment operators simplify variable updates and make C programs easier to write and read.