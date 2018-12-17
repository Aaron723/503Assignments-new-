//
//Ziqi Wang 10.30
//

#include <iostream>
#include "ThreeDimensionalShape.h"
using namespace std;
ThreeDimensionalShape::ThreeDimensionalShape()
{
    x=0,y=0,z=0;
}
void ThreeDimensionalShape::setCenter()
{
    cin>>x>>y>>z;
}
void ThreeDimensionalShape::getCenter()
{
    cout<<"The center is: "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
