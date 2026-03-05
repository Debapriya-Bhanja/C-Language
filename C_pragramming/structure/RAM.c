// Create a structure Laptop with model name and RAM (GB). Print “Good RAM” if RAM >= 8.

#include <stdio.h>

struct Laptop {
    char model[50];
    int ram;
};

int main() {
    struct Laptop l;

    printf("Enter laptop model: ");
    gets(l.model);
    printf("Enter RAM size (in GB): ");
    scanf("%d", &l.ram);

    if(l.ram >= 8)
        printf("Good RAM in %s\n", l.model);
    else
        printf("Upgrade RAM needed\n");

    return 0;
}