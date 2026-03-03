#include<stdio.h>

void increment(int *n){
    (*n)++;
}

int main(){
    int x=5;

    increment(&x);

    printf("After increment = %d", x);
}
