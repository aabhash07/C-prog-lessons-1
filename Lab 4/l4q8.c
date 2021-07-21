#include<stdio.h>
void main()
{
    int n,r1,r2,i,j,c;
    printf("Enter range of integers: \n");
    scanf("%d%d", &r1,&r2);
    printf("The Prime Numbers in the range %d and %d are:\n",r1,r2);
    for(i=r1; i<=r2; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
            c=c+1;
            }
        }
        if(c<=2)
        {
            printf("\n\t%d",i);
        }
        c=0;
       }
}
