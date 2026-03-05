 //Write a C program to find the biggest number of three integers using the function.

 #include <stdio.h>

// Function to find the greatest number
int great(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int x, y, z, n;

    // Take input from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);

    // Call the function and store the result
    n = great(x, y, z);

    // Print the result
    printf("Greatest number is %d.\n", n);

    return 0;
}