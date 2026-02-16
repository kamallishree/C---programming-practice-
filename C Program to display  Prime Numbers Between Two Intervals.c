#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        if (i <= 1)
            continue;   // skip 0 and 1
        isPrime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    return 0;
}
