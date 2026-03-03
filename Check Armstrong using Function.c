#include<stdio.h>

int isArmstrong(int n){
    int temp=n, sum=0, r;

    while(n>0){
        r = n%10;
        sum += r*r*r;
        n /= 10;
    }

    if(sum==temp)
        return 1;
    else
        return 0;
}

int main(){
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    if(isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong");
}
