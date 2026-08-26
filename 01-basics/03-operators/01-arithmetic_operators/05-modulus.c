#include <stdio.h>

int main(void)
{
    int num1, num2, remainder;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    if (num2 == 0)
    {
        printf("Error: Cannot calculate remainder with zero.\n");
        return 1;
    }

    remainder = num1 % num2;

    printf("The remainder is : %d\n", remainder);

    return 0;
}