#include<stdio.h>
int main(){
   long long fact=1,n,i;
    printf("Enter the number: ");
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
   fact=fact*i;
   }
    printf("The factorial is %lld",fact);
    return 0;
}
