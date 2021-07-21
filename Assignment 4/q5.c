#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g;
    float pc;
    printf("Enter marks of maths,sci,eng,social,hpe,nep and comp\n");
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    pc=(a+b+c+d+e+f+g)/7;
    if (pc>=80)
    {
		printf("Distinction");
	}
	else if (pc>=60 && pc<=79)
	{
		printf("First division");
	}
	else if (pc>=45 && pc<=59)
	{
		printf("Second division");
	}
	else if (pc>=32 && pc<=44)
	{
		printf("Third division");
	}
	else
	{
		printf("fail");
	}
}
