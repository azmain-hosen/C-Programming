#include <stdio.h>

int main(void)
{
    double square_meter;
    double square_centimeter;

    printf("Enter area in square meters: ");
    scanf("%lf", &square_meter);

    square_centimeter = square_meter * 10000.0;

    printf("Area in square centimeters: %.2f cm^2\n", square_centimeter);

    return 0;
}