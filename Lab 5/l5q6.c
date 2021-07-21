#include<stdio.h>
int sumn(int);
void main()
{
    int n;
    printf("enter no of terms:");
    scanf("%d",&n);
    int s=sumn(n);
    printf("\nsum of nos from 1 to %d = %d",n,s);
}
int sumn(int p)
{
    static int su=0;
    if (p>0)
    {
        su=(p+sumn(p-1));
    }
    else
    {
        return su;
    }
}


