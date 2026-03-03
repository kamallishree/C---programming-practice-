#include<stdio.h>

int isPalindrome(int n){
    int temp=n, rev=0;

    while(n>0){
        rev = rev*10 + n%10;
        n /= 10;
    }

    if(rev==temp)
        return 1;
    else
        return 0;
}

int main(){
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    if(isPalindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
