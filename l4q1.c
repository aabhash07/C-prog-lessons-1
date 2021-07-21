#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<(n-1);i++)
    {
        if(n%i==0)
        {
            c=c+1;
            printf("%d is not prime",n);
            goto end;
        }
    }
    printf("%d is prime",n);
    end:
        {

        }
}
