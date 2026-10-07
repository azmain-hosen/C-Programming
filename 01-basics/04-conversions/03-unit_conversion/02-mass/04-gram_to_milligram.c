#include <stdio.h>

int main(void)
{
    double gram;
    double milligram;

    printf("Enter mass in grams: ");
    scanf("%lf", &gram);

    milligram = gram * 1000.0;

    printf("Mass in milligrams: %.2f mg\n", milligram);

    return 0;
}
