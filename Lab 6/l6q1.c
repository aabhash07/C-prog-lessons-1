//WAP to read the order of two matrices from the user .
//Read elements of the matrices using function and then find product of matrices .
//Finally , display the resultant matrix using another function.
#include <stdio.h>
int read(int num1[10][10],int, int, int );
int multiply(int num1[10][10], int num2[10][10],int, int, int, int);
int display(int num1[10][10],int num2[10][10],int mul[10][10],int, int, int, int);
int i,j;
void main()
{
    int A[10][10],B[10][10],mul[10][10],a,b,i1,j1,c=0,i2,j2;
    printf("Type the order of first matrix:");
    scanf("%d %d",&i1,&j1);
    printf("Type the order of second matrix:");
    scanf("%d %d",&i2,&j2);
    if(j1!=i2)
    {
        printf("Invalid Order for Multiplication.");
    }
    else
    {
        read(A,i1,j1,c);
        c=c+1;
        read(B,i2,j2,c);
        multiply(A,B,i1,j1,i2,j2);
    }
}

int read(int num1[10][10],int m,int n,int c)
{
    if(c==0)
    {
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("Type Element A[%d %d]:",i+1,j+1);
                scanf("%d",&num1[i][j]);
            }
        }
    }
    else
    {
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Type Element B[%d %d]:",i+1,j+1);
            scanf("%d",&num1[i][j]);
        }
    }
    }
}

int multiply(int num1[10][10],int num2[10][10],int i1,int i2, int j1,int j2)
{
   int i,j,k,sum=0,mul[10][10] ;
   for(i=0; i<i1; i++)
   {
       for(j=0; j<j2; j++)
       {
            int sum = 0;
            for(int k=0; k<j1; k++)
            {
                sum = sum + num1[i][k]*num2[k][j];
            }
            mul[i][j]=sum;
       }
   }
   display(num1,num2,mul,i1,j1,i2,j2);
}
int display(int num1[10][10],int num2[10][10],int mul[10][10],int i1, int j1, int i2, int j2)
{
    printf("Matrix A:\n");
    for(i=0; i<i1; i++)
    {
        for(j=0; j<j1; j++)
        {
            printf("%d\t",num1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0; i<i2; i++)
    {
        for(j=0; j<j2; j++)
        {
            printf("%d\t",num2[i][j]);
        }
        printf("\n");
    }
    printf("Matrix AxB:\n");
    for (int i=0; i<i1; i++)
    {
        for(int j=0; j<j2; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}
