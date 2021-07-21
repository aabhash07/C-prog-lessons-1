#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    float r1,r2,disc;
    printf("Enter coeff of x^2,x and const\n");
    scanf("%f%f%f",&a,&b,&c);
    disc=pow(b,2)-(4*a*c);
    //printf("%f",disc);
    if(disc==0)
    {
        r1=(-b)/2*a;
        printf("\nthe root is %f",r1);
    }
    if (disc>0)
    {
        r1=(-b+sqrt(disc))/2*a;
        r2=(-b-sqrt(disc))/2*a;
        printf("\nThe roots are %f and %f",r1,r2);
    }

}










/*if((pow(b,2)-4*a*c)<0)
    {
        double complex x=(-b+(csqrt(pow(b,2)-4*a*c)));
        double complex y=(-b-(csqrt(pow(b,2)-4*a*c)));
        double pRealx= creal(x);
        double pimagx= cimag(x);
        double pRealy= creal(y);
        double pimagy= cimag(y);
        printf("\nThe roots are %lf+%lfi and %lf%lfi\n",pRealx/(2*a),pimagx/(2*a),pRealy/(2*a),pimagy/(2*a));
    }*/
