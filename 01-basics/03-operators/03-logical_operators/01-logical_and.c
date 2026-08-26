#include <stdio.h>

int main(void)
{
    int age = 10;
    int has_id = 1;

    int result = age >= 18 && has_id;

    printf("Logical Operator: &&\n");
    printf("----------------------\n");
    printf("Age >= 18 && Has ID = %d\n", result);

    return 0;
}