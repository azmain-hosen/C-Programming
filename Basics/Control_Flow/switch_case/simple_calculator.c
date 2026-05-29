#include <stdio.h>

int main()
{
    long double num1, num2;
    char op;

    printf("Enter first number : ");
    scanf("%Lf", &num1);

    printf("Enter a operator : ");
    scanf(" %c", &op);

    printf("Enter second number : ");
    scanf("%Lf", &num2);

    switch (op)
    {
    case '+':
        printf("The result is : %.2Lf", num1 + num2);
        break;
    case '-':
        printf("The result is : %.2Lf", num1 - num2);
        break;
    case '*':
        printf("The result is : %.2Lf\n", num1 * num2);
        break;
    case '/':
        printf("The result is : %.2Lf\n", num1 / num2);
        break;
    
    default:
        printf("Invalid operator! Please enter +, -, *, or /.\n");
        break;
    }

    return 0;
}