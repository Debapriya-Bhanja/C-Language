// Write a program to store and display the details of 5 employees using structures. Each employee has a name, ID, and salary.


#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n]; // VLA = variable length array

    
    printf("Enter details of %d employees: ", n);
    for(i = 0; i < n; i++) {
        printf("Employee %d: ", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
    }

    
    printf("\nEmployee Details:\n");
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}

