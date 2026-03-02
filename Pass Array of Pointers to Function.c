#include<stdio.h>

void display(int *p[],int n){
 for(int i=0;i<n;i++)
  printf("%d ",*p[i]);
}

int main(){
int a=10,b=20,c=30;
int *arr[]={&a,&b,&c};

display(arr,3);
}
