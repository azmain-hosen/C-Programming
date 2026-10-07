#include <stdio.h>

int main(void)
{
    double meter;
    double centimeter;

    printf("Enter length in meters: ");
    scanf("%lf", &meter);

    centimeter = meter * 100.0;

    printf("Length in centimeters: %.2f cm\n", centimeter);

    return 0;
}
