#include <stdio.h>

int main()
{
    int sum = 0;
    int i, n;

    printf("\nEnter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("This series is sum of : %d\n\n", sum);

    return 0;
}