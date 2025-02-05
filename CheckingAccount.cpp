// CheckingAccount class
// Created by Kyngston Gaddy
// 2.4.2025

// import statemnts
#include "CheckingAccount.h"

#include <iostream>

#include "Account.h"

// constructor
CheckingAccount::CheckingAccount(int id, double nbalance, double minBalance, double charge) : Account(id, nbalance) {
  minBal = minBalance;
  checkCharge = charge;
}

// returns the monthly interest
double CheckingAccount::monthlyInterest() {
  if(balance < minBal) {
    return 0.0;
  }
  else {
    return 0.01/12 * balance;
  }
}

// determines if the checkCharge could be used, if not, then nothing will be withdrawn
double CheckingAccount::checkWithdraw(double amount) {
  if ((balance >= (amount + checkCharge)) && (balance > minBal)) {
    Account::withdraw(amount);
    Account::withdraw(checkCharge);
  } else {
    std::cout << "Error: Insufficient funds for withdrawal and check charge." << std::endl;
  }
  return balance;
}




