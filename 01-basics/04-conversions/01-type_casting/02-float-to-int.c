#include <stdio.h>

int main(void)
{
    float number = 25.75f;
    int converted_number = (int)number;

    printf("Original float : %.2f\n", number);
    printf("Converted int  : %d\n", converted_number);

    return 0;
}