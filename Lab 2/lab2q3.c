#include<stdio.h>
void main()
{
    int i;
    float f;
    double d;
    char c;
    int in,fl,dou,ch;
    in=sizeof(i);
    fl=sizeof(f);
    dou=sizeof(d);
    ch=sizeof(c);
    printf("the byte space for int float double and character are");
    printf("\n%d %d %d %d",in,fl,dou,ch);
}
