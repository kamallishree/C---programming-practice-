#include<stdio.h>

void bill(int price,int qty){
 printf("Total = %d",price*qty);
}

int main(){
int ch,qty;

printf("1.Rice 2.Sugar 3.Oil\n");
scanf("%d",&ch);

printf("Enter quantity: ");
scanf("%d",&qty);

switch(ch){
 case 1: bill(50,qty); break;
 case 2: bill(40,qty); break;
 case 3: bill(120,qty); break;
 default: printf("Invalid");
}
}
