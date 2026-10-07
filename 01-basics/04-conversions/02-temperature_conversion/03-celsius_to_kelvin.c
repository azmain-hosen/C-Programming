#include <stdio.h>

int main(void)
{
    double celsius;
    double kelvin;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    kelvin = celsius + 273.15;

    printf("Temperature in Kelvin: %.2f K\n", kelvin);

    return 0;
}
