#include<stdio.h>

void findMax(int a, int b, int *max){
    if(a>b)
        *max=a;
    else
        *max=b;
}

int main(){
    int x=10,y=20,max;

    findMax(x,y,&max);

    printf("Maximum = %d",max);
}
