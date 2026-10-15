#include <stdio.h>

int main(void)
{
    double km_per_hour;
    double meter_per_second;

    printf("Enter speed in kilometers per hour: ");
    scanf("%lf", &km_per_hour);

    meter_per_second = km_per_hour * (5.0 / 18.0);

    printf("Speed in meters per second: %.2f m/s\n", meter_per_second);

    return 0;
}