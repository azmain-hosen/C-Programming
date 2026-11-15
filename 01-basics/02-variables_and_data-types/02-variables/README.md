# Variables in C

This section introduces variables in C programming. It covers variable declaration, initialization, assignment, reassignment, multiple variables, constants, and variable naming rules.

Each example demonstrates how variables are declared, how values are stored and modified, and how variables are used in a C program.

## Topics Covered

### 1. Variable Declaration

**File:** `01-declaration.c`

- Declaring variables using different data types.
- Understanding variable declarations.
- Declaring variables without assigning initial values.

### 2. Variable Initialization

**File:** `02-initialization.c`

- Declaring and initializing variables in the same statement.
- Initializing variables of different data types.
- Understanding initial values.

### 3. Variable Assignment

**File:** `03-assignment.c`

- Assigning values to previously declared variables.
- Using the assignment operator (`=`).
- Assigning integer, floating-point, and character values.

### 4. Variable Reassignment

**File:** `04-reassignment.c`

- Changing a variable's value after its initial assignment.
- Understanding how reassignment updates the stored value.

### 5. Multiple Variables

**File:** `05-multiple_variables.c`

- Declaring and using multiple variables in one program.
- Combining different data types.
- Creating a student profile using variables.
- Displaying variable values using `printf()`.

### 6. Constant Variables

**File:** `06-const_variable.c`

- Declaring constants using the `const` keyword.
- Initializing constant variables.
- Understanding that a constant object cannot be modified through that variable after initialization.

### 7. Variable Naming Rules

**File:** `07-variable_naming.c`

- Choosing meaningful variable names.
- Using letters, digits, and underscores in identifiers.
- Understanding valid and invalid identifiers.
- Avoiding spaces, hyphens, and reserved keywords in variable names.

## Folder Structure

```text
02-variables/
├── output/
├── 01-declaration.c
├── 02-initialization.c
├── 03-assignment.c
├── 04-reassignment.c
├── 05-multiple_variables.c
├── 06-const_variable.c
├── 07-variable_naming.c
└── README.md
```

## Understanding Variables

A variable is a named storage location used to hold a value during program execution.

### Declaration

Declaration specifies a variable's data type and name.

```c
int age;
```

### Initialization

Initialization means assigning an initial value when declaring a variable.

```c
int age = 18;
```

### Assignment

Assignment means storing a value in a previously declared variable.

```c
int age;

age = 18;
```

### Reassignment

Reassignment means changing the value stored in an existing variable.

```c
int age = 18;

age = 20;
```

## Constants in C

The `const` keyword makes an object read-only through that identifier.

Example:

```c
const int day = 7;
```

The value cannot be reassigned through `day`.

## Variable Naming Rules

C identifiers must follow certain rules:

1. An identifier can contain letters, digits, and underscores.
2. An identifier cannot begin with a digit.
3. Spaces and hyphens are not allowed.
4. Reserved C keywords cannot be used as identifiers.
5. Identifiers are case-sensitive.

### Valid Variable Names

```c
int age;
int student_age;
int total_marks;
int number2;
```

### Invalid Variable Names

```c
int 2age;
int student-age;
int student age;
int int;
```

### Naming Convention

A naming convention is a style guideline used to make code more readable.

This repository uses `snake_case` for variable names.

Examples:

- `student_age`
- `total_marks`
- `is_student`

## Concepts Practiced

- Variable declaration.
- Variable initialization.
- Assignment and reassignment.
- Assignment operator (`=`).
- Constant variables using `const`.
- Multiple variables and data types.
- Valid and invalid identifiers.
- Meaningful variable naming.
- Displaying variable values using `printf()`.

## Learning Objectives

After completing this section, learners should be able to:

- Declare variables using appropriate data types.
- Initialize variables with initial values.
- Assign and reassign variable values.
- Understand the difference between declaration and initialization.
- Understand the purpose of constants.
- Use multiple variables in a single program.
- Follow valid identifier rules.
- Choose meaningful and readable variable names.

## How to Compile and Run

Open a terminal inside this folder.

Create the output directory if it does not exist:

```bash
mkdir -p output
```

Compile a program:

```bash
gcc -std=c17 -Wall -Wextra -Wpedantic -Wconversion -Wshadow 01-declaration.c -o output/01-declaration
```

Run the compiled program:

```bash
./output/01-declaration
```

Replace the source filename and executable name to compile another program.

## Practice Ideas

1. Declare variables using different data types.
2. Initialize variables with different values.
3. Assign and reassign variable values.
4. Create a profile using multiple variables.
5. Declare constants using the `const` keyword.
6. Practice writing valid and meaningful variable names.

## Purpose

The purpose of this section is to develop a strong understanding of variables in C programming. These concepts are essential for working with operators, control flow, arrays, functions, and more advanced programming topics.