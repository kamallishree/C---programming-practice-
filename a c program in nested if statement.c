#include <stdio.h>
int main()
{
    int m;
    printf("Enter your marks: ");
    scanf("%d", &m);
    if (m>=50) 
    {
       if(m>85 && m<=100)
       {
          printf("congrats!! Distinction\n");
       } 
       printf("passed");
    } 
    else
    {
        printf("Failed");
    }
    return 0;
}
