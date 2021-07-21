//WAP to read marks of n students and print out top five .
#include <stdio.h>
void main()
{
    int num[50];
    int n,i,j,k,store,f,b;
    printf("Enter no of students:");
    scanf("%d",&n);
    b=n;
    for(k=0; k!=n; k++)
    {
        printf("Marks:");
        scanf("%d",&num[k]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(num[i]<num[j])
            {
             store=num[j];
             num[j]=num[i];
             num[i]=store;
            }
        }

    }
    printf("The top 5 are:");
    for(f=0; f<5; f++)
    {
        printf("\nRank:%d Marks:%d",f+1,num[f]);
    }
}
