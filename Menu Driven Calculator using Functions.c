#include<stdio.h>

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }

int main(){
    int ch,a,b;

    printf("1.Add 2.Sub 3.Mul\n");
    scanf("%d",&ch);

    scanf("%d %d",&a,&b);

    switch(ch){
        case 1: printf("%d",add(a,b)); break;
        case 2: printf("%d",sub(a,b)); break;
        case 3: printf("%d",mul(a,b)); break;
    }
}
