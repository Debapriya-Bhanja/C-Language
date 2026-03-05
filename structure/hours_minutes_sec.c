//Define a structure called Time with members: hours, minutes, and seconds. Write a program to input two time values and add them.

#include <stdio.h>

// Define the structure
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time t1, t2, sum;

    // Input first time
    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    // Input second time
    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Add seconds
    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes + (sum.seconds / 60);
    sum.seconds %= 60;

    // Add hours
    sum.hours = t1.hours + t2.hours + (sum.minutes / 60);
    sum.minutes %= 60;

    // Display the result
    printf("Sum of time = %02d:%02d:%02d\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}