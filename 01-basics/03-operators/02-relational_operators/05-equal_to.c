#include <stdio.h>

int main(void)
{
    int first_number = 50;
    int second_number = 50;

    int result = first_number == second_number;

    printf("Relational Operator: ==\n");
    printf("-------------------------\n");
    printf("%d == %d = %d\n", first_number, second_number, result);

    return 0;
}