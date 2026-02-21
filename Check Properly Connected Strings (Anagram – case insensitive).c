#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s1[100], s2[100];
    int count1[26] = {0}, count2[26] = {0}, i;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if(strlen(s1) != strlen(s2)) {
        printf("The strings are not properly connected.");
        return 0;
    }

    for(i = 0; s1[i]; i++) {
        count1[tolower(s1[i]) - 'a']++;
        count2[tolower(s2[i]) - 'a']++;
    }

    for(i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            printf("The strings are not properly connected.");
            return 0;
        }
    }

    printf("The strings are properly connected.");

    return 0;
}
