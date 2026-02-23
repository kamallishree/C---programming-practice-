#include <stdio.h>

int main() {
    int i, j, k, n;

    printf("Enter size: ");
    scanf("%d", &n);

    // Upper half
    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("%d", j);

        for(k = i - 1; k >= 1; k--)
            printf("%d", k);

        printf("\n");
    }

    // Lower half
    for(i = n - 1; i >= 1; i--) {

        for(j = 1; j <= n - i; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("%d", j);

        for(k = i - 1; k >= 1; k--)
            printf("%d", k);

        printf("\n");
    }

    return 0;
}
