// write a program to check whether the supplied year value is lear year or not using if-else.

#include <stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("Leap year");
    } else if (year % 100 == 0) {
        printf("Not leap year");
    } else if (year % 4 == 0) {
        printf("Leap year");
    } else {
        printf("Not leap year");
    }
               
    return 0;
}
