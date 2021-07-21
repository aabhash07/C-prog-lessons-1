/*#include <stdio.h>
#include <math.h>
#define N 10
#define PI 3.141592654
void main()
{
    float rad, deg;
    printf("Enter angle(in degrees): ");
    scanf_s("%f", &deg);
    rad = PI / 180 * deg;
    unsigned long long factorial = 1;
    float cos = 1;
    for (int i = 1; i < N; i++)
    {
        factorial = factorial*(2 * i) * (2 * i - 1);
        if (i % 2 ==0)
        {
            cos=cos+ pow(rad, 2 * i) / factorial;
        }
        else
        {
            cos = cos- pow(rad, 2 * i) / factorial;
        }
    }
    printf("Cos(%.2f) = %.2f", deg, cos);
}*/
//29. Program to compute cosine series
//cos(x) = 1-x^2/2!+x^4/4!+x^6/6!+...+x^n/n!
#include<stdio.h>
#include<math.h>
#define n 20
#define pi 3.1428
void main()
{
    float x,sum,term,xdegree;
    int i;
    printf("Enter value of x in degree:");
    scanf("%f",&x);
    xdegree=x;
    x=x*pi/180;
    sum=1;
    term=1;
    for(i=1;i<=n;i++)
    {
        term=-1*term*x*x/(2*i*(2*i-1));
        sum=sum+term;
    }
    printf("The value of cos(%.2f)=%.2f",xdegree,sum);
}
