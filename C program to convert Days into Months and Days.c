#include <stdio.h>
int main() {
    int totalDays, months, days;
    printf("Enter total number of days: ");
    scanf("%d", &totalDays);
    months = totalDays / 30;   
    days = totalDays % 30;
    printf("Months = %d\n", months);
    printf("Remaining Days = %d", days);
    return 0;
}
