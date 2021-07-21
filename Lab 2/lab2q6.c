#include<stdio.h>
void main()
{
    int maths,sci,eng,social,hpe,nep,comp;
    float s,pc;
    printf("Enter marks of maths,sci,eng,social,hpe,nep and comp\n");
    scanf("%d%d%d%d%d%d%d",&maths,&sci,&eng,&social,&hpe,&nep,&comp);
    pc=(maths+sci+eng+social+hpe+nep+comp)/7;
    printf("You have obtained %f percent",pc);
}
