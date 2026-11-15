#include <stdio.h>

int main(void)
{
    short int short_value = 10;
    int int_value = 100;
    long int long_value = 2000;
    long long int long_long_value = 20000;

    printf("Size of short int      : %zu bytes\n", sizeof(short_value));
    printf("Size of int            : %zu bytes\n", sizeof(int_value));
    printf("Size of long int       : %zu bytes\n", sizeof(long_value));
    printf("Size of long long int  : %zu bytes\n", sizeof(long_long_value));

    return 0;
}