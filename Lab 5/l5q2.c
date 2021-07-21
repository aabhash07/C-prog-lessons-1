#include<stdio.h>
void swap(int,int);
void main()
{
    int x,y;
    printf("Enter numbers\n");
    scanf("%d%d",&x,&y);
    printf("before swapping;x=%d,y=%d\n",x,y);
    swap(x,y);
}
void swap(int p, int q)
{
    int temp=p;
    p=q;
    q=temp;
    printf("after swapping;x=%d,y=%d",p,q);
}
