//write a program to calculate velocity(v) by using v^2 =u^2+2fs.where values of u,f,s are supplyed by the user//

#include<stdio.h>
#include<math.h>
int main(){
    int u,f,s,v;
    printf("Enter the value of u : ");
    scanf("%d",&u);
    printf("Enter the value of f : ");
    scanf("%d",&f);
    printf("Enter the value of s : "); 
    scanf("%d",&s);
    v=sqrt((pow(u,2))+2*f*s);
    printf("The velocity is : %d",v);
    return 0;

} 