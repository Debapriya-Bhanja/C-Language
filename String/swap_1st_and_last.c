//swap 1st and last character

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    if(len > 1) {
        temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    printf("After swapping: %s", str);
    return 0;
}