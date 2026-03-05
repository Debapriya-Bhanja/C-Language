//Write a C program using a structure to read and display the bank accounts (account number, name, and balance). Also, display accounts with balance less than ₹1000.


#include <stdio.h>

struct Bank {
    char name[50];
    int acc_no;
    float balance;
};
                                          
int main() {
    int n,i;

    printf("Enter number of bank acount: ");
    scanf("%d", &n);


    struct Bank customers[n];
    

    for(i = 0; i < n; i++) {
        printf("Enter customer %d details:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", customers[i].name);
        printf("Account Number: ");
        scanf("%d", &customers[i].acc_no);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }
    printf("\n--- Bank Information ---\n");
    for (i = 0; i < n; i++) {
        printf("Acount %d:\n", i + 1);
        printf("Name: %s\n", customers[i].name);
        printf("Account Number: %d\n", customers[i].acc_no);
        printf("Balance: %.2f\n", customers[i].balance);
        printf("\n");
    }

    printf("Customers with balance\n ");
    for(i = 0; i < n; i++) {
        if(customers[i].balance < 1000) {
            printf("Name: %s, Account: %d, Balance: %.2f\n", 
                customers[i].name, customers[i].acc_no, customers[i].balance);
            }
            else printf("Customers bank balance is more than 1000 rs\n");
    }

    return 0;
}

 
