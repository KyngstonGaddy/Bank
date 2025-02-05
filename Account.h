// Header file for Account.cpp
// Created by Kyngston Gaddy
// 2.4.2025

#ifndef ACCOUNT_H
#define ACCOUNT_H

// class constructor
class Account {
    protected:
        int idNum;
        double balance;

    public:
        Account(int id, double intBal);

        int getID();
        double getBalance();

        double deposit(double amount);

        virtual double withdraw(double amount);

        virtual double monthlyInterest() = 0;

        virtual ~Account() {}
};



#endif //ACCOUNT_H
