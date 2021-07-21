#include <stdio.h>
#include <stdlib.h>
void main()
{
    int op1,op2,sum,diff,mul,div;
    char opr;
    printf("Type any two Operands:\n");
    scanf("%d  %d",&op1,&op2);
    printf("Type Operator:\n");
    scanf(" %c",&opr);
    switch(opr)
    {
        case '+':
            sum=op1+op2;
            printf("result=%d",sum);
        break;
        case '-':
            diff=op1-op2;
            printf("result=%d",diff);
        break;
        case '/':
            div=op1*1/op2;
            printf("result=%.2f",div);
        break;
        case '*':
            mul=op1*op2;
            printf("result=%d",mul);
        break;
        default:
            printf("Invalid operand");
    }
}
