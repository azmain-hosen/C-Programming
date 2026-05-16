#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 80)
    {
        printf("You got A+\n");
    }
    else if (marks >= 70)
    {
        printf("You got A\n");
    }
    else if (marks >= 60)
    {
        printf("You got A-\n");
    }
    else if (marks >= 50)
    {
        printf("You got B\n");
    }
    else if (marks >= 40)
    {
        printf("You got C\n");
    }
    else if (marks >= 33)
    {
        printf("You got D\n");
    }
    else
    {
        printf("You failed\n");
    }
    

    return 0;
}