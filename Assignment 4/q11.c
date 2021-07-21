//y={2x+300 for x<50, 200 for x=50 and 50x-100 for x>50}.
//INPUT CODE:
#include<stdio.h>
void main()
{
    int x, y;
    printf("Enter the the value of x to calculate the value of y");
    scanf("%d", &x);
    if(x<50)
    {
        y=2*x+300;
        printf("The value of y using the equation y=2x+300 is %d", y);
    }
    else if(x==50)
    {
        y=200;
        printf("The value of y is %d", y);
    }
    else
    {
        y=50*x-100;
        printf("The value of y using the equation y=50x-100 is %d", y);
    }
}

