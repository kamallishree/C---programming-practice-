#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 50 || num > 500)
        printf("Number is outside the range");
    else
        printf("Number is within the range");
    return 0;
}
