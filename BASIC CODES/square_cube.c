
#include <stdio.h>

int main() {
    int choice, number;
    int result;

    printf("Enter a number: ");                                
    scanf("%d", &number);                                            

    printf("Choose an option:\n");
    printf("1. Square of the number\n");
    printf("2. Cube of the number\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = number * number;
            printf("Square of %d is %d\n", number, result);
            break;
        case 2:
            result = number * number * number;
            printf("Cube of %d is %d\n", number, result);
            break;
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}