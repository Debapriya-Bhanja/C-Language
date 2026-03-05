//write a c program to copy one array to another array

#include<stdio.h>
int main(){
    int arr1[100],arr2[200],n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements of the array: ",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++){
        arr2[i]=arr1[i];  // copy elements from array 1 to array 2
    }
    printf("Enter of the second array are: ",arr2[i]);
    for(i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
