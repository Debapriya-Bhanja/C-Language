//Write a C program using a structure to input the date (day, month, year) and display it in DD/MM/YYYY format.

#include <stdio.h>

// Define a structure for date
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date d;

    
    printf("Enter day: ");
    scanf("%d", &d.day);

    printf("Enter month: ");
    scanf("%d", &d.month);

    printf("Enter year: ");
    scanf("%d", &d.year);

    // Display date in DD/MM/YYYY format
    printf("Date: %d/%d/%d\n", d.day, d.month, d.year);

    return 0;
}

