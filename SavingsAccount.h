// header file for SavingsAccount
// Created by Kyngston Gaddy
// 2.4.2025

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

// import statements
#include "Account.h"

// derived class constructor
class SavingsAccount : public Account  {
    private:
        double interestRate;

    public:
        SavingsAccount(int idNum, double intBalance, double interest);
        double monthlyInterest();
};

#endif //SAVINGSACCOUNT_H
