 //No argument with return type

 #include <stdio.h>  

 int sum(){
 int a,b,sum;
 printf("Enter two numbers: "); 
    scanf("%d %d", &a, &b); 
    sum = a + b;
    
    return sum;
}   

int main(){
    int result;
result=sum();
printf("sum is: %d",result);
return 0;    
}
  



