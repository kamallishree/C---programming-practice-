#include<stdio.h>
int main(){
int a[]={1,2,3};
int b[]={2,3,4};
int i,j;

for(i=0;i<3;i++)
 for(j=0;j<3;j++)
  if(a[i]==b[j])
   printf("%d ",a[i]);
}
