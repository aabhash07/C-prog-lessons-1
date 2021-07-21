#include<stdio.h>
#include<math.h>
#define PI 3.1415
void main()
{
    int r1,r2,a;
    printf("Enter two radii\n");
    scanf("%d%d",&r1,&r2);
    if(r1>r2)
    {
        a=PI*(((r1)^2)-((r2)^2));
    }
    if(r2>r1)
    {
        a=PI*(((r2)^2)-((r1)^2));
    }
    printf("The area between the circles is %d",a);
}
