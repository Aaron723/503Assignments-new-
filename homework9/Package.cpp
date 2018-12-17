//
// Ziqi Wang 11.7
//
#include <iostream>
#include "Package.h"
Package::Package()
{
    weight=0;
    cost_per_ounce=0.5;
    cost=0;
    name_sender="\0", name_recipient="\0", address_sender="\0", address_recipient="\0", city_sender="\0";
    city_recipient="\0", state_sender="\0", state_recipient="\0", ZIP_sender="\0", ZIP_recipient="\0";
}

const string &Package::getName_sender() const {
    return name_sender;
}

const string &Package::getName_recipient() const {
    return name_recipient;
}

void Package::setName_recipient(const string &name_recipient) {
    Package::name_recipient = name_recipient;
}

const string &Package::getAddress_sender() const {
    return address_sender;
}

void Package::setAddress_sender(const string &address_sender) {
    Package::address_sender = address_sender;
}

const string &Package::getAddress_recipient() const {
    return address_recipient;
}

void Package::setAddress_recipient(const string &address_recipent) {
    Package::address_recipient = address_recipent;
}

const string &Package::getCity_sender() const {
    return city_sender;
}

void Package::setCity_sender(const string &city_sender) {
    Package::city_sender = city_sender;
}

const string &Package::getCity_recipient() const {
    return city_recipient;
}

void Package::setCity_recipient(const string &city_recipient) {
    Package::city_recipient = city_recipient;
}

const string &Package::getState_sender() const {
    return state_sender;
}

void Package::setState_sender(const string &state_sender) {
    Package::state_sender = state_sender;
}

const string &Package::getState_recipient() const {
    return state_recipient;
}

void Package::setState_recipient(const string &state_recipient) {
    Package::state_recipient = state_recipient;
}

const string &Package::getZIP_sender() const {
    return ZIP_sender;
}

void Package::setZIP_sender(const string &ZIP_sender) {
    Package::ZIP_sender = ZIP_sender;
}

const string &Package::getZIP_recipient() const {
    return ZIP_recipient;
}

void Package::setZIP_recipient(const string &ZIP_recipient) {
    Package::ZIP_recipient = ZIP_recipient;
}

double Package::getWeight() const {
    return weight;
}

void Package::setWeight(double weight) {
    Package::weight = weight;
}

void Package::CalculateCost() {
    cost=weight*cost_per_ounce;
}

double Package::getCost() {
    return cost;
}

void Package::print() {
    cout<<"Sender:\n"<<getName_sender()<<"\n"<<getAddress_sender()
    <<"\n"<<getCity_sender()<<", "<<getState_sender()<<" "<<getZIP_sender()
    <<"\n"<<endl;
    cout<<"Recipient:\n"<<getName_recipient()<<"\n"<<getAddress_recipient()
    <<"\n"<<getCity_recipient()<<", "<<getState_recipient()<<" "<<getZIP_recipient()
    <<"\n"<<endl;
    cout<<"Weight of package: "<<getWeight()<<" ounces"<<"\n"
    <<"Type of delivery: Regular Delivery\n"<<"Cost of Package: "
    <<"$"<<getCost()<<"\n"<<endl;
}

void Package::setName_sender(const string &name_sender) {
    Package::name_sender = name_sender;
}

Package::~Package() {
     name_sender.clear(), name_recipient.clear(), address_sender.clear(), address_recipient.clear();
     city_sender.clear(), city_recipient.clear(), state_sender.clear();
    state_recipient.clear(), ZIP_sender.clear(), ZIP_recipient.clear();
    weight=0,cost=0,cost_per_ounce=0;
}
