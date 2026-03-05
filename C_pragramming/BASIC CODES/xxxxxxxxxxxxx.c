#include <stdio.h>


float exp_rec(float, int);

int main() {
    float num1;
    int num2;
    float res;

    printf("Enter the two numbers: ");
    scanf("%f%d", &num1, &num2);

    res = exp_rec(num1, num2);
    printf("Result= %d", (int)res); // Casting float to int for %d format
    return 0;
}

float exp_rec(float x, int y) {
    if (y == 0)
        return 1;
    else
        return x * exp_rec(x, y - 1);
}