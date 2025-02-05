// Savings Account class
// Created by Kyngston Gaddy
// 2.4.2025

// import statements
#include "SavingsAccount.h"
#include "Account.h"

// constructor
SavingsAccount::SavingsAccount(int id, double intBalance, double interest): Account(id, intBalance) {
    interestRate = interest;
}

// returns the monthly interest
double SavingsAccount::monthlyInterest() {
    return balance * (interestRate / 12);
}

