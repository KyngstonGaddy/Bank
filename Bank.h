// header file for the bank class
// Created by Kyngston Gaddy
// 2.4.2025

#ifndef BANK_H
#define BANK_H

// import statements
#include <vector>
#include "Account.h"

// class constructor
class Bank {
    private:
      std::vector<Account*> accounts;
    public:
      Bank() = default;
      void addAccount(Account* acc);
      void postMonthlyInterest();
      ~Bank();
};

#endif //BANK_H
