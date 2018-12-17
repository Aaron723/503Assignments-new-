//
//Ziqi Wang 10.30
//
#include <iostream>
#include "TwoDimensionalShape.h"
using namespace std;
TwoDimensionalShape::TwoDimensionalShape()
{
    x=0,y=0;
}
void TwoDimensionalShape::setCenter()
{
    cin>>x>>y;
}
void TwoDimensionalShape::getCenter()
{
    cout<<"The center is: "<<"("<<x<<","<<y<<")"<<endl;
}
