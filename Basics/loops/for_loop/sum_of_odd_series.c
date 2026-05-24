#include <stdio.h>

int main()
{
    int i, N;
    int sum = 0;

    printf("Enter a value of N : ");
    scanf("%d", &N);

    for (i = 1; i <= N; i += 2)
    {
        sum = sum + i;
    }
    printf("This series sum of : %d\n", sum);

    return 0;
}