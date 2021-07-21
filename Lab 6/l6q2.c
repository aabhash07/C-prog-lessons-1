//WAP to search an element in an array and display the index of it.
#include <stdio.h>
void main()
{
    int num[50];
    int n,i,k,b,s,c=0;
    printf("Enter no of numbers in array:");
    scanf("%d",&n);
    printf("Enter element to search for in array:");
    scanf("%d",&s);
    b=n;
    for(k=0; k!=n; k++)
    {
        printf("Number:");
        scanf("%d",&num[k]);
    }
    for(i=0; i<n; i++)
    {
        if(num[i]==s)
        {
            printf("Found the element\n");
            printf("Index is:%d",i);
            c=c+1;
        }
    }
    if(c<1)
    {
        printf("%d is not in array",s);
    }
}

