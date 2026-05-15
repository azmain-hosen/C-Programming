#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are voting now\n");
    }
    else
    {
        printf("You are under old\n");
    }
    
    return 0;
}