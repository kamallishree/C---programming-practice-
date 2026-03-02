#include<stdio.h>
int main(){
int a[]={1,2,3,4};
int b[4];
int *p=a,*q=b,i;

for(i=0;i<4;i++)
 *(q+i)=*(p+i);

for(i=0;i<4;i++)
 printf("%d ",b[i]);
}
