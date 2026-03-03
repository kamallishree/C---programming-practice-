#include<stdio.h>

int factorial(int n){
    int i,f=1;
    for(i=1;i<=n;i++)
        f*=i;
    return f;
}

int isStrong(int n){
    int temp=n,sum=0;

    while(n>0){
        sum+=factorial(n%10);
        n/=10;
    }

    return (sum==temp);
}

int main(){
    int n;
    scanf("%d",&n);

    if(isStrong(n))
        printf("Strong Number");
    else
        printf("Not Strong");
}
