#include <stdio.h>

int main(void)
{
    int age;
    float height;
    double price;
    char grade;

    // Use sizeof to avoid unused-variable warnings
    // without reading uninitialized values.
    (void)sizeof age;
    (void)sizeof height;
    (void)sizeof price;
    (void)sizeof grade;

    printf("Variables declared successfully.\n");

    return 0;
}