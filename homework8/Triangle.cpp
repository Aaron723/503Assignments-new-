//
//Ziqi Wang 10.30
//

#include <iostream>
#include "Triangles.h"
using namespace std;
void Triangle::setCenter()
{
    cout<<"\nPlease enter the center of the triangle (x-coordinate and then y-coordinate):";
    cin>>x>>y;
}
void Triangle::getCenter()
{
    cout<<"\nLocation of the circle is: "<<"("<<x<<","<<y<<")";
}
void Triangle::setSideLength()
{
    cout<<"\nPlease enter the side length of the triangle: ";
    cin>>SideLength;
}
void Triangle::getArea()
{
    Area=SideLength*SideLength*0.433;
    cout<<"\nArea of the triangle with center of ("<<x<<","<<y<<") and side length of "<<SideLength<<" is: "<<Area;
}
Triangle::Triangle()
{
    cout<<"\nYou have chosen the triangle";
    Area=0,SideLength=0;
}