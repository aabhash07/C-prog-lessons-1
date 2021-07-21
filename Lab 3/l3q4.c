#include<stdio.h>
void main()
{
    int year;
    printf("Type Year:\n");
    scanf("%d",&year);
    if(year%100!=0 && year%4==0)
    {
        printf("Leap year");
    }
    else if(year%100==0 && year%400==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
}

