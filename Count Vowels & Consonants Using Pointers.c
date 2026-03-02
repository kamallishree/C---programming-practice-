#include<stdio.h>

int main(){
char str[]="education";
char *p=str;
int v=0,c=0;

while(*p){
 if(*p=='a'||*p=='e'||*p=='i'||
    *p=='o'||*p=='u')
  v++;
 else
  c++;
 p++;
}

printf("Vowels=%d Consonants=%d",v,c);
}
