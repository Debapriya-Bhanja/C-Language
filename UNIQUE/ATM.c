#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0;                                     
    float amount;                                                            
 
    
        printf("----- ATM Menu -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");                                                   
        printf("Enter your choice: ");                                                      
        scanf("%d", &choice);

        
        switch (choice) {
            case 1:       
                printf("Your current balance is: $%f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Amount deposited %f successfully.\n",amount);
                    printf("Now total blance is %f",balance);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Please collect your %f$ cash.\n",amount);
                    printf("Now the balance is %f",balance);
                } else {
                    printf("Insufficient balance or invalid amount.\n");
                }
                break;
            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
   

    return 0;
}

