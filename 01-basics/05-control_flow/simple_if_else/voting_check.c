#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You vote now.\n");
    }
    else
    {
        printf("You are underage. You cannot vote now.\n");
    }
    
    return 0;
}