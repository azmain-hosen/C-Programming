# Temperature Conversion in C

This section contains C programs for converting temperatures between Celsius, Fahrenheit, and Kelvin.

Each program demonstrates the use of variables, arithmetic expressions, user input, and formatted output.

## Topics Covered

### 1. Celsius to Fahrenheit

**File:** `01-celsius_to_fahrenheit.c`

- Converting Celsius to Fahrenheit.
- Applying the temperature conversion formula.

Formula: `F = (C × 9/5) + 32`

### 2. Fahrenheit to Celsius

**File:** `02-fahrenheit_to_celsius.c`

- Converting Fahrenheit to Celsius.
- Using subtraction and multiplication in a conversion formula.

Formula: `C = (F − 32) × 5/9`

### 3. Celsius to Kelvin

**File:** `03-celsius_to_kelvin.c`

- Converting Celsius to Kelvin.
- Using the offset between the Celsius and Kelvin scales.

Formula: `K = C + 273.15`

### 4. Kelvin to Celsius

**File:** `04-kelvin_to_celsius.c`

- Converting Kelvin to Celsius.
- Subtracting the temperature-scale offset.

Formula: `C = K − 273.15`

### 5. Fahrenheit to Kelvin

**File:** `05-fahrenheit_to_kelvin.c`

- Converting Fahrenheit to Kelvin.
- Combining multiple arithmetic operations in one formula.

Formula: `K = (F − 32) × 5/9 + 273.15`

### 6. Kelvin to Fahrenheit

**File:** `06-kelvin_to_fahrenheit.c`

- Converting Kelvin to Fahrenheit.
- Applying the reverse temperature conversion formula.

Formula: `F = (K − 273.15) × 9/5 + 32`

## Folder Structure

```text
02-temperature_conversion/
├── output/
├── 01-celsius_to_fahrenheit.c
├── 02-fahrenheit_to_celsius.c
├── 03-celsius_to_kelvin.c
├── 04-kelvin_to_celsius.c
├── 05-fahrenheit_to_kelvin.c
├── 06-kelvin_to_fahrenheit.c
└── README.md
```

## Concepts Practiced

- Variables and data types
- Floating-point calculations using `double`
- User input using `scanf()`
- Formatted output using `printf()`
- Arithmetic operators
- Applying mathematical formulas
- Converting values between measurement scales

## Learning Objectives

After completing this section, learners should be able to:

- Convert temperatures between Celsius, Fahrenheit, and Kelvin.
- Apply temperature conversion formulas in C programs.
- Use floating-point arithmetic for calculations.
- Combine arithmetic operators in mathematical expressions.
- Display conversion results with appropriate decimal precision.

## Purpose

The goal of this section is to strengthen arithmetic and formula-based problem-solving skills through practical temperature conversion programs.