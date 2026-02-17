#include <stdio.h>
int main() {
    int num, temp, digit, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    if(num % sum == 0)
        printf("Harshad Number");
    else
        printf("Not a Harshad Number");
    return 0;
}
