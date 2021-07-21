#include<stdio.h>
#include<math.h>
void main()
{
    int num;
    printf("enter a num\n");
    scanf("%d",&num);
    if (num<=50)
    {
        printf("the sq of %d is %d",num,pow(num,2));
    }
    else
    {
        if(num%2==0)
        {
            printf("%d is greater than 50 and is even",num);
        }
        else
        {
            printf("%d is greater than 50 and is odd",num);
        }

    }
}
