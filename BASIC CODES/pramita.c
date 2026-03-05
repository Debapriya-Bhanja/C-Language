 // No argument with return type (using float)

#include <stdio.h>

float sum() {
    float a, b, sum;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    sum = a + b;

    return sum;
}

int main() {
    float result;
    result = sum();
    printf("Sum is: %.2f", result); // displays result up to 2 decimal places
    return 0;
}