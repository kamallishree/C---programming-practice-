#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("Greatest = %d\n", a);
        printf("Smallest = %d", b);
    } 
    else if (b > a) {
        printf("Greatest = %d\n", b);
        printf("Smallest = %d", a);
    } 
    else {
        printf("Both numbers are equal: %d", a);
    }
    return 0;
}
