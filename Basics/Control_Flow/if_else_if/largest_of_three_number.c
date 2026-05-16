#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Enter first number : ");
    scanf("%d", &x);

    printf("Enter second number : ");
    scanf("%d", &y);

    printf("Enter third number : ");
    scanf("%d", &z);

    if (x > y)
    {
        if (x > z)
        {
            printf("\nX is big number\n");
        }
        else
        {
            printf("\nZ is big number\n");
        }
    }

    else if (y > z)
    {
        printf("\nY is big number\n");
    }

    else
    {
        printf("\nZ is big number\n");
    }

    return 0;
}