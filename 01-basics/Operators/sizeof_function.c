#include <stdio.h>

int main()
{
    int i;
    float f;
    double d;
    char c;

    printf("Size of integer = %zu bytes\n", sizeof(i));
    printf("Size of float = %zu bytes\n", sizeof(f));
    printf("Size of double = %zu bytes\n", sizeof(d));
    printf("Size of character = %zu bytes\n", sizeof(c));

    return 0;
}
