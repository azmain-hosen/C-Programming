#include <stdio.h>

int main(void)
{
    double kelvin;
    double celsius;

    printf("Enter temperature in Kelvin: ");
    scanf("%lf", &kelvin);

    celsius = kelvin - 273.15;

    printf("Temperature in Celsius: %.2f °C\n", celsius);

    return 0;
}
