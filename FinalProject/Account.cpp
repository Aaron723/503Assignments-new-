//
// Created by Zi Wan on 12/9/18.
//
#include "Account.h"

double Account::getCASH_BALANCE() const {
    return CASH_BALANCE;
}

Account::Account(){
    iofile iofile1;
    CASH_BALANCE=atof((iofile1.readCashBalance()).c_str());
}
Account::~Account() {}
