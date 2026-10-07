#include <stdio.h>

int main(void)
{
    double meter;
    double kilometer;

    printf("Enter distance in meters: ");
    scanf("%lf", &meter);

    kilometer = meter / 1000.0;

    printf("Distance in kilometers: %.2f km\n", kilometer);

    return 0;
}
