#include <stdio.h>

int main(void)
{
    char binary[65];
    const char hexadecimal_digits[] = "0123456789ABCDEF";
    int length = 0;
    int index = 0;
    int group_size;
    int started = 0;

    printf("Enter a binary number: ");

    if (scanf("%64s", binary) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    while (binary[length] != '\0')
    {
        if (binary[length] != '0' && binary[length] != '1')
        {
            printf("Invalid binary number.\n");
            return 1;
        }

        length++;
    }

    group_size = length % 4;

    if (group_size == 0)
    {
        group_size = 4;
    }

    printf("Hexadecimal number: ");

    while (index < length)
    {
        int value = 0;

        for (int i = 0; i < group_size; i++)
        {
            value = value * 2 + (binary[index] - '0');
            index++;
        }

        if (value != 0 || started)
        {
            printf("%c", hexadecimal_digits[value]);
            started = 1;
        }

        group_size = 4;
    }

    if (!started)
    {
        printf("0");
    }

    printf("\n");

    return 0;
}