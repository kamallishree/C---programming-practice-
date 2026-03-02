#include<stdio.h>

int main(){
int a[]={5,2,9,1,7};
int *p=a;
int max=*p,min=*p,i;

for(i=1;i<5;i++){
 if(*(p+i)>max)
  max=*(p+i);

 if(*(p+i)<min)
  min=*(p+i);
}

printf("Max=%d Min=%d",max,min);
}
