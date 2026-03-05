#include <stdio.h>
 unsigned long long int fact(int x);
int main() {
     int x;
     printf("Enter a number to find factorial:\n");
     scanf("%d",&x);
     printf("The factorial of %d is %lld",x,fact( x));
     return 0;
      }
    unsigned  long long int fact( int x) {
         if(x>=1) 
              return x*fact(x-1);
              else 
              return 1;
              }