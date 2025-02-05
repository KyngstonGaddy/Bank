// header file for CheckingAccount
// Created by Kyngston Gaddy
// 2.4.2025

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

// import statements
#include "Account.h"

// derived class constructor
class CheckingAccount : public Account {
  private:
    double minBal;
    double checkCharge;
  public:
    CheckingAccount(int id, double nbalance, double minBalance, double charge);
    double monthlyInterest();
    double checkWithdraw(double amount);
};

#endif //CHECKINGACCOUNT_H
