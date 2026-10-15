#include <stdio.h>

int main(void)
{
    double liter;
    double milliliter;

    printf("Enter volume in liters: ");
    scanf("%lf", &liter);

    milliliter = liter * 1000.0;

    printf("Volume in milliliters: %.2f mL\n", milliliter);

    return 0;
}