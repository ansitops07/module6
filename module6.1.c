#include <stdio.h>
#include <string.h>

typedef struct {
    char depositorName[100];
    int accountNumber;
    char accountType[100];
    float balance;
} BankAccount;

void assignValues(BankAccount *account, char *name, int accountNumber, char *accountType, float balance) {
    strcpy(account->depositorName, name);
    account->accountNumber = accountNumber;
    strcpy(account->accountType, accountType);
    account->balance = balance;
}

void depositAmount(BankAccount *account, float amount) {
    account->balance += amount;
    printf("Deposited $%.2f into account %d. New balance: $%.2f\n", amount, account->accountNumber, account->balance);
}

void withdrawAmount(BankAccount *account, float amount) {
    if (account->balance >= amount) {
        account->balance -= amount;
        printf("Withdrew $%.2f from account %d. New balance: $%.2f\n", amount, account->accountNumber, account->balance);
    } else {
        printf("Insufficient balance in account %d.\n", account->accountNumber);
    }
}

void displayAccountInfo(BankAccount *account) {
    printf("Account Holder: %s\n", account->depositorName);
    printf("Account Number: %d\n", account->accountNumber);
    printf("Account Type: %s\n", account->accountType);
    printf("Balance: $%.2f\n", account->balance);
}

int main() {
    BankAccount account;
    assignValues(&account, "sanjay gopani", 12345, "Savings", 1000);
    displayAccountInfo(&account);
    depositAmount(&account, 500);
    withdrawAmount(&account, 2000);
    displayAccountInfo(&account);
    return 0;
}
