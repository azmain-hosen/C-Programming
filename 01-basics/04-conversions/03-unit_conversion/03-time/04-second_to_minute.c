#include <stdio.h>

int main(void)
{
    double second;
    double minute;

    printf("Enter time in seconds: ");
    scanf("%lf", &second);

    minute = second / 60.0;

    printf("Time in minutes: %.2f min\n", minute);

    return 0;
}