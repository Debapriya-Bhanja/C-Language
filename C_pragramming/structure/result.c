//"Write a C program to store and display information of multiple students using structures."

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int N, i;

    printf("Enter number of students: ");
    scanf("%d", &N);

    // Declare array of structures
    struct Student students[N];

    for (i = 0; i < N; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", &students[i].name);  

        printf("Roll number: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Information ---\n");
    for (i = 0; i < N; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}

