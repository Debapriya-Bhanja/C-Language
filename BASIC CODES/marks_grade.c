#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    switch (marks / 10) {                         //Marks        marks/10           Grade
        case 10:                                 // 90 - 100     9 or 10             A
        case 9:                                  // 80 - 89        8                 B
            printf("Grade: A\n");               //  70 - 79        7                 C                                                                                    
            break;                              //  60 - 69        6                 D 
        case 8:                                 //  0 - 59       0 - 5               F
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
    }

    return 0;
}