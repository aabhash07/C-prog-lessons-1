//WAP to read an integer from keyword and returns the sum of even valued digits using the function
#include<stdio.h>
int sum(int);
void main()
{
    int n;
    printf("enter no:");
    scanf("%d",&n);
    int s=sum(n);
    printf("\n%d is the sum of even digits of %d",s,n);
}
int sum(int x)
{
    int x1=x;
    static int rem,su;
    if(x>0)
    {
        rem=x%10;
        if(rem%2==0)
        {
            su=su+rem;
        }
        sum(x/10);
    }
    else
    {
        return su;
    }
}
