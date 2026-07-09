#include <stdio.h>

int main()
{
    char player1, player2;
    char extra1, extra2;

    printf("Player 1 (R, P, S): ");
    scanf("%c", &player1);
    scanf("%c", &extra1);

    if (extra1 != '\n')
    {
        printf("\nError! Player 1 entered more than one character.\n");
        return 0;
    }

    printf("Player 2 (R, P, S): ");
    scanf("%c", &player2);
    scanf("%c", &extra2);

    if (extra2 != '\n')
    {
        printf("\nError! Player 2 entered more than one character.\n");
        return 0;
    }

    switch (player1)
    {
    case 'r':
    case 'R':
        if (player2 == 'r' || player2 == 'R')
        {
            printf("\nIt's tie! Both chose rock\n");
        }
        else if (player2 == 's' || player2 == 'S')
        {
            printf("\nPlayer 1 is win! Rock breaks Scissors.\n");
        }
        else if (player2 == 'p' || player2 == 'P')
        {
            printf("\nPlayer 2 is win! Paper covered Rock\n");
        }
        else
        {
            printf("\nPlayer 2 entered an invalid choice!\n");
        }
        break;
    case 'p':
    case 'P':
        if (player2 == 'r' || player2 == 'R')
        {
            printf("\nPlayer 1 is win! Paper covered Rock\n");
        }
        else if (player2 == 'p' || player2 == 'P')
        {
            printf("\nIt's tie! Both chose Paper\n");
        }
        else if (player2 == 's' || player2 == 'S')
        {
            printf("\nPlayer 2 is win! Scissors cut Paper\n");
        }
        else
        {
            printf("\nPlayer 2 entered an invalid choice!\n");
        }
        break;
    case 's':
    case 'S':
        if (player2 == 'r' || player2 == 'R')
        {
            printf("\nplayer 2 is win! Rock breaks Scissors.\n");
        }
        else if (player2 == 'p' || player2 == 'P')
        {
            printf("\nPlayer 1 is win! Scissors cut Paper\n");
        }
        else if (player2 == 's' || player2 == 'S')
        {
            printf("\nIt's tie! Both chose Scissors\n");
        }
        else
        {
            printf("\nPlayer 2 entered an invalid choice!\n");
        }
        break;
    default:
        printf("\nPlayer 1 entered an invalid choice!\n");
        break;
    }
}