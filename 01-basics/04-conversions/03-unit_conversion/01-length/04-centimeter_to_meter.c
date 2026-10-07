#include <stdio.h>

int main(void)
{
    double centimeter;
    double meter;

    printf("Enter length in centimeters: ");
    scanf("%lf", &centimeter);

    meter = centimeter / 100.0;

    printf("Length in meters: %.2f m\n", meter);

    return 0;
}
