//14
//WAP to read a number from the keyboard until
//a zero or a negative number is keyed in .
//Finally calculate sum and average of entered numbers.
#include<stdio.h>
void main()
{
    int num,count=0;
    float sum=0,avg;
    do
    {
        printf("Enter number:");
        scanf("%d",&num);
        sum+=num;
        count++;
    }
    while(num>0);
    sum=sum-num;
    avg=(sum)/(count-1);
    printf("The sum is %.2f",sum);
    printf("The average is %.2f",avg);
}

