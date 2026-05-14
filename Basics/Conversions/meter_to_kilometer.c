#include <stdio.h>

int main() 
{
    double meter, kilometer;

    printf("Enter distance in meters : ");
    scanf("%lf", &meter);

    kilometer = meter / 1000.0;
    printf("%.2lf meter is equal to %.2lf kilometer.\n", meter, kilometer);

    return 0;
}