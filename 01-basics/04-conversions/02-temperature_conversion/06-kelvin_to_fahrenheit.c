#include <stdio.h>

int main(void)
{
    double kelvin;
    double fahrenheit;

    printf("Enter temperature in Kelvin: ");
    scanf("%lf", &kelvin);

    fahrenheit = (kelvin - 273.15) * (9.0 / 5.0) + 32.0;

    printf("Temperature in Fahrenheit: %.2f °F\n", fahrenheit);

    return 0;
}
