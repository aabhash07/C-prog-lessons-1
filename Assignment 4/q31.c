#include<stdio.h>
void main()
{
    int n,r,s=0,i=0,j=0,temp;
    int a[10];
    printf("Enter decimal\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        a[i]=r;
        i++;
    }
    //printf("%d",i);
     printf("the binary of %d is\n",temp);
     for(j=i-1;j>=0;j--)
     {
        printf("%d",a[j]);
     }
}
