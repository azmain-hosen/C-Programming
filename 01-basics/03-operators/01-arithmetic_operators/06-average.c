#include <stdio.h>

int main(void)
{
    int num1, num2;
    double average;

    printf("Enter first number: ");
    if (scanf("%d", &num1) != 1)
    {
        fprintf(stderr, "Error: Please enter a valid integer.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%d", &num2) != 1)
    {
        fprintf(stderr, "Error: Please enter a valid integer.\n");
        return 1;
    }

    average = ((double)num1 + (double)num2) / 2.0;

    printf("The average is: %.2f\n", average);

    return 0;
}