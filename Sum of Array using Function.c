#include<stdio.h>

int sumArray(int a[],int n){
    int i,sum=0;

    for(i=0;i<n;i++)
        sum+=a[i];

    return sum;
}

int main(){
    int a[]={1,2,3,4};

    printf("Sum=%d",sumArray(a,4));
}
