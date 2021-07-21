#include<stdio.h>
//#include<conio.h>
#include<math.h>
void main()
{
    int s,a,b,c,area;
    printf("Enter the three sides:\n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    //if(a+b>c&&b+c>a&&)
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle is:%d", area);
}
