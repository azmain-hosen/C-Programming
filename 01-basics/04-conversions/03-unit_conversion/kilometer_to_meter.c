#include <stdio.h>

int main(void)
{
    double kilometer;
    double meter;

    printf("Enter distance in kilometers: ");
    scanf("%lf", &kilometer);

    meter = kilometer * 1000.0;

    printf("Distance in meters: %.2f m\n", meter);

    return 0;
}
