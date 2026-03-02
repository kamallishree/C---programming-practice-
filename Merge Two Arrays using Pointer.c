#include<stdio.h>
int main(){
int a[]={1,2,3};
int b[]={4,5,6};
int c[6];
int *p=a,*q=b,i;

for(i=0;i<3;i++)
 c[i]=*(p+i);

for(i=0;i<3;i++)
 c[i+3]=*(q+i);

for(i=0;i<6;i++)
 printf("%d ",c[i]);
}
