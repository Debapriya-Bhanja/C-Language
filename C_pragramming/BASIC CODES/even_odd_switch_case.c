//write a c program to check whether a given number is odd or even using switch case. .

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    switch(n%2)
    {
        case 0:
        printf("%d is even",n);
        break;
        case 1:
        printf("%d is odd",n);
        break;
        default:
        printf("no");
        break;
    }
    return 0;

}