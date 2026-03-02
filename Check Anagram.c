#include<stdio.h>
#include<string.h>

int main(){
char a[]="listen";
char b[]="silent";

int count[26]={0},i;

for(i=0;a[i];i++)
 count[a[i]-'a']++;

for(i=0;b[i];i++)
 count[b[i]-'a']--;

for(i=0;i<26;i++)
 if(count[i]!=0){
  printf("Not Anagram");
  return 0;
 }

printf("Anagram");
}
