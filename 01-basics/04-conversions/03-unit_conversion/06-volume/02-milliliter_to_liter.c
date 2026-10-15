#include <stdio.h>

int main(void)
{
    double milliliter;
    double liter;

    printf("Enter volume in milliliters: ");
    scanf("%lf", &milliliter);

    liter = milliliter / 1000.0;

    printf("Volume in liters: %.3f L\n", liter);

    return 0;
}