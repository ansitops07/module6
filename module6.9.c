#include <iostream>
#include <string>

class BankAccount {
protected:
    std::string account_number;
    std::string account_type;
    double balance;

public:
    BankAccount(std::string account_number, std::string account_type, double initial_balance)
        : account_number(account_number), account_type(account_type), balance(initial_balance) {}

    double deposit(double amount) {
        balance += amount;
        return balance;
    }

    double withdraw(double amount) {
        if (amount > balance) {
            throw std::runtime_error("Insufficient balance");
        }
        balance -= amount;
        return balance;
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interest_rate;

public:
    SavingsAccount(std::string account_number, double initial_balance, double interest_rate)
        : BankAccount(account_number, "Savings", initial_balance), interest_rate(interest_rate) {}

    double addInterest() {
        double interest = balance * interest_rate / 100;
        deposit(interest);
        return balance;
    }
};

class CurrentAccount : public BankAccount {
public:
    CurrentAccount(std::string account_number, double initial_balance)
        : BankAccount(account_number, "Current", initial_balance) {}
};

int main() {
    SavingsAccount savings_account("SAV123", 1000, 5);
    std::cout << "Savings account balance: " << savings_account.getBalance() << std::endl;
    savings_account.deposit(500);
    std::cout << "Savings account balance after deposit: " << savings_account.getBalance() << std::endl;
    savings_account.addInterest();
    std::cout << "Savings account balance after adding interest: " << savings_account.getBalance() << std::endl;

    CurrentAccount current_account("CUR456", 2000);
    std::cout << "Current account balance: " << current_account.getBalance() << std::endl;
    current_account.withdraw(500);
    std::cout << "Current account balance after withdrawal: " << current_account.getBalance() << std::endl;

    return 0;
}
