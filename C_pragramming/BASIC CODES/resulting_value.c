 
 #include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    int n;

    
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the expression (1 + 2*x)^n
    result = pow((1 + 2 * x), n);

    
    printf("The result of (1 + 2 * %.2lf)^%d is: %.2lf\n", x, n, result);

    return 0;
}