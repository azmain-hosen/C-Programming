#include <stdio.h>

int main()
{
    double Tc, Tf;

    printf("Enter temperature to Fahrenheit scale : ");
    scanf("%lf", &Tf);

    Tc = (5.0 / 9.0) * (Tf - 32);
    printf("Celsius scale temperature : %.2lf\n", Tc);

    return 0;
}
