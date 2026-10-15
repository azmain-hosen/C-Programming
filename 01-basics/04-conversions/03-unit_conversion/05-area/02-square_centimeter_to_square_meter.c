#include <stdio.h>

int main(void)
{
    double square_centimeter;
    double square_meter;

    printf("Enter area in square centimeters: ");
    scanf("%lf", &square_centimeter);

    square_meter = square_centimeter / 10000.0;

    printf("Area in square meters: %.4f m^2\n", square_meter);

    return 0;
}