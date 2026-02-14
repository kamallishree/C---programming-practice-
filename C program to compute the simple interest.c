#include <stdio.h>
int main() 
{
    float p,r,t,si;
    printf("Enter the values of p,r,t: \n");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("Simple interest= %.2f",si);
    return 0;
}
