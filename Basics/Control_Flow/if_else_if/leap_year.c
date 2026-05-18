#include <stdio.h>

int main()
{
    int year;

    printf("Enter any year : ");
    scanf("%d", &year);

    if ((year % 400 == 0) || ((year % 100 != 0 ) && (year % 4 == 0)))
    {
        printf("\n%d year is a leap year\n", year);
    }
    else
    {
        printf("\nis not a leap year\n");
    }
    
    return 0;
}