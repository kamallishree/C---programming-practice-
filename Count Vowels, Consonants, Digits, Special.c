#include<stdio.h>

int main(){
char s[100];
int v=0,c=0,d=0,sp=0,i;

gets(s);

for(i=0;s[i];i++){
 if(isalpha(s[i])){
  if(strchr("aeiouAEIOU",s[i]))
   v++;
  else
   c++;
 }
 else if(isdigit(s[i]))
  d++;
 else
  sp++;
}

printf("V=%d C=%d D=%d S=%d",v,c,d,sp);
}
