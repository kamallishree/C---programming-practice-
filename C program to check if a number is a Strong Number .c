#include <stdio.h>
int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int num, temp, digit, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == num)
        printf("Strong Number");
    else
        printf("Not a Strong Number");
    return 0;
}
