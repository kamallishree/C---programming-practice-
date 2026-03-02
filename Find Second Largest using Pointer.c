#include<stdio.h>
int main(){
int a[]={5,9,2,8};
int *p=a,max=*p,sec=-1,i;

for(i=1;i<4;i++){
 if(*(p+i)>max){
  sec=max;
  max=*(p+i);
 }
 else if(*(p+i)>sec && *(p+i)!=max)
  sec=*(p+i);
}

printf("Second Largest=%d",sec);
}
