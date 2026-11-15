#include <stdio.h>

int main(void)
{
    int result1 = 10 + 5 * 2;
    int result2 = (10 + 5) * 2;
    int result3 = 20 - 8 / 2;
    int result4 = 17 + 5 % 3;

    int integer_division = 7 / 2;
    double floating_division = 7.0 / 2.0;

    printf("Arithmetic Expression Results\n");
    printf("------------------------------\n");

    printf("10 + 5 * 2       = %d\n", result1);
    printf("(10 + 5) * 2     = %d\n", result2);
    printf("20 - 8 / 2       = %d\n", result3);
    printf("17 + 5 %% 3       = %d\n", result4);

    printf("7 / 2 (integer)  = %d\n", integer_division);
    printf("7.0 / 2.0        = %.2f\n", floating_division);

    return 0;
}