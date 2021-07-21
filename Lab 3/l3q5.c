#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float r1,r2,disc;
    printf("Enter coeff of x^2,x and const\n");
    scanf("%d%d%d",&a,&b,&c);
    disc=pow(b,2)-4*a*c;
    //printf("%f",disc);
    if(disc==0)
    {
        r1=(-b)/2*a;
        printf("\nthe root is %.2f",r1);
    }
    else if (disc>0)
    {
        r1=(-b+sqrt(disc))/2*a;
        r2=(-b-sqrt(disc))/2*a;
        printf("\nThe roots are %.2f and %.2f",r1,r2);
    }
    else
    {
        r1=(sqrt(-pow(b,2)+4*a*c))/2*a;
        float Real=-b/2*a;
        printf("\nThe roots are %.2f+%.2fi and %.2f-%.2fi\n",Real,r1,Real,r1);
    }


}











