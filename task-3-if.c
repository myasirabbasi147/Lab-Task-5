#include <stdio.h>
int main() {
    float balance = 50000;
    float deposit_money;
    float withdraw_money;
    int choice;
    printf("1. Check Balance \n");
    printf("2. Deposit Money \n");
    printf("3. Withdraw Money \n");
    printf("4. Exit \n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Your current balance is: %f \n", balance);
    }
    else if (choice == 2) {
        printf("Enter the amount you want to deposit: \n");
        scanf("%f", &deposit_money);
        balance = balance + deposit_money;
        printf("Updated Balance = %f \n", balance);
    }
    else if (choice == 3) {
        printf("Enter the amount you want to withdraw: \n");
        scanf("%f", &withdraw_money);
        if (withdraw_money<=balance) {
            balance = balance - withdraw_money;
            printf("Remaining balance = %f \n", balance);
        }
        else {
            printf("Insufficient balance \n");
        }
    }
    else if (choice == 4) {
        printf("Thank you for using the ATM \n");
    }
    else {
        printf("Invalid Option \n");
    }
    return 0;
}
