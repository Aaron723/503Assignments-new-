//Ziqi Wang 11.7

#ifndef HOMEWORK9_TWODAYPACKAGE_H
#define HOMEWORK9_TWODAYPACKAGE_H

#include "Package.h"
using namespace std;
class TwoDayPackage: public Package {
public:
    TwoDayPackage();
    virtual void CalculateCost();

    virtual double getCost();

    virtual void print();

    virtual ~TwoDayPackage();

private:
    double flat_fee_per_ounce,T_cost;
};
#endif //HOMEWORK9_TWODAYPACKAGE_H
