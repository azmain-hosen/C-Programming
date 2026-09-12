#include <stdio.h>

int main(void)
{
    int first_number = 5;
    int second_number = 3;

    int result = first_number | second_number;

    printf("Bitwise OR: %d | %d = %d\n", first_number, second_number, result);

    return 0;
}