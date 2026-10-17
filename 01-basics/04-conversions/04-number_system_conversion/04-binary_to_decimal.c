#include <stdio.h>

int main(void)
{
    char binary[65];
    unsigned long long int decimal = 0;

    printf("Enter a binary number: ");

    if (scanf("%64s", binary) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] != '0' && binary[i] != '1')
        {
            printf("Invalid binary number.\n");
            return 1;
        }

        decimal = decimal * 2 + (binary[i] - '0');
    }

    printf("Decimal number: %llu\n", decimal);

    return 0;
}