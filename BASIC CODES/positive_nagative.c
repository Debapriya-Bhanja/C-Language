//
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    if(num>0){
        printf("The number is positive");
    }
    else if (num<0){
    printf("The number is nagative");
    }
    else {
        printf("The number is zero");
    }
   return 0;


}
