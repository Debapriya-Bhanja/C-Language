#include<stdio.h>
#include<math.h>
int main(){
    float num1,num2,result;
    char oparators;
    printf ("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
    printf("Enter an operator(+,-,*,/): ");
    scanf( " %c",&oparators);
    switch(oparators){ 
        case '+':
        result=num1+num2;
        printf("Result %f",result);
        break;
        case '-':
        result=num1-num2;
        printf("Result %f",result);
        break;
        case '*':
        result=num1*num2;
        printf("Result %f",result);
        break;
        case '/':
        result=num1/num2;
        printf("Result %f",result);
        break;
        default:
        printf("Error");
        
    }
    return 0;
}