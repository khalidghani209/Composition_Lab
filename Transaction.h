#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

struct Transaction {
    std::string type;
    double amount;
    std::string timestamp;

    Transaction(std::string t, double amt, std::string ts) 
        : type(t), amount(amt), timestamp(ts) {}
};

#endif
