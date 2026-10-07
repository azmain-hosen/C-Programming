#include <stdio.h>

int main(void)
{
    int number = 65;
    char character = (char)number;

    printf("Original integer : %d\n", number);
    printf("Converted char   : %c\n", character);

    return 0;
}