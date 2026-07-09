#include <stdio.h>

int main()
{
    double r, Area;
    float pi = 3.1416;

    printf("Enter the circle of radius : ");
    scanf("%lf", &r);

    Area = pi * r * r;
    printf("Area of circle : %.2lf\n", Area);

    return 0;
}