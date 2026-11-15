#include <stdio.h>
#include <limits.h>

int main(void)
{
    int num1, num2, remainder;

    printf("Enter first integer: ");
    if (scanf("%d", &num1) != 1)
    {
        fprintf(stderr, "Error: Please enter a valid integer.\n");
        return 1;
    }

    printf("Enter second integer: ");
    if (scanf("%d", &num2) != 1)
    {
        fprintf(stderr, "Error: Please enter a valid integer.\n");
        return 1;
    }

    if (num2 == 0)
    {
        fprintf(stderr, "Error: Cannot calculate a remainder with zero.\n");
        return 1;
    }

    if (num1 == INT_MIN && num2 == -1)
    {
        fprintf(stderr, "Error: The division result is not representable as an int.\n");
        return 1;
    }

    remainder = num1 % num2;

    printf("The remainder is: %d\n", remainder);

    return 0;
}