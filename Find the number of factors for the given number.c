#include <stdio.h>
int main() {
    int num, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    printf("Number of factors = %d", count);
    return 0;
}
