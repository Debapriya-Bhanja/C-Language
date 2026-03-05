// Write a C program that takes a string input from the user and counts how many digits (0–9) are in that string.

#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);  // Simple input

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }

    printf("Total digits: %d", count);
    return 0;
}