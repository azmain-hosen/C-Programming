#include <stdio.h>

int main()
{
    long double electricity_unit, base_bill, total_bill;

    printf("Enter your electricity unit : ");
    scanf("%Lf", &electricity_unit);

    if (electricity_unit <= 50.0)
    {
        base_bill = electricity_unit * 0.50;
    }
    else if (electricity_unit <= 150.0)
    {
        base_bill = (50.0 * 0.50) + ((electricity_unit - 50.0) * 0.75);
    }
    else if (electricity_unit <= 250.0)
    {
        base_bill = (50.0 * 0.50) + (100.0 * 0.75) + ((electricity_unit - 100.0) * 2.0);
    }
    else if (electricity_unit >= 250.0)
    {
        base_bill = (50.0 * 0.50) + (100.0 * 0.75) + (100.0 * 2.0) + ((electricity_unit - 250.0) * 5);
    }
    
    total_bill = base_bill + (base_bill * 0.25);

    printf("\nYour base bill : %.2Lf Taka\n", base_bill);
    printf("\nYour total bill (with 25%% vat) : %.2Lf\n", total_bill);

    return 0;
}