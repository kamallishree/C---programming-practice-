#include<stdio.h>

int main(){
char a[]="cat";
char b[]="cat";

char *p=a,*q=b;

while(*p && *q){
 if(*p!=*q){
  printf("Not Equal");
  return 0;
 }
 p++; q++;
}

printf("Equal");
}
