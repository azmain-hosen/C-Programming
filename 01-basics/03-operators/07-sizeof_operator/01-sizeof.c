#include <stdio.h>

int main(void)
{
    int number = 10;
    double price = 99.99;
    char grade = 'A';

    printf("Size of int    : %zu bytes\n", sizeof(number));
    printf("Size of double : %zu bytes\n", sizeof(price));
    printf("Size of char   : %zu byte\n", sizeof(grade));

    return 0;
}