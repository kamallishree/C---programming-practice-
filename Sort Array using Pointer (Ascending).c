#include<stdio.h>
int main(){
int a[]={5,2,8,1};
int *p=a,i,j,temp;

for(i=0;i<4;i++)
 for(j=i+1;j<4;j++)
  if(*(p+i)>*(p+j)){
   temp=*(p+i);
   *(p+i)=*(p+j);
   *(p+j)=temp;
  }

for(i=0;i<4;i++)
 printf("%d ",*(p+i));
}
