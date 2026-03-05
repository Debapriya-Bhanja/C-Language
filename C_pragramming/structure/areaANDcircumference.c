//Define a structure Circle with radius. Write a program to calculate area and circumference of the circle.

#include <stdio.h>
#define PI 3.14

struct Circle {
    float radius;
};

int main() {
    struct Circle c;

    printf("Enter radius: ");
    scanf("%f", &c.radius);

    float area = PI * c.radius * c.radius;
    float circum = 2 * PI * c.radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circum);

    return 0;
}