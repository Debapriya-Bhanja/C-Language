
#include <stdio.h>


struct Student {
    char name[50];
    int roll;
    float marks;
};
                                                                           
int main() {
    int N, i, maxIndex = 0;

    
    printf("Enter number of students: ");
    scanf("%d", &N);

                                                               
    struct Student students[N];
  
    for (i = 0; i < N; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  

        printf("Roll number: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
  
    printf("\n--- All Student Information ---\n");
    for (i = 0; i < N; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Roll Number: %d\n", students[maxIndex].roll);
    printf("Marks: %.2f\n", students[maxIndex].marks);

    return 0;
}
