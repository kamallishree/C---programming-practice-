#include <stdio.h>
int main() {
    int dividend, divisor;
    float q, r;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    q = dividend / divisor;
    r = dividend % divisor;
    printf("Quotient = %f\n", q);
    printf("Remainder = %f", r);
    return 0;
}
