#include<stdio.h>
int main(){
int a[]={1,2,3,4};
int *p=a,i;

for(i=3;i>=0;i--)
 printf("%d ",*(p+i));
}
