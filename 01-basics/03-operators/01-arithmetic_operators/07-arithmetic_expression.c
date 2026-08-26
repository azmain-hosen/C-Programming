#include <stdio.h>

int main(void)
{
    int result1 = 10 + 5 * 2;
    int result2 = (10 + 5) * 2;
    int result3 = 20 - 8 / 2;
    int result4 = 17 + 5 % 3;

    printf("Arithmetic Expression Results\n");
    printf("-----------------------------\n");
    printf("10 + 5 * 2     = %d\n", result1);
    printf("(10 + 5) * 2   = %d\n", result2);
    printf("20 - 8 / 2     = %d\n", result3);
    printf("17 + 5 %% 3     = %d\n", result4);

    return 0;
}