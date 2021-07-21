//9
//The monthly electricity bills to be computed as follows:
//WAP to compute monthly bills for a given number of units consumed by a customer.
//Minimum Rs 80/- for up to 20 units
//Rs 7.30 per unit for next 100 units
//Rs 9.00 per unit for any units beyond 120 units
#include<stdio.h>
void main()
{
    float bill,units;
    printf("Enter electricity units:\n");
    scanf("%f",&units);
    if(units<=20)
    {
        bill= 80;
        printf("Your bill amount is %.2f",bill);
    }
    else if(units>20 && units<=120)
    {
        bill = 80+ 7.3*(units-20);
        printf("Your bill amount is %.2f",bill);
    }
    else
    {
        bill = 9.00*units;
        printf("Your bill amount is %.2f",bill);
    }
}
