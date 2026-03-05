#include<stdio.h>
int main(){
    int num,i,j;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d",&num);
    printf("Multiplication Table for %d\n",num);
    
        for(j=1;j<=10;j++){
            printf("%d X %d =%d\n",num,j,num*j);
        }

   
    return 0;
}
