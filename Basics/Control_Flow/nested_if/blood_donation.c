#include <stdio.h>

int main()
{
    int age, weight;

    printf("Enter your age : ");
    scanf("%d", &age);

    printf("Enter your weight : ");
    scanf("%d", &weight);

    if (age >= 18)
    {
        if (weight >= 50)
        {
            printf("\nYou are eligible to donate blood!\n");
        }
        else
        {
            printf("\nYou are underweight. Please wait!\n");
        }
    }
    else
    {
        printf("You are underage. Please wait!\n");
    }

    return 0;
}