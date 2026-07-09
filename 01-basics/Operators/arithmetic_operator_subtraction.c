#include <stdio.h>

int main()
{
    int num1, num2, subtract;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    subtract = num1 - num2;
    printf("\nThe subtraction is : %d\n", subtract);

    return 0;
}