#include <stdio.h>

int main()
{
    double num1, num2, division;

    printf("Enter first number : ");
    scanf("%lf", &num1);

    printf("Enter second number : ");
    scanf("%lf", &num2);

    division = num1 / num2;
    printf("\nThe division is : %.2lf\n", division);

    return 0;
}