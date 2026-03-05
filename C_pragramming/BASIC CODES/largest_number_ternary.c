//
#include<stdio.h>
int main(){
    int num1,num2,largest_number;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    largest_number=(num1>num2) ? num1:num2;
    
    printf("The largest number is: %d",largest_number);
    return 0;
}