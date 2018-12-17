//Ziqi Wang 11.7
#ifndef HOMEWORK9_OVERNIGHTPACKAGE_H
#define HOMEWORK9_OVERNIGHTPACKAGE_H

#include "Package.h"
using namespace std;
class OvernightPackage: public Package {
public:
    virtual void CalculateCost();
    OvernightPackage();

    virtual void print();

    virtual double getCost();

    virtual ~OvernightPackage();

private:
    double flat_fee_per_ounce,O_cost;
};
#endif //HOMEWORK9_OVERNIGHTPACKAGE_H
