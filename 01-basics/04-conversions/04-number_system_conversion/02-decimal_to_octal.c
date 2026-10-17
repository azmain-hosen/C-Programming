#include <stdio.h>

int main(void)
{
    int number;

    printf("Decimal number: ");

    if (scanf("%d", &number) != 1 || number < 0)
    {
        printf("Invalid input. Enter a non-negative integer.\n");
        return 1;
    }

    printf("Octal number: %o\n", (unsigned int)number);

    return 0;
}