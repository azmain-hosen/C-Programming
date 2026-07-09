#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 33)
    {
        printf("Passed\n");
    }
    else
    {
        printf("Failed\n");
    }
    
    return 0;
}