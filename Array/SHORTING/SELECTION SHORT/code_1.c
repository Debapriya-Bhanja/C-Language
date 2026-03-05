//selection short

#include <stdio.h>
                                      
int main() {
    int arr[100], n, i, j, min, temp;

    
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    
    printf("Enter the numbers: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection sort
    for(i = 0; i < n-1; i++) {
        min = i; // assume current is the smallest
        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j; // found new smallest
            }
        }

        
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    
    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}