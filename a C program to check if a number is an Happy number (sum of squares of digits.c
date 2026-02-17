#include <stdio.h>
int squareSum(int n) {
    int sum = 0, digit;
    while(n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);
    while(num != 1 && num != 4) {   
        num = squareSum(num);
    }
    if(num == 1)
        printf("Happy Number");
    else
        printf("Not a Happy Number");

    return 0;
}
