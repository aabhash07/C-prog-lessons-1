//Use recursive function to write a C program to calculate the sum of the digits of a given number which is a single digit number.if the sum contains two or more than two digits then go on adding the digits of the number unless you get a single digit number.[2345=2+3+4+5=14=1+4=5]
#include<stdio.h>
int sum(int);
void main()
{
    int n,n1;
    printf("enter no:");
    scanf("%d",&n);
    int s=sum(n);
    printf("\n%d is the sum of the digits of %d",s,n);
}
int sum(int x)
{
    int x1=x;
    static int rem,su;
    if(x>0)
    {
        rem=x%10;
        su=su+rem;
        sum(x/10);
    }
    else
    {
        return su;
    }
}

