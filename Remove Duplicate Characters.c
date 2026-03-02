#include<stdio.h>

int main(){
char s[]="program";
int i,j;

for(i=0;s[i];i++)
 for(j=i+1;s[j];j++)
  if(s[i]==s[j])
   s[j]='*';

for(i=0;s[i];i++)
 if(s[i]!='*')
  printf("%c",s[i]);
}
