#include<stdio.h>
#include<string.h>

int main(){
char str[]="hello";
char *start=str;
char *end=str+strlen(str)-1;
char temp;

while(start<end){
 temp=*start;
 *start=*end;
 *end=temp;

 start++;
 end--;
}

printf("%s",str);
}
