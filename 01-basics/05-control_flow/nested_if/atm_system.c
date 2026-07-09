#include <stdio.h>

int main()
{
    int correct_pin = 123456;
    int entered_pin;
    int balance = 50000;
    printf("\nEnter your pin : ");
    scanf("%d", &entered_pin);
    if (correct_pin == entered_pin)
    {
        int i;
        for (i = 1; i <= 2; i++)
        {
            printf("\n1. Check Balance\n");
            printf("\n2. Withdraw Money\n");
            printf("\n3. Send Money");
            printf("\n\nEnter your choice a option : ");
            int chose_option;
            scanf("%d", &chose_option);
            if (chose_option == 1)
            {
                printf("\nYour balance is : %d TK\n", balance);
            }
            else if (chose_option == 2)
            {
                printf("\nEnter your amount of money : ");
                int amount_money;
                scanf("%d", &amount_money);
                if (amount_money <= 20000)
                {
                    printf("\nyour money is : %d TK\n", amount_money);
                    balance = balance - amount_money;
                }
                else
                {
                    printf("\nYou are not withdraw to more then 20000TK\n");
                }
            }
            else if (chose_option == 3)
            {
                printf("\nEnter your amount to send money : ");
                int amount_send_money;
                scanf("%d", &amount_send_money);
                if (amount_send_money <= 20000)
                {
                    printf("\nYour money is send! Thank you\n");
                    balance = balance - amount_send_money;
                }
                else
                {
                    printf("\nYou are not send to more then 20000TK\n");
                }
            }
            else
            {
                printf("\nYou are chose invalid option\n");
            }
        }
    }
    else
    {
        printf("\nYour pin is invalid\n");
    }
    return 0;
}