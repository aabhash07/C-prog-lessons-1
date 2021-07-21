#include<stdio.h>
void main()
{
    char c;
    printf("Enter a alphabet\n");
    scanf("%c",&c);
    if (c>=65 && c<=90)
    {
        printf("THE INPUT IS UPPERCASE\n");
        c=c+32;
        printf("the eq lowercase is %c",c);
    }
    else if (c>=97 && c<=122)
    {
        printf("the input is lowercase\n");
        c=c-32;
        printf("THE EQ UPPERCASE IS %c",c);
    }
    else
    {
        printf("Invalid input");
    }
}
