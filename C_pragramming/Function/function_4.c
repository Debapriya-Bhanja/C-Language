 //With argument with return type

 #include<stdio.h>
 int sum(int,int);
 int main(){
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    a=sum(a,b);
    printf("sum is:%d",a);
    return 0;
 }
 int sum(int a,int b){
    int ans;
    ans=a+b;
    //printf("sum:%d",ans);
    return ans;
 }
