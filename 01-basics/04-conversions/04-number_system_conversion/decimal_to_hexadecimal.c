#include <stdio.h>

int main()
{
    double number;
    printf("Decimal number : ");
    scanf("%lf", &number);

    printf("Hexadecimal number : %lx\n", (long)number);

    return 0;
}
