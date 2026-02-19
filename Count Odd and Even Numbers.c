#include <stdio.h>

int main() {
    int n, i, arr[100];
    int even = 0, odd = 0;

    printf("How many elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even count = %d\n", even);
    printf("Odd count = %d", odd);

    return 0;
}
