#include<stdio.h>
int main(){
int a[]={1,2,2,3,1};
int i,j,count,n=5;

for(i=0;i<n;i++){
 count=1;
 if(a[i]==-1) continue;

 for(j=i+1;j<n;j++)
  if(a[i]==a[j]){
   count++;
   a[j]=-1;
  }

 printf("%d=%d\n",a[i],count);
}
}
