#include <stdio.h>

int main()
{
    long long int number;

    printf("Octal number : ");
    scanf("%llo", &number);

    printf("Decimal number : %lld\n", number);

    return 0;
}
