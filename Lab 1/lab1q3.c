#include<stdio.h>
//#include<conio.h>
//#include<math.h>
void main()
{
    int a,b,c;
    printf("Enter two nums:\n");
    scanf("%d%d",&a,&b);
    printf("stored as a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nnow stored as a=%d and b=%d",a,b);
}

