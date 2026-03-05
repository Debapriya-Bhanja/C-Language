//write a c program to print all negative elements in an array

#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Negative numbers: ");
    for(i=0;i<n;i++){
        if(arr[i]<0)
        printf("%d ",arr[i]);
    }
    return 0;

}