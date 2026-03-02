#include<stdio.h>
#include<string.h>

int main(){
char *names[]={"Ravi","Anu","Kiran","Bala"};
int i,j;
char *temp;

for(i=0;i<4;i++)
 for(j=i+1;j<4;j++)
  if(strcmp(names[i],names[j])>0){
   temp=names[i];
   names[i]=names[j];
   names[j]=temp;
  }

for(i=0;i<4;i++)
 printf("%s\n",names[i]);
}
