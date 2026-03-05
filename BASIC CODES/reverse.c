#include<stdio.h>
int main(){
    int rev=0,temp,r,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    printf("Reverse of %d is %d", temp,rev);
    return 0;
}