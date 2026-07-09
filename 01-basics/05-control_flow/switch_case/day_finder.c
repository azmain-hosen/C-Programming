#include <stdio.h>

int main()
{
    int Day;

    printf("Enter any days number : ");
    scanf("%d", &Day);

    switch (Day)
    {
    case 1:
        printf("\nSaturday\n");
        break;
    case 2:
        printf("\nSunday\n");
        break;
    case 3:
        printf("\nMonday\n");
        break;
    case 4:
        printf("\nTuesday\n");
        break;
    case 5:
        printf("\nWednesday\n");
        break;
    case 6:
        printf("\nThursday\n");
        break;
    case 7:
        printf("\nFriday\n");
        break;
    default:
        printf("\nPlease enter between 1 - 7. Because there are 7 days in a week.\n");
        break;
    }
}