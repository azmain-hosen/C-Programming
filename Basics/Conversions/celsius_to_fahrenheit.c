#include <stdio.h>
#include <math.h>

int main()
{
    double Tc, Tf;

    printf("Enter temperature to Celsius scale : ");
    scanf("%lf", &Tc);

    Tf = (9.0 * Tc / 5.0) + 32;
    printf("Fahrenheit scale temperature is : %lf\n", Tf);

    return 0;
}
