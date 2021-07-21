//38. WAP to input a 5-digit number and display its digits in words.
#include<stdio.h>
void main()
{
    int n,reverse=0,digit1,digit2;
    printf("Enter 5 digit decimal:\n");
    scanf("%d",&n);
    for(;n>0;)
    {
        digit1 =n%10;
        n=n/10;
        reverse=reverse*10+digit1;
    }
    for(;reverse>0;)
    {
        digit2 = reverse%10;
        reverse=reverse/10;
        switch(digit2)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
    }
}
