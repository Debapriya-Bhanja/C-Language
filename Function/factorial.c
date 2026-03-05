//Write a program to implement recursive functions:
//a. Find the factorial of a number

#include <stdio.h>


long long int factorial(long long int n) {
    if (n <= 1)//base case:factorial of 0 or 1 is 1
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    long long int number, result;

    
    printf("Enter a positive integer: ");
    scanf("%lld", &number);

    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(number);
        printf("The factorial of %lld is %lld\n", number, result);
    }

    return 0;
}
