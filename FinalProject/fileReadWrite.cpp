//
// Created by Zi Wan on 11/26/18.
//
#include "fileReadWrite.h"
#include "Linkedlist.h"
#include <sstream>
void iofile::writeTofile(char* fileName,double cashBalance) {
    char* a=CASHBALANCE;
    string balance=to_string(cashBalance);
    if(fileName==a)
    {
        ofstream ofstream1;
        ofstream1.open(fileName);
        if(ofstream1.is_open())
        {
            ofstream1<<setiosflags(ios::fixed)<<setprecision(2);
            ofstream1<<cashBalance<<"\n";
            ofstream1.close();
        }

        else
        {
 //           cout<<"Error: can't open this file, write fail"<<endl;
        }

    }
}
void iofile::writeToBankHistory(string date, double cashBalance, double cash, int flag) {
    ofstream file;
    char*a=BANKHISTORY;
    file.open(a,ios::app);
    if(file.is_open())
    {
        file<<setiosflags(ios::fixed)<<setprecision(2);
        if(flag==1)
        {
            file<<std::left<<setw(20)<<"Deposit"<<std::left<<setw(1)<<"$"<<std::left<<setw(19)<<cash<<std::left<<setw(20)
                <<date<<std::left<<setw(20)<< cashBalance<<"\n";
            file.close();
        }
        else if(flag==2)
        {
            file<<std::left<<setw(20)<<"Withdraw"<<std::left<<setw(1)<<"$"<<std::left<<setw(19)<<cash<<std::left<<setw(20)
                <<date<<std::left<<setw(20)<< cashBalance<<"\n";
            file.close();
        }
        else if(flag==3)
        {
            file<<std::left<<setw(20)<<"Buystock"<<std::left<<setw(1)<<"$"<<std::left<<setw(19)<<cash<<std::left<<setw(20)
                <<date<<std::left<<setw(20)<< cashBalance<<"\n";
            file.close();
        } else if(flag==4)
        {
            file<<std::left<<setw(20)<<"Sellstock"<<std::left<<setw(1)<<"$"<<std::left<<setw(19)<<cash<<std::left<<setw(20)
                <<date<<std::left<<setw(20)<< cashBalance<<"\n";
            file.close();
        }
    }
    else
    {
//        cout<<"Error: can't open bankAccountHistory.txt, write fail"<<endl;
    }


}

void iofile::writeToTransactionHistory(string name,string time, double price, int shares, bool flag) {
    ofstream file;
    char*a=TRANACTIONHISTORY;
    file.open(a,ios::app);

    if(file.is_open())
    {
        file<<setiosflags(ios::fixed)<<setprecision(2);
        double stockValue=price*shares;
        if(flag)
        {
            file << std::left << setw(10) << "Buy" << std::left << setw(20)
            << name << std::left << setw(10) << shares << std::left << setw(1)
            << "$" << std::left << setw(9) << price << std::left << setw(1)
            << "$" << std::left << setw(14) << stockValue << std::left << setw(10)
            << time << "\n";
            file.close();
        }
        else
        {
            file << std::left << setw(10) << "Sell" << std::left << setw(20)
                 << name << std::left << setw(10) << shares << std::left << setw(1)
                 << "$" << std::left << setw(9) << price << std::left << setw(1)
                 << "$" << std::left << setw(14) << stockValue << std::left << setw(10)
                 << time << "\n";
            file.close();
        }

    }
    else
    {
 //       cout<<"Error: cant open transactionHistory.txt,write fail!"<<endl;
    }


}

    string iofile::GetData(string str, string dataType){
    int data=0;
    if(dataType=="name")
        data=1;
    else if(dataType=="price")
        data=2;
    else
    {
 //       cout<<"Wrong datatype!"<<endl;
   //     return"";
    }
    stringstream ss(str);
    string Word;
    int i=0;
    while(i!=data&&getline(ss,Word,'\t'))
    i++;

    return Word;


}

string iofile::SearchName(char *fileName, string name) {
    string str;
    string Word;
    ifstream ifstream1;
    ifstream1.open(fileName,ios_base::in);
    if(ifstream1.is_open())
    {
        while(getline(ifstream1,str))
        {
            if(GetData(str,"name")==name)
            {
                Word=GetData(str,"price");
                ifstream1.close();
                return Word;

            }
        }
        cout<<"This Stock is not in the Results!"<<endl;
        return"";

    }
    else
    {
    //    cout<<"Fail to open the file"<<endl;
        return"";
    }
}
char* iofile::selectFile() {
    srand(time(0));
    int flag=rand()%2;
    string s;
    char *a=RESULT_1;
    char *b=RESULT_2;
    if(flag)
        return a;
    else
        return b;
}
string iofile::readCashBalance() {
    char line[100];
    char *name=CASHBALANCE;
    ifstream readbal(name);
    readbal.getline(line,100);
    string bal=line;
    return bal;
}
void iofile::readFromHistory(char *fileName) {
    ifstream in(fileName);
    char line[100];
    if(!in.is_open())
    {
    //    cout<<"Error: can't read history!"<<endl;
    }

    else
    {
        while(!in.eof())
        {
            in.getline(line,100);
            string str=line;
            cout<<str<<endl;
        }
        in.close();
    }
}

iofile::iofile() {}

iofile::~iofile() {}

void iofile::writeToPortfolio(LinkedList *stockList) {
    if(stockList->getMySize()!=0)
    {
        ofstream file;
        char*a=PORTFOLIO;
        file.open(a);
        Node*currentNode=stockList->getMyHead();
        while(currentNode!=stockList->getMyTail())
        {
            file<<currentNode->getStockName()<<"\t"<<currentNode->getShares()<<"\n";
            currentNode=currentNode->getNext();
        }
        if(currentNode==stockList->getMyTail())
        {
            file<<currentNode->getStockName()<<"\t"<<currentNode->getShares()<<"\n";
        }
        file.close();
      // cout<<"successfully write to portfolio"<<endl;
    }
}

void iofile::inital() {
    ifstream in;
    char*a=CASHBALANCE;
    in.open(a);
    if(!in.is_open())
    {
        ofstream file;
        file.open(a);
        file << setiosflags(ios::fixed) << setprecision(2);
        file << 10000 << "\n";
        file.close();
        char*b=BANKHISTORY;
        file.open(b, ios::app);//set the format of bankhistory
        file << std::left << setw(20) << "Event" << std::left << setw(20) << "Amount" << std::left << setw(20) << "Date"
        << std::left << setw(20) << "Balance" << "\n";
        file.close();
    }
    else
    {
      //  cout<<"cashbalance has been initialized!"<<endl;
        in.close();
    }
    char*c=TRANACTIONHISTORY;
    ifstream historyIn(c);
    if (!historyIn.is_open())
    {
        ofstream file;
        file.open(c);
        file << std::left << setw(10) << "Event" << std::left << setw(20) << "Company Symbol" << std::left << setw(10)
        << "Number" << std::left << setw(10) << "Price" << std::left << setw(15) << "Total value" << std::left
        << setw(10) << "Time" << "\n";
        file.close();
        historyIn.close();
    }
    else
    {
     //   cout<<"transactionHistory.txt has already been initialized!"<<endl;
        historyIn.close();
    }
}

void iofile::writeTototalValue(double totalValue,string time,string date) {
    char*a=TOTALVALUE;
    ofstream file;
    file.open(a,ios::app);
    file<<setiosflags(ios::fixed)<<setprecision(2);
    file<<totalValue<<"\t"<<time<<"\t"<<date<<"\n";
    file.close();
}

void iofile::DrowGraph() {

}





