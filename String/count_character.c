// count characters(excluding space)

#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ')
            count++;
    }

    printf("Number of characters: %d", count);
    return 0;
}