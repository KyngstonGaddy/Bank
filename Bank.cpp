// Bank class that stores the bank accounts
// Created by Kyngston Gaddy
// 2.4.2025

// import statements
#include "Bank.h"
#include "Account.h"

// adds a bank account
void Bank::addAccount(Account* account) {
  if(account != NULL) {
    accounts.push_back(account);
  }
}

// posts the monthly interest to all of the accounts
void Bank::postMonthlyInterest() {
  for(Account* account : accounts) {
    if(account != NULL) {
      double interest = account->monthlyInterest();
      account->deposit(interest);
    }
  }
}

// class destructor
Bank::~Bank() {
  for(Account* account : accounts) {
    delete account;
  }
  accounts.clear();
}