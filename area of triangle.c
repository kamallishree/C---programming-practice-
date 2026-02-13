#include <stdio.h>
int main()
{
    int b,h,area=0;
    printf("enter breadth and height of a triangle\n");
    scanf("%d%d",&b,&h);
    area=0.5*b*h;
    printf("area of triangle:%d",area);
    return 0;
}
