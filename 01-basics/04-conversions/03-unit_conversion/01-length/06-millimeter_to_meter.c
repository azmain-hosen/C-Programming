#include <stdio.h>

int main(void)
{
    double millimeter;
    double meter;

    printf("Enter length in millimeters: ");
    scanf("%lf", &millimeter);

    meter = millimeter / 1000.0;

    printf("Length in meters: %.2f m\n", meter);

    return 0;
}
