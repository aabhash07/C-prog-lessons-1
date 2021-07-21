#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Type three numbers:");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a<c || a>c && a < b) {
		printf("%d", a);
	}
	else if (b > a && b<c || b>c && b < a) {
		printf("%d", b);
	}
	else if (c > a && c<b || c>b && c < a) {
		printf("%d", c);
	}
	else
	{
		printf("neither is middle");
	}
}
