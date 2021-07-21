//WAP TO DISPLAY THE REVERSE OF A NUMBER USING RECURSION.
#include<stdio.h>
int reverse(int);
void main()
{
    int n,n1;
    printf("enter no: ");
    scanf("%d",&n);
    int r=reverse(n);
    printf("\n%d is the reverse of of %d",r,n);
}
int reverse(int x)
{
    int x1=x;
    static int rem=0,rev=0;
    if(x>0)
    {
        rem=x%10;
        rev=rev*10+rem;
        reverse(x/10);
    }
    else
    {
        return rev;
    }
}
