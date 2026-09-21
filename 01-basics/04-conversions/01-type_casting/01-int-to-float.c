#include <stdio.h>

int main(void)
{
    int number = 25;
    float converted_number = (float)number;

    printf("Original integer : %d\n", number);
    printf("Converted float  : %.2f\n", converted_number);

    return 0;
}