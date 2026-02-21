#include <stdio.h>

int main() {
    int n, i, arr[100], key;

    printf("How many elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Number found at position %d", i + 1);
            return 0;
        }
    }

    printf("Number not found");

    return 0;
}
