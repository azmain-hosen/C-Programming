#include <stdio.h>

int main()
{
    char ch;
    char next_ch;

    printf("Enter a single character : ");
    scanf("%c", &ch);

    scanf("%c", &next_ch);

    if (next_ch != '\n')
    {
        printf("\nError! You cannot enter more than one character.\n");
    }
    else
    {
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\nIt's a vowel\n");
            break;

        default:
            printf("\nIt's a consonant\n");
            break;
        }
    }

    return 0;
}