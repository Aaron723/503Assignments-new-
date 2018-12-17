//
//Ziqi Wang 11.7
//

#include "OvernightPackage.h"
#include <iostream>

OvernightPackage::OvernightPackage() {
    O_cost=0;
    flat_fee_per_ounce=5.0;
}
void OvernightPackage::CalculateCost() {
    O_cost=weight*(cost_per_ounce+flat_fee_per_ounce);
}

double OvernightPackage::getCost() {
    return O_cost;
}

void OvernightPackage::print() {
    cout<<"Sender:\n"<<getName_sender()<<"\n"<<getAddress_sender()
        <<"\n"<<getCity_sender()<<", "<<getState_sender()<<" "<<getZIP_sender()
        <<"\n"<<endl;
    cout<<"Recipient:\n"<<getName_recipient()<<"\n"<<getAddress_recipient()
        <<"\n"<<getCity_recipient()<<", "<<getState_recipient()<<" "<<getZIP_recipient()
        <<"\n"<<endl;
    cout<<"Weight of package: "<<getWeight()<<" ounces"<<"\n"
        <<"Type of delivery: Overnight Delivery\n"<<"Cost of Package: "
        <<"$"<<getCost()<<"\n"<<endl;
}

OvernightPackage::~OvernightPackage() {
    O_cost=0;
    flat_fee_per_ounce=0;
}
