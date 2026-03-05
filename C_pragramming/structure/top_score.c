//Write a program to store the names and marks of n students and find the student with the highest marks using structures.


#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n, i, top = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    
    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf(" %[^\n]", s[i].name);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    // Find highest marks
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[top].marks) {
            top = i;
        }
    }

    
    printf("Topper is %s with %d marks.\n", s[top].name, s[top].marks);

    return 0;
}