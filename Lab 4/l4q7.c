#include<stdio.h>
#include<math.h>
void main()
{
     int a,b,i,s=0,f=1,m;
     printf("Type any number:");
     scanf("%d",&a);
     m=a;
     while(a!=0)
    {
        b=a%10;
        for(i=1; i<=b; i++)
        {
            f=f*i;
        }
        s=s+f;
        a=a/10;
        f=1;
     }
    if(s==m)
    {
        printf("\n%d is a STRONG number.\n",m);
    }
    else
    {
        printf("\n%d is NOT a strong number.\n",m);
    }
}

