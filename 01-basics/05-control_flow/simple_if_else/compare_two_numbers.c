#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter first number : ");
    scanf("%d", &x);

    printf("Enter second number : ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("X is big number\n");
    }
    else if (y > x)
    {
        printf("Y is big number\n");
    }
    else
    {
        printf("Both number are equal\n");
    }

    return 0;
}