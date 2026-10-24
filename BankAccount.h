#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream>
#include <vector>
#include <string>
#include "Transaction.h"

class BankAccount {
protected:
    double balance;
    std::vector<Transaction> transactionHistory; // Composed collection

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}
    virtual ~BankAccount() {}

    virtual void deposit(double amount) {
        balance += amount;
        transactionHistory.push_back(Transaction("Deposit", amount, "Just now"));
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            transactionHistory.push_back(Transaction("Withdrawal", amount, "Just now"));
        } else {
            std::cout << "Insufficient funds!\n";
        }
    }

    void printHistory() const {
        std::cout << "\n--- Transaction History ---\n";
        for (const auto& t : transactionHistory) {
            std::cout << "Type: " << t.type << " | Amount: $" << t.amount << " | Time: " << t.timestamp << "\n";
        }
        std::cout << "Current Balance: $" << balance << "\n---------------------------\n";
    }
};

class CheckingAccount : public BankAccount {
public:
    CheckingAccount(double initialBalance) : BankAccount(initialBalance) {}
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(double initialBalance) : BankAccount(initialBalance) {}
};

#endif
