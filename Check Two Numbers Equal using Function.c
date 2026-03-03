#include<stdio.h>

void checkEqual(int a, int b){
    if(a == b)
        printf("Numbers are Equal");
    else
        printf("Numbers are Not Equal");
}

int main(){
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    checkEqual(x, y);

    return 0;
}
