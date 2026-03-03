#include<stdio.h>

void evenFibSum(int n){
    int a=0, b=1, c, sum=0;

    while(a <= n){
        if(a % 2 == 0)
            sum += a;

        c = a + b;
        a = b;
        b = c;
    }

    printf("Even Fibonacci Sum = %d", sum);
}

int main(){
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    evenFibSum(n);

    return 0;
}
