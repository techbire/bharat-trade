#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//main menu
void displayMenu() {
    printf("\n====== Welcome to BharatTrade ======\n");
    printf("1. Add Money\n");
    printf("2. Invest Money\n");
    printf("3. Withdraw Money\n");
    printf("4. View Balance\n");
    printf("5. View Stock Data\n");
    printf("6. Exit\n");
    printf("====================================\n");
}


//add money
void addMoney(double *balance) {
    double amount;
    printf("Enter the amount to add: ");
    scanf("%lf", &amount);
    *balance += amount;
    printf("Amount added successfully!\n");
}

//invest money
void investMoney(double *balance) {
    double amount;
    char stockSymbol[10];

    printf("Enter stock symbol: ");
    scanf("%s", stockSymbol);

    printf("Enter the amount to invest: ");
    scanf("%lf", &amount);

    if (amount <= *balance) {
        *balance -= amount;
        printf("You have invested Rs. %.2lf at %s\n", amount, stockSymbol);
        printf("Amount invested successfully!\n");
    } else {
        printf("Insufficient balance!\n");
    }
}

//withdraw money
void withdrawMoney(double *balance) {
    double amount;
    printf("Enter the amount to withdraw: ");
    scanf("%lf", &amount);
    if (amount <= *balance) {
        *balance -= amount;
        printf("Amount withdrawn successfully!\n");
    } else {
        printf("Insufficient balance!\n");
    }
}

//view account balance
void viewBalance(double balance) {
    printf("Your current balance: %.2f\n", balance);
}

int main() {
    double balance = 10000.00; // Example initial balance

    int choice;
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addMoney(&balance);
                break;
            case 2:
                investMoney(&balance);
                break;
            case 3:
                withdrawMoney(&balance);
                break;
            case 4:
                viewBalance(balance);
                break;
            case 5:
                system("python stock_data.py");
                break;
            case 6:
                printf("Exiting...\nBye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != 6);

    return 0;
}

