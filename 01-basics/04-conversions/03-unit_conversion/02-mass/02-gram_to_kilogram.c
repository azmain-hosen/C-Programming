#include <stdio.h>

int main(void)
{
    double gram;
    double kilogram;

    printf("Enter mass in grams: ");
    scanf("%lf", &gram);

    kilogram = gram / 1000.0;

    printf("Mass in kilograms: %.2f kg\n", kilogram);

    return 0;
}
