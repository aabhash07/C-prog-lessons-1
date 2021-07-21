#include<stdio.h>
#include<math.h>
void main()
{
    int bin,rem,sum=0,temp,i=0;
    printf("Enter binary no\n");
    scanf("%d",&bin);
    temp=bin;
    while (bin != 0)
    {
        rem = bin% 10;
        sum=sum+rem*pow(2,i);
        bin= bin/10;
        i++;
    }
    printf("decimal of%d=%d",temp,sum);
}
