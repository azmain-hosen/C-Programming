#include <stdio.h>

int main(void)
{
    double fahrenheit;
    double celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
