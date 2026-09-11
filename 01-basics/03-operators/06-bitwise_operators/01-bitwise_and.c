#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 3;

    int result = a & b;

    printf("Bitwise AND: %d & %d = %d\n", a, b, result);

    return 0;
}