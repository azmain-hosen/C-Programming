#include <stdio.h>

int main(void)
{
    int is_student = 1;
    int is_employee = 0;

    int result = (is_student != 0) || (is_employee != 0);

    printf("Logical Operator: ||\n");
    printf("----------------------\n");
    printf("Is Student || Is Employee = %d\n", result);

    return 0;
}