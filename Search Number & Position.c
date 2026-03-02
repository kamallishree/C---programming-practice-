#include<stdio.h>
int main(){
int a[]={10,20,30};
int key=20,i;

for(i=0;i<3;i++)
 if(a[i]==key)
  printf("Position=%d",i+1);
}
