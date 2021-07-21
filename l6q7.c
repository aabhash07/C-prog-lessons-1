//WAP to read the order of a square matrix and its elements from the keyboard. Find the sum of diagonal elements of the matrix.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int arr[10][10];
    int arr1[10][10];
    int s=0;
    int i,j,m,n;
    printf("Type the order matrix:");
    scanf("%d",&i);
    j=i;
    for(m=0; m<i; m++)
    {
        for(n=0; n<j; n++)
        {
            printf("Type element A(%d%d)",m,n);
            scanf("%d",&arr[m][n]);
        }
    }

    for(m=0; m<i; m++)
    {
        for(n=0; n<j; n++)
        {
            if(m==n)
            {
                s=s+arr[m][n];
            }
        }
    }
    printf("Sum of diagonal elements: %d",s);
}
