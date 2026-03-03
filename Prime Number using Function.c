#include<stdio.h>

void checkPrime(int n){
    int i, flag=1;

    if(n <= 1)
        flag = 0;

    for(i=2; i<n; i++)
        if(n%i==0)
            flag = 0;

    if(flag)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}

int main(){
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    checkPrime(n);

    return 0;
}
