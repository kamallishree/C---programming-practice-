#include<stdio.h>

int main(){
char s[]="apple";
int i,j,count;

for(i=0;s[i];i++){
 count=1;

 if(s[i]=='*') continue;

 for(j=i+1;s[j];j++)
  if(s[i]==s[j]){
   count++;
   s[j]='*';
  }

 printf("%c=%d\n",s[i],count);
}
}
