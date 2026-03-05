 //With Argument, no return type

 #include<stdio.h>
 void sum(int,int);
 int main(){
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
 }
 void sum(int a,int b){
    int ans;
    ans=a+b;
    printf("sum is: %d",ans);
 }
  
 