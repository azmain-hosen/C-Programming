#include <stdio.h>

int main()
{
    int x;

    printf("Enter any number : ");
    scanf("%d", &x);

    if (x >= 0)
    {
        printf("Number is positive\n");
    }
    else
    {
        printf("Number is negative\n");
    }

    return 0;
}