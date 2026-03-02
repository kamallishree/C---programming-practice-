#include<stdio.h>
#include<stdlib.h>

int main(){

int **a;
int r=2,c=3,i,j;

/* Row allocation */
a=(int**)malloc(r*sizeof(int*));

/* Column allocation */
for(i=0;i<r;i++)
 a[i]=(int*)malloc(c*sizeof(int));

printf("Enter elements:\n");

for(i=0;i<r;i++)
 for(j=0;j<c;j++)
  scanf("%d",&a[i][j]);

printf("Matrix:\n");

for(i=0;i<r;i++){
 for(j=0;j<c;j++)
  printf("%d ",a[i][j]);
 printf("\n");
}

}
