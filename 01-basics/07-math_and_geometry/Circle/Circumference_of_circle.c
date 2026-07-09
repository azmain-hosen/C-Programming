#include <stdio.h>

int main()

{
    double r, Circumference;
    float pi = 3.1416;

    printf("Enter the circle of radius : ");
    scanf("%lf", &r);

    Circumference = 2 * pi * r;
    printf("Circumference of circle : %.2lf\n", Circumference);

    return 0;
}