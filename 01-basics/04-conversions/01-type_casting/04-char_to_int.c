#include <stdio.h>

int main(void)
{
    char character = 'A';
    int number = (int)character;

    printf("Original character : %c\n", character);
    printf("Converted integer  : %d\n", number);

    return 0;
}