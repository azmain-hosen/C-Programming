#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 80)
    {
        printf("\nYou got A+\n");
    }
    else if (marks >= 70)
    {
        printf("\nYou got A\n");
    }
    else if (marks >= 60)
    {
        printf("\nYou got A-\n");
    }
    else if (marks >= 50)
    {
        printf("\nYou got B\n");
    }
    else if (marks >= 40)
    {
        printf("\nYou got C\n");
    }
    else if (marks >= 33)
    {
        printf("\nYou got D\n");
    }
    else
    {
        printf("\nYou failed\n");
    }
    

    return 0;
}