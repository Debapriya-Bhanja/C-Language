
#include<stdio.h>
int main(){
    int rev=0,temp,r,n;
    printf("enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;

    }
    if(temp=rev)
    { printf("The number is palindrom");
    }else{printf("The number is not palindrom");
    }
    return 0;
}