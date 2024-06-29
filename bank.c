#include <stdio.h>

int main() {
    int choice;
    double balance = 1000.0;
    
    do {
        printf("\nMenu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                double depositAmount;
                printf("Enter the amount to deposit: $");
                scanf("%lf", &depositAmount);
                if (depositAmount > 0) {
                    balance += depositAmount;
                    printf("Deposit of $%.2f successful.\n", depositAmount);
                } else {
                    printf("Invalid amount entered.\n");
                }
                break;
                
            case 3:
                double withdrawAmount;
                printf("Enter the amount to withdraw: $");
                scanf("%lf", &withdrawAmount);
                if (withdrawAmount > 0 && withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    printf("Withdrawal of $%.2f successful.\n", withdrawAmount);
                } else if (withdrawAmount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    printf("Invalid amount entered.\n");
                }
                break;
                
            case 4:
                printf("Exiting the program. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
        
    } while (choice != 4);
    
    return 0;
}
