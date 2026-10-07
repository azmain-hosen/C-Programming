#include <stdio.h>

int main(void)
{
    double kilogram;
    double milligram;

    printf("Enter mass in kilograms: ");
    scanf("%lf", &kilogram);

    milligram = kilogram * 1000000.0;

    printf("Mass in milligrams: %.2f mg\n", milligram);

    return 0;
}
