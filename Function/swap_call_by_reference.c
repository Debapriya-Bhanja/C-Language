 // swap useing call by reference.

 #include <stdio.h>

void swap(int *a, int *b) {
    int z;
    z = *a;
    *a = *b;
    *b = z;
}

int main() {
    int x, y;

    // Taking input from the user
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    // Displaying before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Swapping using call by reference
    swap(&x, &y);

    // Displaying after swapping
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}