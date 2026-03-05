//write a c program to count even and odd numbers in array

#include<stdio.h>
int main(){
    int arr[100],n,i,even=0,odd=0;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    even++;
    else
    odd++;
    }
    printf("Even: %d\n Odd: %d",even,odd);
    return 0;
}
