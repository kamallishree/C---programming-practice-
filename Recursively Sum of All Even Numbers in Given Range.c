#include<stdio.h>
int sumEven(int start, int end){
    if(start > end)
        return 0;
    if(start % 2 == 0)
        return start + sumEven(start + 1, end);
    else
        return sumEven(start + 1, end);
}
int main(){
    int start, end;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    printf("Sum of even numbers = %d", sumEven(start, end));
    return 0;
}
