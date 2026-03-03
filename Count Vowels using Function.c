#include<stdio.h>

int countVowels(char str[]){
    int i=0, count=0;

    while(str[i]){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||
           str[i]=='o'||str[i]=='u')
            count++;
        i++;
    }

    return count;
}

int main(){
    char str[100];

    printf("Enter string: ");
    scanf("%s",str);

    printf("Vowels = %d", countVowels(str));
}
