 //write a c program to find the maximum and minimum elements of an array

 #include <stdio.h>
int main() {
    int arr[100], n, i, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter element: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Max = %d\nMin = %d", max, min);
    return 0;
}