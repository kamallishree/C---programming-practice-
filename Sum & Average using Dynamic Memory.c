#include<stdio.h>
#include<stdlib.h>

int main(){

int *p,n,i,sum=0;

printf("Enter n: ");
scanf("%d",&n);

p=(int*)malloc(n*sizeof(int));

printf("Enter numbers:\n");

for(i=0;i<n;i++){
 scanf("%d",&p[i]);
 sum+=p[i];
}

printf("Sum=%d\n",sum);
printf("Average=%.2f",(float)sum/n);

free(p);
}
