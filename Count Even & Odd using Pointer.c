#include<stdio.h>
int main(){
int a[]={1,2,3,4,5};
int *p=a,i,e=0,o=0;

for(i=0;i<5;i++){
 if(*(p+i)%2==0) e++;
 else o++;
}

printf("Even=%d Odd=%d",e,o);
}
