#include<stdio.h>
int prime(int);
void main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int y=prime(n);
    if(y==1)
    {
        printf("Prime number");
    }
    if(y==0)
    {
        printf("Composite number");
    }
}
int prime(int a)
{
    int c=0,x=0;
    for(int i=1; i<=a; i++)
    {
        if(a%i==0)
        {
            c=c+1;
        }
    }
    if(c<=2)
    {
        x=1;
    }
    else{x= 0;}
    return x;
}
