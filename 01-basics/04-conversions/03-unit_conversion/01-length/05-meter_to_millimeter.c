#include <stdio.h>

int main(void)
{
    double meter;
    double millimeter;

    printf("Enter length in meters: ");
    scanf("%lf", &meter);

    millimeter = meter * 1000.0;

    printf("Length in millimeters: %.2f mm\n", millimeter);

    return 0;
}
