#include<stdio.h>
long long fact(long long);
void main()
{
    long long n,f;
    printf("Enter number: ");
    scanf("%d",&n);
    f=fact(n);
    if(f>0)
    {
        printf("the factorial of %d is %d",n,f);
    }

}
long long fact(long long a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    if(a>1)
    {
        return (a*fact(a-1));
    }
    else
    {
        printf("Factorial is not possible");
        return -1;
    }
}
