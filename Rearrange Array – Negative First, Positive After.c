#include <stdio.h>

int main() {
    int n, i, arr[100], temp, j;

    printf("How many elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {

            if(arr[i] > 0 && arr[j] < 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Rearranged array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
