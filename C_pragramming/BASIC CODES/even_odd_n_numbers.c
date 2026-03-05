#include <stdio.h>

int main() {
    int N, evenSum = 0, oddSum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", N, evenSum);
    printf("Sum of odd numbers from 1 to %d = %d\n", N, oddSum);

    return 0;
}