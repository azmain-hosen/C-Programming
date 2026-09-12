#include <stdio.h>

int main(void)
{
    int number = 5;
    int result = ~number;

    printf("Bitwise NOT: ~%d = %d\n", number, result);

    return 0;
}