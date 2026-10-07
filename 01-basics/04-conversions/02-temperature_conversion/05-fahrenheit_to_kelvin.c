#include <stdio.h>

int main(void)
{
    double fahrenheit;
    double kelvin;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    kelvin = (fahrenheit - 32.0) * (5.0 / 9.0) + 273.15;

    printf("Temperature in Kelvin: %.2f K\n", kelvin);

    return 0;
}
