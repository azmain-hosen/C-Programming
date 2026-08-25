#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age = 18;
    float height = 5.8f;
    char grade = 'A';
    bool is_student = true;
    const int semesters = 12;

    printf("===================================\n");
    printf("\tStudent Information\n");
    printf("===================================\n\n");
    printf("Age\t\t: %d\n", age);
    printf("Height\t\t: %.1f ft\n", height);
    printf("Grade\t\t: %c\n", grade);
    printf("Is Student\t: %d\n", is_student);
    printf("Semesters\t: %d\n", semesters);

    return 0;
}