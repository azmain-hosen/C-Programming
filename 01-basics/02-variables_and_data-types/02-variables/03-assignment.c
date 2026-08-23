#include <stdio.h>

int main()
{
    int age;
    float height;
    char grade;

    age = 18;
    height = 5.8;
    grade = 'A';

    printf("Your age : %d years old\n", age);
    printf("Your height : %.2f f\n", height);
    printf("Your Exam result : %c\n", grade);

    return 0;
}