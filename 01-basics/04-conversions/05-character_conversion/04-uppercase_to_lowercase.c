#include <stdio.h>

int main(void)
{
    char upper_ch;

    printf("Enter any uppercase character: ");
    scanf(" %c", &upper_ch);

    printf("The lowercase character: %c\n", upper_ch + 32);

    return 0;
}