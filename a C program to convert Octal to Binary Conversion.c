#include <stdio.h>
int main() {
    int octal, decimal = 0, binary[32];
    int i = 0, place = 1, remainder;
    printf("Enter an octal number: ");
    scanf("%d", &octal);
    while (octal != 0) {
        remainder = octal % 10;
        decimal = decimal + remainder * place;
        place = place * 8;
        octal = octal / 10;
    }
    if (decimal == 0) {
        printf("Binary = 0");
        return 0;
    }
    while (decimal != 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary = ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    return 0;
}
