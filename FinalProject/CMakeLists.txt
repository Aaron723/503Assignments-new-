cmake_minimum_required(VERSION 3.12)
project(FinalProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(FinalProject main.cpp Account.h StockAccount.h BankAccount.h Linkedlist.h Linkedlist.cpp fileReadWrite.h fileReadWrite.cpp Account.cpp BanckAccount.cpp StockAccount.cpp timeCall.h timeCall.cpp)