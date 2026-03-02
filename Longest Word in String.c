#include<stdio.h>
#include<string.h>

int main(){
char s[100];
int i,len=0,max=0;

gets(s);

for(i=0;s[i];i++){
 if(s[i]!=' ')
  len++;
 else{
  if(len>max) max=len;
  len=0;
 }
}

if(len>max) max=len;

printf("Longest length=%d",max);
}
