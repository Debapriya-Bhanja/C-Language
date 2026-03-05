//Write a C program to check whether a number is Armstrong or not using a while loop.
#include<stdio.h>
int main(){
    int sum=0,temp,r,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n%10;
    }if(temp==sum){
        printf("%d is armstrong",temp);
        
    }else{printf("%d is not armstrong",temp);
    }
return 0;
}
    
