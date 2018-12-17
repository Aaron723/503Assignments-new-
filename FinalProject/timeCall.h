//
// Created by Zi Wan on 12/11/18.
//
#include <time.h>
#include <string>
#include <iostream>
using std::string;
#ifndef FINALPROJECT_TIMECALL_H
#define FINALPROJECT_TIMECALL_H
class timeCall{
public:
    timeCall();

    string getDate();

    string getTime();

    string Converter(int);

    virtual ~timeCall();
};
#endif //FINALPROJECT_TIMECALL_H
