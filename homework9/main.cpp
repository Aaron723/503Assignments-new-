//Ziqi Wang 11.7
#include <iostream>
#include <string>
#include <vector>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;
int main() {
    cout<<"Package delivery services program"<<"\n";
    cout<<"\nCost per ounce for a package:  $.50/ounce\n"
          "Additional cost for two-day delivery:  $2.00/ounce\n"
          "Additional cost for overnight delivery: $5.00/ounce"<<"\n";
    vector<Package *> Packages;
    Package Package1;
    TwoDayPackage Package2;
    OvernightPackage Package3;
    double total_cost=0;
    //type in paramteters of package1,2,3.
    string name1_sender="John Smith";
    string name1_receiver="Tom Smith";
    string address1_sender="1 Davidson Road";
    string address1_receiver="2 Davidson Road";
    string city1_sender="Piscataway";
    string city1_receiver="Piscataway";
    string state1="NJ";
    string ZIP1="08854";
    double weight1=10;

    Package1.setName_sender(name1_sender);
    Package1.setName_recipient(name1_receiver);
    Package1.setAddress_sender(address1_sender);
    Package1.setAddress_recipient(address1_receiver);
    Package1.setCity_sender(city1_sender);
    Package1.setCity_recipient(city1_receiver);
    Package1.setState_sender(state1);
    Package1.setState_recipient(state1);
    Package1.setZIP_sender(ZIP1);
    Package1.setZIP_recipient(ZIP1);
    Package1.setWeight(weight1);
    Package1.CalculateCost();

    Packages.push_back(&Package1);


    string name2_sender="Mary Smith";
    string name2_receiver="Jennifer Smith";
    string address2_sender="3 Davidson Road";
    string address2_receiver="4 Davidson Road";
    string city2="Piscataway";
    string state2="NJ";
    string ZIP2="08854";
    double weight2=5;

    Package2.setName_sender(name2_sender);
    Package2.setName_recipient(name2_receiver);
    Package2.setAddress_sender(address2_sender);
    Package2.setAddress_recipient(address2_receiver);
    Package2.setCity_sender(city2);
    Package2.setCity_recipient(city2);
    Package2.setState_sender(state2);
    Package2.setState_recipient(state2);
    Package2.setZIP_sender(ZIP2);
    Package2.setZIP_recipient(ZIP2);
    Package2.setWeight(weight2);
    Package2.CalculateCost();

    Packages.push_back(&Package2);

    string name3_sender="John Smith";
    string name3_receiver="Mary Smith";
    string address3_sender="1 Davidson Road";
    string address3_receiver="3 Davidson Road";
    string city3="Piscataway";
    string state3="NJ";
    string ZIP3="08854";
    double weight3=2;

    Package3.setName_sender(name3_sender);
    Package3.setName_recipient(name3_receiver);
    Package3.setAddress_sender(address3_sender);
    Package3.setAddress_recipient(address3_receiver);
    Package3.setCity_sender(city3);
    Package3.setCity_recipient(city3);
    Package3.setState_sender(state3);
    Package3.setState_recipient(state3);
    Package3.setZIP_sender(ZIP3);
    Package3.setZIP_recipient(ZIP3);
    Package3.setWeight(weight3);
    Package3.CalculateCost();

    Packages.push_back(&Package3);

    for(int i=0;i<Packages.size();i++)
    {
        //Polynomial function using
        cout<<"Package: "<<i+1<<"\n"<<endl;
        Packages[i]->print();
        total_cost+=Packages[i]->getCost();
    }
    cout<<"Total cost of the packages is: $"<<total_cost<<endl;

    return 0;
}