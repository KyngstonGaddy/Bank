cmake_minimum_required(VERSION 3.10)
project(Lab01_02)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lab01_02
        main.cpp
        Account.cpp
        Account.h
        Bank.cpp
        Bank.h
        CheckingAccount.cpp
        CheckingAccount.h
        SavingsAccount.cpp
        SavingsAccount.h)