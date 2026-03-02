#include<stdio.h>
int main(){
int a[]={1,2,3,4};
int sum=6,i,j,k;

for(i=0;i<4;i++)
 for(j=i+1;j<4;j++)
  for(k=j+1;k<4;k++)
   if(a[i]+a[j]+a[k]==sum)
    printf("%d %d %d\n",
    a[i],a[j],a[k]);
}
