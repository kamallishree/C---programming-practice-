#include<stdio.h>

int main(){

    int a[100], n, pos, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = a;

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        *(p + i) = *(p + i + 1);

    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", *(p + i));

    return 0;
}
