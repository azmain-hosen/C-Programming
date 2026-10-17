#include <stdio.h>

int main(void)
{
    unsigned int number;

    printf("Hexadecimal number: ");

    if (scanf("%x", &number) != 1)
    {
        printf("Invalid hexadecimal number.\n");
        return 1;
    }

    printf("Octal number: %o\n", number);

    return 0;
}