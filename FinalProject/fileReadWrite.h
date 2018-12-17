//
// Created by Zi Wan on 11/26/18.
//

#include <time.h>
#include <cmath>
#include "Linkedlist.h"
#include <fstream>
#include <iomanip>
#include <ostream>

#define RESULT_1 "/Users/ziwan/CLionProjects/503Assignments/FinalProject/Result_1.txt";
#define RESULT_2 "/Users/ziwan/CLionProjects/503Assignments/FinalProject/Result_2.txt";
#define CASHBALANCE "/Users/ziwan/CLionProjects/503Assignments/FinalProject/bankCashBalance.txt";
#define BANKHISTORY "/Users/ziwan/CLionProjects/503Assignments/FinalProject/bankAccountHistory.txt";
#define TRANACTIONHISTORY "/Users/ziwan/CLionProjects/503Assignments/FinalProject/transactionHistory.txt";
#define PORTFOLIO "/Users/ziwan/CLionProjects/503Assignments/FinalProject/portfolio.txt";
#define TOTALVALUE  "/Users/ziwan/CLionProjects/503Assignments/FinalProject/totalValue.txt";
#ifndef FINALPROJECT_FILEREADWRITE_H
#define FINALPROJECT_FILEREADWRITE_H
class iofile {//class for write and read files
public:
    iofile();

    virtual ~iofile();
    void writeToPortfolio(LinkedList*);
    void writeTofile(char*,double);
    void writeToBankHistory(string, double,double,int);
    void writeToTransactionHistory(string, string, double, int, bool);
    void readFromHistory(char*);
    void writeTototalValue(double,string,string);
    string GetData(string str, string dataType);
    string SearchName(char* fileName, string name);
    char* selectFile();
    string readCashBalance();
    void DrowGraph();
    void inital();// at the beginning of the main, read cash balance, set file format.
private:
};
#endif //FINALPROJECT_FILEREADWRITE_H
