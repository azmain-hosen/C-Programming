#include <stdio.h>

int main(void)
{
    int age = 18;
    int required_age = 18;

    int result = age >= required_age;

    printf("Relational Operator: >=\n");
    printf("-------------------------\n");
    printf("%d >= %d = %d\n", age, required_age, result);

    return 0;
}