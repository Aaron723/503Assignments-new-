//
// Ziqi Wang 10.30
//

#include <iostream>
#include "RegularTetrahedron.h"
using namespace std;
void RegularTetrahedron::setCenter()
{
    cout<<"\nPlease enter the center of the regular tetrahedron (x-coordinate ,y-coordinate and then z-coordinate):";
    cin>>x>>y>>z;
}
void RegularTetrahedron::getCenter()
{
    cout<<"\nCenter of the regular tetrahedron is: ("<<x<<", "<<y<<", "<<z<<")"
        <<"edge length of the regular tetrahedron is "<<SideLength;
}
void RegularTetrahedron::setSideLength()
{
    cout<<"\nPlease enter the edge length of the regular tetrahedron: ";
    cin>>SideLength;
}
void RegularTetrahedron::getVolume()
{
    Volume=SideLength*SideLength*SideLength*0.118;
    cout<<"\nVolume of the regular tetrahedron is: "<<Volume;
}
void RegularTetrahedron::getArea()
{
    Area=SideLength*SideLength*1.732;
    cout<<"\nSurface area of the regular tetrahedron is: "<<Area;
}
RegularTetrahedron::RegularTetrahedron()//when I construct a object, output the shape type
{
    cout<<"\nYou have chosen regular tetrahedron";
    Area=0,SideLength=0,Volume=0;
}
