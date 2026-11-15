#include <stdio.h>

int main(void)
{
    const char name[] = "Alex";
    const int age = 18;
    const char grade = 'A';
    const float score = 95.5f;

    printf("\n==========================\n"
           "       Student Profile\n"
           "==========================\n\n");

    printf("Name  : %s\n", name);
    printf("Age   : %d\n", age);
    printf("Grade : %c\n", grade);
    printf("Score : %.2f\n", score);

    return 0;
}