#include<stdio.h>

void table(int m, int n){
    int i;
    for(i = 1; i <= n; i++)
        printf("%d x %d = %d\n", m, i, m*i);
}

int main(){
    int m, n;

    printf("Enter number and limit: ");
    scanf("%d %d", &m, &n);

    table(m, n);

    return 0;
}
