#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d is the larger number",a);
    }
    if (b>a)
    {
        printf("%d is the larger number",b);
    }
}
