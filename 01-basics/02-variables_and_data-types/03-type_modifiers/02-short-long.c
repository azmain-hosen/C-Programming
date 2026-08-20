#include <stdio.h>

int main(void)
{
    short int a = 10;
    int b = 100;
    long int c = 2000;
    long long int d = 20000;

    printf("Short int for size : %zu bytes\n", sizeof(a));
    printf("Int for size : %zu bytes\n", sizeof(b));
    printf("Long int for size : %zu bytes\n", sizeof(c));
    printf("Long long int for size : %zu bytes\n", sizeof(d));

    return 0;
}