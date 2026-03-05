 // Insertion sort

 #include <stdio.h>

int main() {
    int arr[100], n, i, prev, key; 

    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion sort logic
    for(i = 1; i < n; i++) {  // i = 1st element of unsorted element
        key = arr[i];        // current element to be inserted
        prev = i - 1;

        // Move elements greater than key to one position ahead
        while(prev >= 0 && arr[prev] > key) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = key;     // insert the key
    }

    
    printf("Sorted array in ascending order: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}