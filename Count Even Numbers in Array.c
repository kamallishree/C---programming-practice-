#include<stdio.h>

int countEven(int a[],int n){
    int i,count=0;

    for(i=0;i<n;i++)
        if(a[i]%2==0)
            count++;

    return count;
}

int main(){
    int a[]={1,2,3,4,6};

    printf("Even Count=%d",countEven(a,5));
}
