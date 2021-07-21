//WAP to check if a no is armstrong or not for any no of digits using recursion
int arm(int);
void main()
{
    int n,n1;
    printf("enter no: ");
    scanf("%d",&n);
    int a=arm(n);
    if(a==n)
    {
        printf("\n%d is an armstrong number",n);
    }
    else
    {
        printf("\n%d is not an armstrong number",n);
    }

}
int arm(int x)
{
    int x1=x;
    static int rem=0,rev=0;
    static int digits=0;
    static int arm_value=0;
    if (x1 > 0)
    {
        x1 = x1/ 10;
        digits=digits+1;
    }
    else
    {
        return arm_value;
    }
    for (int i = 0; i < digits; i++)
    {
        rem = x1 % 10;
        arm_value= pow(rem, digits)+arm_value;
        arm(x1/10);
        x1= x;
    }

}
