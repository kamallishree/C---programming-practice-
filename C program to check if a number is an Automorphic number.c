#include <stdio.h>
int main() {
    int num, square, temp, digits = 0, power = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    square = num * num;
    temp = num;
    while(temp > 0) {
        digits++;
        power *= 10;
        temp /= 10;
    }
    if(square % power == num)
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");
    return 0;
}
