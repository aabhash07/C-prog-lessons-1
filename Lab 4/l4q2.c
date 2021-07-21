#include <stdio.h>
//HCF and LCM
void main()
{
    int a,b,c,i,lcm,hcf;
    printf("Type first number:");
    scanf("%d",&a);
    printf("Type second number:");
    scanf("%d",&b);
    for(i = 1; i <= a || i <= b; i++)
    {
        if( a%i == 0 && b%i == 0 )
        {
            hcf = i;
        }
    }
    printf("The HCF of %d and %d is %d",a,b,hcf);
    if(a>b && a%b==0)
    {
        lcm=a;
    }
    else if(b>a && b%a==0)
    {
        lcm=b;
    }
    if(a%b!=0)
    {
        lcm=(a*b)/(hcf);
    }
    printf("\nThe LCM of %d and %d is %d",a,b,lcm);
}
