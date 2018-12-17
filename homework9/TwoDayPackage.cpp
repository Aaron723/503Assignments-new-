//
//Ziqi Wang 11.7
#include <iostream>
#include <string>
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage()
{
    flat_fee_per_ounce=2.0;
    T_cost=0;
}
void TwoDayPackage::CalculateCost() {
    T_cost=weight*(cost_per_ounce+flat_fee_per_ounce);
}

double TwoDayPackage::getCost() {
    return T_cost;
}

void TwoDayPackage::print() {
    cout<<"Sender:\n"<<getName_sender()<<"\n"<<getAddress_sender()
        <<"\n"<<getCity_sender()<<", "<<getState_sender()<<" "<<getZIP_sender()
        <<"\n"<<endl;
    cout<<"Recipient:\n"<<getName_recipient()<<"\n"<<getAddress_recipient()
        <<"\n"<<getCity_recipient()<<", "<<getState_recipient()<<" "<<getZIP_recipient()
        <<"\n"<<endl;
    cout<<"Weight of package: "<<getWeight()<<" ounces"<<"\n"
        <<"Type of delivery: Two Day Delivery\n"<<"Cost of Package: "
        <<"$"<<getCost()<<"\n"<<endl;
}

TwoDayPackage::~TwoDayPackage() {
    T_cost=0;
    flat_fee_per_ounce=0;
}

