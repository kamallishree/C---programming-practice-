#include <stdio.h>
int main() {
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;       
        if (digit % 2 == 0)     
            sum = sum + digit;
        num = num / 10;       
    }
    printf("Sum of even digits = %d", sum);
    return 0;
}
