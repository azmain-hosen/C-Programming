#include <stdio.h>

int main(void)
{
    int num1, num2;
    long long difference;

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

    difference = (long long)num1 - num2;

    printf("\nThe difference is: %lld\n", difference);

    return 0;
}