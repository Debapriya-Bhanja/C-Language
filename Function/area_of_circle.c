 //Write a program to calculate the area of a circle using the function.

 #include <stdio.h>
#include <math.h>


float sum(float r) {
    float area;
    area = 3.14 * pow(r, 2);
    return area;
}

int main() {
    float r, area;

    
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    // Calling the function and storing result
    area = sum(r);

    
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}