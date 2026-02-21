#include <stdio.h>
int main() {
    int n, arr[100], i, j, k, l, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Quadruplets:\n");

    for(i = 0; i < n - 3; i++) {
        for(j = i + 1; j < n - 2; j++) {
            for(k = j + 1; k < n - 1; k++) {
                for(l = k + 1; l < n; l++) {
                    if(arr[i] + arr[j] + arr[k] + arr[l] == target)
                        printf("%d %d %d %d\n",
                               arr[i], arr[j], arr[k], arr[l]);
                }
            }
        }
    }

    return 0;
}
