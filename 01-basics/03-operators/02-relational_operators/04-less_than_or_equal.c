#include <stdio.h>

int main(void)
{
    int temperature = 30;
    int maximum_temperature = 30;

    int result = temperature <= maximum_temperature;

    printf("Relational Operator: <=\n");
    printf("-------------------------\n");
    printf("%d <= %d = %d\n", temperature, maximum_temperature, result);

    return 0;
}