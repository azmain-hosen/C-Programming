#include <stdio.h>

int main ()
{
    char lower_ch;

    printf("Enter any lowercase character : ");
    scanf("%c", &lower_ch);

    printf("The uppercase character : %c\n", lower_ch - 32);

    return 0;
}
