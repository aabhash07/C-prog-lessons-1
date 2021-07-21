//Write a function to evaluate y=x^n where y and x are floating point numbers to be raised to an integer power using recursion.
#include<stdio.h>
float result(float,int);
void main()
{
    float x,y;
    int n;
    printf("enter base and power: ");
    scanf("%f %d",&x,&n);
    y=result(x,n);
    printf("\n%.2f^%d = %.4f",x,n,y);
}
float result(float a,int z)
{
    if(z==0)
    {
        return 1;
    }
    else
    {
        return(a*result(a,z-1));
    }
}

