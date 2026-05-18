#include <stdio.h>
#include <math.h>

int main()
{
    double leant1, leant2, leant3, S, Area;

    printf("Enter the length of the first side of the triangle : ");
    scanf("%lf", &leant1);

    printf("Enter the length of the second side of the triangle : ");
    scanf("%lf", &leant2);

    printf("Enter the length of the third side of the triangle : ");
    scanf("%lf", &leant3);

    S = (leant1 + leant2 + leant3) / 2.0;
    Area = sqrt(S*(S - leant1) * (S - leant2) * (S - leant3));

    printf("The area is : %.2lf\n", Area);

    return 0;

}