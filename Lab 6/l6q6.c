//WAP to define three user defined function for reading ,
//processing and displaying of 2*3 matrices .
//Double the matrix element and display it.
#define m 2
#define n 3
void read(int nu[][n]);
void process(int nu[][n]);
void display(int nu[][n]);
void main()
{
    int num[m][n];
    //printf("enter matrix of order %d %d",m,n);
    read(num);
    printf("\ninitial matrix is\n");
    display(num);
    process(num);
    printf("\nfinal matrix is\n");
    display(num);
}
void read(int nu[][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element [%d %d]: ",i+1,j+1);
            scanf("%d",&nu[i][j]);
        }
    }
}
void process(int nu[][n])
{
    int store,j;
    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n; j++)
        {
            nu[i][j]= 2*(nu[i][j]);
        }
    }
}
void display(int nu[][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("\t%d",nu[i][j]);
        }
        printf("\n");
    }
}

