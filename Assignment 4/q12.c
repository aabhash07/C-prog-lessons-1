#include<stdio.h>

int main()
{
    int num, i, fact, temp;
    printf("Enter a number to calculate factorial :\n");
    scanf("%d", &num);
    i=0;
    temp=num;
    fact=num;
    while(num>1)
    {
        num=num-1;
        fact=fact*num;
        i++;
    }
    printf("%d! is %d", temp, fact);
}


