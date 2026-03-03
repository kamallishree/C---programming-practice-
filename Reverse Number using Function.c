#include<stdio.h>

int reverseNum(int n){
    int rev=0;

    while(n>0){
        rev = rev*10 + n%10;
        n /= 10;
    }

    return rev;
}

int main(){
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("Reversed = %d", reverseNum(n));
}
