/*write a program to calculate the area of circle
FORMULA = 3.14*r^2 */
 #include<stdio.h>
 int main(){
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    printf("The area of the circle is : %f",3.14* radius * radius);
    return 0;
 }