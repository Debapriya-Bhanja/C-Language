// count how many words are in the string.

#include <stdio.h>
int main() {
    char str[100];
    int i, words = 1;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            words++;
    }
    printf("Total words: %d", words);
    return 0;
}
