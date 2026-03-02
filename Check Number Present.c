#include<stdio.h>
int main(){
int a[]={3,6,9};
int key=6,i,flag=0;

for(i=0;i<3;i++)
 if(a[i]==key)
  flag=1;

if(flag) printf("Present");
else printf("Not Present");
}
