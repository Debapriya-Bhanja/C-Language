//write a c program to insert an element at a specific position in an array

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right
        for(i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the value
        arr[pos] = value;
        n++; // increase array size

        
        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}