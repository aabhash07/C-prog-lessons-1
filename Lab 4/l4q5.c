#include<stdio.h>
void main()
{
    int n, rev = 0, remainder,n1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    n1=n;
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n/10;
    }
    printf("Reversed number = %d", rev);
    if(rev==n1)
    {
        printf("\n%d is a PALINDROME",n1);
    }
}
