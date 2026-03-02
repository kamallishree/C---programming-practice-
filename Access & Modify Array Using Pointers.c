#include<stdio.h>

int main(){
int a[]={1,2,3,4,5};
int *p=a;
int i;

for(i=0;i<5;i++){
 *(p+i)+=10;
 printf("%d ",*(p+i));
}
}
