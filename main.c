#include <stdio.h>
#include <stdlib.h>




float balance = 5000.00;
int storedPIN = 5858;


int login() {
    int pin, attempts;

    for (attempts = 1; attempts <= 3; attempts++) {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == storedPIN) {
            printf("Login successful!\n");
            return 1;
        }

        printf("Wrong PIN. Try again.\n");
    }

    printf("Access denied!\n");
    return 0;
}

void checkBalance() {
    printf("Your balance is: Ksh %.2f\n", balance);
}

void deposit(float amount) {
    if (amount > 0) {
        balance = balance + amount;
        printf("Deposit successful!\n");
    } else {
        printf("Invalid amount!\n");
    }
}

void withdraw(float amount) {
    if (amount <= 0) {
        printf("Invalid amount!\n");
    } else if (amount > balance) {
        printf("Insufficient balance!\n");
    } else {
        balance = balance - amount;
        printf("Withdrawal successful!\n");
    }
}


int main() {
    int choice;
    float amount;

    if (!login()) {
        return 0;
    }

    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;

            case 4:
                printf("Thank you for using our ATM!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
