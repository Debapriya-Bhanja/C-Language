//Write a program to calculate the sum of any two integers or floating numbers using 4
//different user defined functions:
//a. No argument, No return type
#include <stdio.h>

// Function Declaration
void sumNoArgNoReturn();

int main() {
    sumNoArgNoReturn(); // Function Call
    return 0;
}
                                    
// Function Definition: No argument, No return type
void sumNoArgNoReturn() {
    float num1, num2, sum;
    
    // Input from user
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Calculate sum
    sum = num1 + num2;
   
    // Display result
    printf("Sum = %.2f\n", sum);
}
