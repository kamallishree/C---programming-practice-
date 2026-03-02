#include<stdio.h>

int main(){
int n=153,temp=n,r,sum=0;

while(n>0){
 r=n%10;
 sum+=r*r*r;
 n/=10;
}

if(sum==temp)
 printf("Armstrong");
else
 printf("Not Armstrong");
}
