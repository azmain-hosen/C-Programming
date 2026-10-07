#include <stdio.h>

int main(void)
{
    double celsius;
    double fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (9.0 * celsius / 5.0) + 32.0;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
