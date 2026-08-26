#include <stdio.h>

int main(void)
{
    int num1, num2, product;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    product = num1 * num2;
    printf("\nThe multiplication is : %d\n", product);

    return 0;
}