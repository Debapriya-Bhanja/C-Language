 //Write a program to find whether a number is even or odd using the function.

 #include <stdio.h>


void sum(int n) {
    if (n % 2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); 
    sum(n); // Calling the function
    return 0;
}
