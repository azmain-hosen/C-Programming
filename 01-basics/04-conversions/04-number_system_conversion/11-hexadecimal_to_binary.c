#include <stdio.h>

int main(void)
{
    char hexadecimal[65];
    int started = 0;

    printf("Enter a hexadecimal number: ");

    if (scanf("%64s", hexadecimal) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; hexadecimal[i] != '\0'; i++)
    {
        char digit = hexadecimal[i];

        if (!((digit >= '0' && digit <= '9') ||
              (digit >= 'a' && digit <= 'f') ||
              (digit >= 'A' && digit <= 'F')))
        {
            printf("Invalid hexadecimal number.\n");
            return 1;
        }
    }

    printf("Binary number: ");

    for (int i = 0; hexadecimal[i] != '\0'; i++)
    {
        char digit = hexadecimal[i];
        int value;

        if (digit >= '0' && digit <= '9')
        {
            value = digit - '0';
        }
        else if (digit >= 'a' && digit <= 'f')
        {
            value = digit - 'a' + 10;
        }
        else
        {
            value = digit - 'A' + 10;
        }

        for (int bit = 3; bit >= 0; bit--)
        {
            int binary_digit = (value >> bit) & 1;

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