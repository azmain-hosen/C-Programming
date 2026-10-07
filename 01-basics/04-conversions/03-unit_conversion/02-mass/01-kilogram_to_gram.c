#include <stdio.h>

int main(void)
{
    double kilogram;
    double gram;

    printf("Enter mass in kilograms: ");
    scanf("%lf", &kilogram);

    gram = kilogram * 1000.0;

    printf("Mass in grams: %.2f g\n", gram);

    return 0;
}
