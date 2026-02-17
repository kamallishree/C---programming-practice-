#include <stdio.h>
int main() {
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            printf("%d is divisible by 2 =Square = %d\n", i, i*i);

        if (i % 3 == 0)
            printf("%d is divisible by 3 = Cube = %d\n", i, i*i*i);

        if (i % 5 == 0)
            printf("%d is divisible by 5 =5 times = %d\n", i, i*5);
    }
    return 0;
}
