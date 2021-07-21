//1.WAP to read a number from the user and test whether the number is negative.
//[ Show message “ THE NUMBER IS NEGATIVE” if it is a negative number
//otherwise show nothing. [if-statement]
#include<stdio.h>
void main()
{
	int a;
	printf("Type number:");
	scanf("%d", &a);
	if (a<0) {
		printf("THE NUMBER IS NEGATIVE");
	}
}
