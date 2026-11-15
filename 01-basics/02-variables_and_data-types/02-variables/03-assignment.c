#include <stdio.h>

int main(void)
{
    int age;
    float height;
    char grade;

    age = 18;
    height = 5.8f;
    grade = 'A';

    printf("Your age    : %d years old\n", age);
    printf("Your height : %.2f ft\n", height);
    printf("Your grade  : %c\n", grade);

    return 0;
}