// Abstract Account class
// Created by Kyngston Gaddy
// 2.4.2025

// import statements
#include "Account.h"
#include <iostream>

// constructor
Account::Account(int id, double intBal) {
    idNum = id;
    balance = intBal;
}

// getter
int Account::getID() {
    return idNum;
}

// getter
double Account::getBalance() {
    return balance;
}

// returns the balance after depositing money
double Account::deposit(double amount) {
    if (amount >= 0.0) {
        balance += amount;
    }
    else {
        std::cout << "Error. Invalid amount." << std::endl;
    }
    return balance;
}

// returns the balance after withdrawing money
double Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    }
    else {
        std::cout << "Error. Insufficient funds." << std::endl;
    }
    return balance;
}

// monthyInterest override function
double Account::monthlyInterest() {
    return 0.0;
}

