#include <stdio.h>
int main() {
    int m, n, k, i;
    printf("Enter M N and K: ");
    scanf("%d %d %d", &m, &n, &k);
    for(i = m; i <= n; i += (k + 1)) {
        printf("%d ", i);
    }
    return 0;
}
