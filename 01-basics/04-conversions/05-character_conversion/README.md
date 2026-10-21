# Character Conversion in C

This section covers character conversion in C programming using ASCII character codes. The programs demonstrate how to convert between character values and their corresponding numeric codes, as well as change the case of English letters.

## Topics Covered

### 1. ASCII to Character

**File:** `01-ascii_to_character.c`

- Converting an ASCII-compatible numeric code to a character.
- Using `char` to store a character.
- Displaying a character using `%c`.

### 2. Character to ASCII

**File:** `02-character_to_ascii.c`

- Converting a character to its integer character code.
- Using `int` to display the numeric code.
- Understanding the relationship between characters and ASCII values.

### 3. Lowercase to Uppercase

**File:** `03-lowercase_to_uppercase.c`

- Converting a lowercase English letter to uppercase.
- Using ASCII character codes for case conversion.
- Understanding the difference between lowercase and uppercase character codes.

### 4. Uppercase to Lowercase

**File:** `04-uppercase_to_lowercase.c`

- Converting an uppercase English letter to lowercase.
- Applying ASCII-based character conversion.
- Understanding how character codes differ between uppercase and lowercase English letters.

## ASCII Character Conversion

ASCII is a character encoding standard that assigns numeric codes to English letters, digits, and other characters.

For example:

| Character | ASCII Decimal Value |
|---|---:|
| `A` | 65 |
| `a` | 97 |
| `B` | 66 |
| `b` | 98 |
| `0` | 48 |
| `9` | 57 |

In ASCII, the corresponding uppercase and lowercase English letters differ by 32.

For example:

```text
'A' = 65
'a' = 97

65 + 32 = 97
97 - 32 = 65
```

Therefore, adding or subtracting 32 can convert the case of English letters when the input is within the appropriate ASCII letter range.

## Folder Structure

```text
05-character_conversion/
├── output/
├── 01-ascii_to_character.c
├── 02-character_to_ascii.c
├── 03-lowercase_to_uppercase.c
├── 04-uppercase_to_lowercase.c
└── README.md
```

## Concepts Practiced

- Character data type (`char`)
- Integer representation of character codes
- ASCII character encoding
- Formatted input and output
- Character case conversion
- Arithmetic operations on character codes
- Difference between characters and their numeric codes

## Important Note

The `+ 32` and `- 32` techniques apply to ASCII lowercase and uppercase English letters, respectively. They should only be used when the input is a valid letter of the expected case. These arithmetic rules do not apply universally to every character encoding.

## Learning Objectives

After completing this section, learners should be able to:

- Understand the relationship between characters and numeric character codes.
- Convert between ASCII-compatible numeric codes and characters.
- Explain how uppercase and lowercase English letters are represented in ASCII.
- Perform basic ASCII-based character case conversion.
- Recognize the limitations of arithmetic-based character conversion.

## Purpose

The goal of this section is to strengthen understanding of characters, numeric character codes, and basic character conversion techniques in C programming.