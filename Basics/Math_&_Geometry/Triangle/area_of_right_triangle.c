#include <stdio.h>

int main()

{
    double base, height, Area;
    printf("Enter the base of right triangle : ");
    scanf("%lf", &base);

    printf("Enter the height of right triangle : ");
    scanf("%lf", &height);

    Area = 0.5 * base * height;
    printf("Area of right triangle : %.2lf\n", Area);

    return 0;
}