#include <stdio.h>
#include <string.h>

int main() {
    char text[200], pattern[50];
    int i, j, found = 0, count = 0;

    printf("Enter DNA sequence:\n");
    scanf("%s", text);

    printf("Enter DNA pattern:\n");
    scanf("%s", pattern);

    int n = strlen(text);
    int m = strlen(pattern);

    printf("Pattern found at positions: ");

    for(i = 0; i <= n - m; i++) {
        for(j = 0; j < m; j++) {
            if(text[i + j] != pattern[j])
                break;
        }

        if(j == m) {
            printf("%d ", i + 1);
            count++;
        }
    }

    printf("\nTotal occurrences: %d", count);

    return 0;
}
