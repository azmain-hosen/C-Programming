#include <stdio.h>

int main(void)
{
    double meter_per_second;
    double km_per_hour;

    printf("Enter speed in meters per second: ");
    scanf("%lf", &meter_per_second);

    km_per_hour = meter_per_second * (18.0 / 5.0);

    printf("Speed in kilometers per hour: %.2f km/h\n", km_per_hour);

    return 0;
}