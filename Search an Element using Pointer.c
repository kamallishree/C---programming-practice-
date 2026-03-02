#include<stdio.h>
int main(){
int a[]={10,20,30};
int *p=a,key=20,i;

for(i=0;i<3;i++)
 if(*(p+i)==key)
  printf("Found at %d",i+1);
}
