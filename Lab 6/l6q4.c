//WAP to read n numbers from the keyboard and store them in an array. Add even numbers and odd numbers separately and display the result.
#include <stdio.h>
void main()
{
    int num[50];
    int n,i,k,esum=0,osum=0,f,b;
    printf("Enter no of numbers in array:");
    scanf("%d",&n);
    b=n;
    for(k=0; k!=n; k++)
    {
        printf("Number:");
        scanf("%d",&num[k]);
    }
    for(i=0; i<n; i++)
    {
        if(((num[i])% 2)!=0)
        {
            osum=osum+num[i];
        }

        if(((num[i])% 2)==0)
        {
            esum=esum+num[i];
        }

    }
    printf("The sum of even numbers is :%d",esum);
    printf("\nThe sum of odd numbers is :%d",osum);
}
