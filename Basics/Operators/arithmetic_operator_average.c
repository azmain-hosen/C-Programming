#include <stdio.h>

int main()
{
    int num1, num2, sum;
    float  average;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum is : %d\n", sum);

    average = (float)sum / 2; // type casting
    printf("The average is : %.1f\n", average);

    return 0;
}
