#include <stdio.h>

int main(void)
{
    double num1, num2, quotient;

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1)
    {
        fprintf(stderr, "Error: Please enter a valid number.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1)
    {
        fprintf(stderr, "Error: Please enter a valid number.\n");
        return 1;
    }

    if (num2 == 0.0)
    {
        fprintf(stderr, "Error: Cannot divide by zero.\n");
        return 1;
    }

    quotient = num1 / num2;

    printf("\nThe quotient is: %.2f\n", quotient);

    return 0;
}