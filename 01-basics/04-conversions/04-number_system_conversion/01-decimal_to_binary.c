#include <stdio.h>

int main(void)
{
    int decimal;
    int binary[32];
    int index = 0;

    printf("Enter a non-negative decimal integer: ");

    if (scanf("%d", &decimal) != 1 || decimal < 0)
    {
        printf("Invalid input. Enter a non-negative integer.\n");
        return 1;
    }

    do
    {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    } while (decimal > 0);

    printf("Binary number: ");

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}