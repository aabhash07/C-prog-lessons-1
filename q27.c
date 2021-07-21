//27. WAP to find the number of and sum of all integers greater than n1 and less than n2 and divisible by 7, where n1<n2 and n1 & n2 are read from the keyboard.
#include<stdio.h>
void main()
{
    int n1,n2,i,sum=0,c=0;
    printf("Enter value of n1 and n2:\n");
    scanf("%d%d",&n1,&n2);
    if(n2>n1)
    {
        for(i=n1+1;n2>i;i++)
        {
            if(i%7==0)
            {
                sum=sum+i;
                c=c+1;
            }
        }
        printf("Sum of all integer exactly divisible by 7 is:%d\n",sum);
        printf("Number of all integer exactly divisible by 7 is:%d",c);

    }
    else
    {
        printf("n1 is less than n2");
    }
}
