#include<stdio.h>
int main(){
int a[]={1,2,3,4};
int e=0,o=0,i;

for(i=0;i<4;i++)
 if(a[i]%2==0) e++;
 else o++;

printf("Even=%d Odd=%d",e,o);
}
