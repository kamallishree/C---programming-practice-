#include <stdio.h>

int main() {
    int i, j, k, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        // Increasing numbers
        for(j = 1; j <= i; j++)
            printf("%d", j);

        // Decreasing numbers
        for(k = i - 1; k >= 1; k--)
            printf("%d", k);

        printf("\n");
    }

    return 0;
}
