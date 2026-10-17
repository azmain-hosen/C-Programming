#include <stdio.h>

int main(void)
{
    unsigned long long number;

    printf("Octal number: ");

    if (scanf("%llo", &number) != 1)
    {
        printf("Invalid octal number.\n");
        return 1;
    }

    printf("Decimal number: %llu\n", number);

    return 0;
}