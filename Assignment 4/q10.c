//10
//A bank has introduced an incentive policy.
//A bonus of 2% of the balance is given to everyone irrespective of their balances
//and 5% is given to female account holder
//if their balance is more than Rs 5000/-.
//WAP to represent this policy and calculate balance after bonus.
#include<stdio.h>
void main()
{
    float balance;
    char sex;
    printf("Enter your old balance:\t");
    scanf("%f",&balance);
    printf("Enter gender of account holder:(f/m)\t");
    scanf(" %c",&sex);
    if (sex == 'f'|| sex=='F')
    {
        if(balance>5000)
        {
            balance=balance+0.05*balance;
        }
        else
        {
        balance=balance+0.02*balance;
        }
    }
    else
    {
        balance=balance+0.02*balance;
    }
    printf("Your new balance with bonus is %.2f",balance);
}
