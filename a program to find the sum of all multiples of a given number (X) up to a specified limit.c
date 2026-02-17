#include <stdio.h>
int main() {
    int x, limit, i, sum = 0;
    printf("Enter X and Limit: ");
    scanf("%d %d", &x, &limit);
    for(i = x; i <= limit; i += x) {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
