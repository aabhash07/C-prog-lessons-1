#include<stdio.h>
void main()
{
    int a=0,b=1,i,c,n;
    printf("Enter no of terms you need: ");
    scanf("%d",&n);
    if(n==0){}
    if(n==1)
    {
        printf("\t %d \n",a);
    }
    if(n==2)
    {
        printf("\t %d \n",a);
        printf("\t %d \n",b);
    }
    printf("\t %d \n",a);
    printf("\t %d \n",b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("\t %d \n",c);
        a=b;
        b=c;
    }

}
