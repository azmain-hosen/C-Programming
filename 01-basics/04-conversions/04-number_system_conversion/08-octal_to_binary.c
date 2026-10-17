#include <stdio.h>

int main(void)
{
    char octal[65];
    int started = 0;

    printf("Enter an octal number: ");

    if (scanf("%64s", octal) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; octal[i] != '\0'; i++)
    {
        if (octal[i] < '0' || octal[i] > '7')
        {
            printf("Invalid octal number.\n");
            return 1;
        }
    }

    printf("Binary number: ");

    for (int i = 0; octal[i] != '\0'; i++)
    {
        int digit = octal[i] - '0';

        for (int bit = 2; bit >= 0; bit--)
        {
            int binary_digit = (digit >> bit) & 1;

            if (binary_digit == 1)
            {
                started = 1;
            }

            if (started)
            {
                printf("%d", binary_digit);
            }
        }
    }

    if (!started)
    {
        printf("0");
    }

    printf("\n");

    return 0;
}