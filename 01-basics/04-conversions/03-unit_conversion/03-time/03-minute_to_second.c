#include <stdio.h>

int main(void)
{
    double minute;
    double second;

    printf("Enter time in minutes: ");
    scanf("%lf", &minute);

    second = minute * 60.0;

    printf("Time in seconds: %.2f s\n", second);

    return 0;
}