#include <iostream>
#include "BankAccount.h"

int main() {
    CheckingAccount myChecking(500.0);
    myChecking.deposit(150.0);
    myChecking.withdraw(50.0);
    myChecking.printHistory();

    SavingsAccount mySavings(1000.0);
    mySavings.deposit(300.0);
    mySavings.withdraw(200.0);
    mySavings.printHistory();

    return 0;
}
