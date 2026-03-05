//swapping the 2 numbers without using 3rd variable.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping : a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping : a=%d,b=%d\n",a,b);
    return 0;
    

}