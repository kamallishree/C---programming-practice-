#include<stdio.h>

int findMax(int a, int b, int c){
    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
}

int main(){
    int x,y,z;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&x,&y,&z);

    printf("Largest = %d", findMax(x,y,z));
}
