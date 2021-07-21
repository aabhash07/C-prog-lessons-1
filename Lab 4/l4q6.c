#include<stdio.h>
#include<math.h>
void main()
{
    int from, to;
    printf("Enter the range to find armstrong number:\n ");
    scanf("%d%d", &from, &to);
    if (from > to || from < 0 || to < 0)
    {
        printf("Not a valid range");
    }
    else
    {
        for (int i = from; i <= to; i++)
        {
            int number = i, temp_num = number, digits = 0;
            while (temp_num > 0)
            {
                temp_num = (int)temp_num / 10;
                digits=digits+1;
            }
            temp_num = number;
            int arm_value = 0;
            for (int i = 0; i < digits; i++)
            {
                int remainder = temp_num % 10;
                arm_value= pow(remainder, digits)+arm_value;
                temp_num = (int)temp_num / 10;
            }
            if (arm_value == number)
            {
                printf("%d ",i);
            }
        }
    }
}
