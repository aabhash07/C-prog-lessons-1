#include <stdio.h>
void main()
{
    for (int i = 1; i <= 10; i ++)
    {
        for (int j = 5; j <= 10; j++)
        {
            printf("%d * %d = %d\t", j, i, j * i);
        }
        printf("\n");
    }
}
