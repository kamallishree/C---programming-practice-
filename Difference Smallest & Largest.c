#include<stdio.h>
int main(){
int a[]={5,2,9,1};
int max=a[0],min=a[0],i;

for(i=1;i<4;i++){
 if(a[i]>max) max=a[i];
 if(a[i]<min) min=a[i];
}

printf("Difference=%d",max-min);
}
