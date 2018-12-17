//Ziqi Wang 11.7

#ifndef HOMEWORK9_PACKAGE_H
#define HOMEWORK9_PACKAGE_H

#include <iostream>
#include <string>
using namespace std;
class Package {
public:
    Package();
    //get&set name,address,city,state ,zip code of both sender and recipient.
    const string &getName_sender() const;

    void setName_sender(const string &name_sender);

    const string &getName_recipient() const;

    void setName_recipient(const string &name_recipient);

    const string &getAddress_sender() const;

    void setAddress_sender(const string &address_sender);

    const string &getAddress_recipient() const;

    void setAddress_recipient(const string &address_recipent);

    const string &getCity_sender() const;

    void setCity_sender(const string &city_sender);

    const string &getCity_recipient() const;

    void setCity_recipient(const string &city_recipient);

    const string &getState_sender() const;

    void setState_sender(const string &state_sender);

    const string &getState_recipient() const;

    void setState_recipient(const string &state_recipient);

    const string &getZIP_sender() const;

    void setZIP_sender(const string &ZIP_sender);

    const string &getZIP_recipient() const;

    void setZIP_recipient(const string &ZIP_recipient);
    //get&set weight of packages
    double getWeight() const;

    void setWeight(double weight);
    //polynomial calculate function to get cost of package
    virtual void CalculateCost();

    virtual double getCost();
    //polynomial print function;
    virtual void print();

    virtual ~Package();

protected:
    string name_sender, name_recipient, address_sender, address_recipient, city_sender, city_recipient, state_sender;
    string state_recipient, ZIP_sender, ZIP_recipient;
    double weight, cost_per_ounce, cost;
};
#endif //HOMEWORK9_PACKAGE_H
