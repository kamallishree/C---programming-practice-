#include<stdio.h>
int main(){
int a[]={1,0,-1,0};
int n=4,sum=0,i,j,k,l;

for(i=0;i<n;i++)
 for(j=i+1;j<n;j++)
  for(k=j+1;k<n;k++)
   for(l=k+1;l<n;l++)
    if(a[i]+a[j]+a[k]+a[l]==sum)
     printf("%d %d %d %d\n",
     a[i],a[j],a[k],a[l]);
}
