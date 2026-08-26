#include <stdio.h>

int main(void)
{
    int first_number = 25;
    int second_number = 15;

    int result = first_number > second_number;

    printf("Relational Operator: >\n");
    printf("------------------------\n");
    printf("%d > %d = %d\n", first_number, second_number, result);

    return 0;
}