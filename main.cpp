// main method for the bank program
// Created by Kyngston Gaddy
// 2.4.2025

// import statements
#include <iomanip>
#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "Bank.h"

// main method
int main() {
    Account* accountPtr = NULL;
    std::cout << std::fixed << std::setprecision(2); //rounds the decimal to the hundredths place

    std::cout << "\n ** Welcome to the KG Bank! **\n" << std::endl;

    Bank bank;

    std::cout << "Loading Savings Account..." << std::endl;
    SavingsAccount* savings = new SavingsAccount(1234, 1000.56, 0.03);
    accountPtr = savings;
    bank.addAccount(savings);
    std::cout << "Loaded. \n" << std::endl;

    std::cout << "Initial balance in Savings Account: $" << accountPtr->getBalance() << std::endl;
    accountPtr->deposit(225.0);
    std::cout << "Balance after a $225.0 deposit: $" << accountPtr->getBalance() << std::endl;
    accountPtr->withdraw(100.0);
    std::cout << "Balance after a $100.0 withdrawal: $" << accountPtr->getBalance() << std::endl;
    std::cout << "Monthly Interest: $" << accountPtr->monthlyInterest() << "\n" << std::endl;

    std::cout << "\nLoading Checking Account..." << std::endl;
    CheckingAccount* checking = new CheckingAccount(5678, 75.0, 25.0, 2.00);
    accountPtr = checking;
    bank.addAccount(checking);
    std::cout << "Loaded. \n" << std::endl;

    std::cout << "Initial balance in Checking Account: $" << accountPtr->getBalance() << std::endl;
    accountPtr->deposit(25.0);
    std::cout << "Balance after $25.0 deposit: $" << accountPtr->getBalance() << std::endl;
    accountPtr->withdraw(50.0);
    std::cout << "After $50.0 withdrawal: $" << accountPtr->getBalance() << std::endl;

    std::cout << "\nCheck withdrawal: $80.0 + $2 check charge" << std::endl;
    checking->checkWithdraw(80.0);
    std::cout << "New Balance: $" << accountPtr->getBalance() << std::endl;

    std::cout << "\nMonthly Interest: $" << accountPtr->monthlyInterest() << std::endl;



    std::cout << "\nAdding the Monthly Interest to All Accounts... \n" << std::endl;
    bank.postMonthlyInterest();

    accountPtr = savings;
    std::cout << "Your final balance for SAVINGS: " << accountPtr->getBalance() << std::endl;
    accountPtr = checking;
    std::cout << "Your final balance for CHECKING: " << accountPtr->getBalance() << std::endl;

    std::cout << "\n ** Thank you for using the KG Bank! ** \n" << std::endl;
    return 0;
}