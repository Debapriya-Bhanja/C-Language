 //Write a C program to swap two numbers using call by value

#include <stdio.h>

void swap(int x, int y) {
    int z;
    z = x;
    x = y;
    y = z;

    printf("Inside swap function: x = %d, y = %d\n", x, y);
}

int main() {
    int x, y;

    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    // Calling swap function
    swap(x, y);

    
    printf("After swap function: x = %d, y = %d\n", x, y);

    return 0;
}