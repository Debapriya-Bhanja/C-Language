/*write a program to calculate the resultent value of (3x+2y)^n,
where x,y,n are supplyed by the user.*/

#include<stdio.h>
#include<math.h>
int main(){
    int x,y,n,resultent_value;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    printf("Enter the value of n : ");
    scanf("%d",&n);
    resultent_value=pow(3*x+2*y,n);


    printf("The resultent value is : %d",resultent_value);
    return 0;
}
