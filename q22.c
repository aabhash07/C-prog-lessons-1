#include<stdio.h>
void main()
{
    long a=0,b=1,i,c,n;
    printf("Enter no of terms you need: ");
    scanf("%d",&n);
    if(n==0)
    {
    }
    printf("\t %d \n",a);
    if(n==1)
    {
    }
    printf("\t %d \n",b);
    if(n==2)
    {
    }
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("\t %Ld\n",c);
        a=b;
        b=c;
    }

}

