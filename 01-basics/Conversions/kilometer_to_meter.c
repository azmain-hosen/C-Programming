#include <stdio.h>

int main()
{
    double kilometer, meter;

    printf("Enter distance in kilometer : ");
    scanf("%lf", &kilometer);

    meter = kilometer * 1000;
    printf("%.2lf kilometer is equal to %.2lf meter\n", kilometer, meter);

    return 0;
}