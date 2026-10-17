#include <stdio.h>

int main(void)
{
    char binary[65];
    int length = 0;

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

    int first_group_size = length % 3;

    if (first_group_size == 0)
    {
        first_group_size = 3;
    }

    int index = 0;
    int group_size = first_group_size;
    int started = 0;

    printf("Octal number: ");

    while (index < length)
    {
        int octal_digit = 0;

        for (int i = 0; i < group_size; i++)
        {
            octal_digit = octal_digit * 2 + (binary[index] - '0');
            index++;
        }

        if (octal_digit != 0 || started)
        {
            printf("%d", octal_digit);
            started = 1;
        }

        group_size = 3;
    }

    if (!started)
    {
        printf("0");
    }

    printf("\n");

    return 0;
}