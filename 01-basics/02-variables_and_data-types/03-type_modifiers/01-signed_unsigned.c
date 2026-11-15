#include <stdio.h>

int main(void)
{
    signed int negative_number = -45;
    signed int positive_number = 45;
    unsigned int unsigned_number = 43;

    printf("Signed negative number   : %d\n", negative_number);
    printf("Signed positive number   : %d\n", positive_number);
    printf("Unsigned number           : %u\n", unsigned_number);

    return 0;
}