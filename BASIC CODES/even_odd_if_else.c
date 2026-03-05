// write a c program to check whether a given number is odd or even using if_else.
 #include<stdio.h>
 int main(){
    int number;
    printf("Enter the value ");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is even",number);
    }
    else{
        printf("%d is odd",number);
    }
    return 0;

 }