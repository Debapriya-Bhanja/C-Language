//Write a C program to delete an element from a specific position in an array.

#include <stdio.h>
int main() {
    int arr[100], n, pos, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the element: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);
    for(i = pos - 1; i < n - 1; i++) // shift elements to the left from the position
        arr[i] = arr[i + 1];
    n--;                             // reduce the array size

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}