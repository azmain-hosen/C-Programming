#include <stdio.h>

int main(void)
{
    unsigned int number;

    printf("Octal number: ");

    if (scanf("%o", &number) != 1)
    {
        printf("Invalid octal number.\n");
        return 1;
    }

    printf("Hexadecimal number: %X\n", number);

    return 0;
}