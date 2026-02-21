#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[50][50];
    int i = 0, j = 0, k = 0, count[50] = {0}, total = 0;

    printf("Enter sentence:\n");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i]; i++) {
        if(str[i] != ' ' && str[i] != '\n')
            words[total][j++] = str[i];
        else {
            words[total][j] = '\0';
            total++;
            j = 0;
        }
    }

    for(i = 0; i < total; i++) {
        for(j = i; j < total; j++) {
            if(strcmp(words[i], words[j]) == 0)
                count[i]++;
        }
    }

    int max = 0, index = 0;

    for(i = 0; i < total; i++) {
        if(count[i] > max) {
            max = count[i];
            index = i;
        }
    }

    printf("Most frequent word: %s", words[index]);

    return 0;
}
