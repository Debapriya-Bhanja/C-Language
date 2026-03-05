#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } else {
        if (units <= 200) {
            bill = units * 7;
        } else {
            bill = units * 10;
        }
    }

    printf("Total Electricity Bill: Rs. %.2f\n", bill);

    return 0;
}


