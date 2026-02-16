#include <stdio.h>
int main()
{
    int i,n,mul=1;
    printf("enter an number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        mul=i*n;
        printf("%d x %d = %d \n",i,n,mul);
    }
    return 0;
}
