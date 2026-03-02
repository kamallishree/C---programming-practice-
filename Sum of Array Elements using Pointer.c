#include<stdio.h>
int main(){
int a[]={1,2,3,4,5};
int *p=a,sum=0,i;

for(i=0;i<5;i++)
 sum+=*(p+i);

printf("Sum=%d",sum);
}
