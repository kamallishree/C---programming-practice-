#include<stdio.h>
int main(){
int a[]={2,4,6,8};
int *p=a,sum=0,i;

for(i=0;i<4;i++)
 sum+=*(p+i);

printf("Average=%d",sum/4);
}
