#include <stdio.h>

int main()
{
    long double num1, num2;
    char op;

    printf("Enter your first number : ");
    scanf("%Lf", &num1);

    printf("\nEnter a operator : ");
    scanf(" %c", &op);

    printf("\nEnter your second number : ");
    scanf("%Lf", &num2);

    if (op == '+')
    {
        printf("\nThe result is : %.2Lf\n" ,num1 + num2);
    }
    else if (op == '-')
    {
        printf("\nThe result is : %.2Lf\n" ,num1 - num2);
    }
    else if (op == '*')
    {
        printf("\nThe result is : %.2Lf\n" ,num1 * num2);
    }
    else if (op == '/')
    {
        printf("\nThe result is : %.2Lf\n" ,num1 / num2);
    }
    
    return 0;
}