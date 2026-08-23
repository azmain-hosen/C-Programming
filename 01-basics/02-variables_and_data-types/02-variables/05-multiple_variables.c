#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char name[] = "Azmain";
    int age = 18;
    float height = 5.8f;
    char grade = 'A';
    bool isStudent = true;

    printf("Student Profile\n");
    printf("--------------------\n");
    printf("Name      : %s\n", name);
    printf("Age       : %d\n", age);
    printf("Height    : %.1f ft\n", height);
    printf("Grade     : %c\n", grade);
    printf("Student   : %d\n", isStudent);

    return 0;
}