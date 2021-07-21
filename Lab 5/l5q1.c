#include<stdio.h>
int greater(int,int);
void main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    int p=greater(a,b);
    int q=greater(p,c);
    printf("%d is the greatest",q);
}
int greater(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
