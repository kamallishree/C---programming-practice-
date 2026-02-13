#include <stdio.h>
int main()
{
    int l,h,b, area=0;
    printf("enter l,h,b of rectangle\n");
    scanf("%d%d%d",&l,&h,&b);
    area=l*h*b;
    printf("area of rectangle:%d",area);
    return 0;
}
