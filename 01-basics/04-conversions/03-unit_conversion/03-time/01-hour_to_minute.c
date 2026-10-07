#include <stdio.h>

int main(void)
{
    double hour;
    double minute;

    printf("Enter time in hours: ");
    scanf("%lf", &hour);

    minute = hour * 60.0;

    printf("Time in minutes: %.2f min\n", minute);

    return 0;
}
