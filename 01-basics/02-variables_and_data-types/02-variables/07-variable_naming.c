#include <stdio.h>

int main(void)
{
    // Valid and meaningful variable names
    int age = 18;
    int student_age = 18;
    int total_marks = 450;
    int number2 = 20;

    printf("Age          : %d\n", age);
    printf("Student Age  : %d\n", student_age);
    printf("Total Marks  : %d\n", total_marks);
    printf("Number 2     : %d\n", number2);

    /*
        Invalid variable names:

        int 2age = 18;         // Cannot start with a number
        int student-age = 18;  // Hyphen is not allowed
        int student age = 18;  // Space is not allowed
        int int = 10;          // Keyword cannot be used
    */

    return 0;
}