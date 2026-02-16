#include <stdio.h>
int main() {
    int num, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        flag = 0;   // 0 and 1 are not prime
    } 
    else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("%d is a Prime Number", num);
    else
        printf("%d is NOT a Prime Number", num);
    return 0;
}
