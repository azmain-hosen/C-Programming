#include <stdio.h>

int main(void)
{
    double minute;
    double hour;

    printf("Enter time in minutes: ");
    scanf("%lf", &minute);

    hour = minute / 60.0;

    printf("Time in hours: %.2f h\n", hour);

    return 0;
}
