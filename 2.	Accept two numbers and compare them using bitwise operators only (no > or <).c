#include <stdio.h>
int main() {
    int a, b, diff;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    diff = a - b;
    if ((diff >> 31) & 1)
        printf("a is smaller than b");
    else if (diff == 0)
        printf("a is equal to b");
    else
        printf("a is greater than b");
    return 0;
}
