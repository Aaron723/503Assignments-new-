//
//Ziqi Wang 10.30
//

#include <iostream>
#include "spheres.h"
using namespace std;
void Sphere::setCenter()
{
    cout<<"\nPlease enter the center of the sphere (x-coordinate ,y-coordinate and then z-coordinate):";
    cin>>x>>y>>z;
}
void Sphere::getCenter()
{
    cout<<"\nCenter of the sphere is: ("<<x<<", "<<y<<", "<<z<<")"
        <<"the radius is "<<radius;
}
void Sphere::setRadius()
{
    cout<<"\nPlease enter the radius of the sphere: ";
    cin>>radius;
}
void Sphere::getVolume()
{
    Volume=3.14*radius*radius*radius*1.33;
    cout<<"\nVolume of the sphere is: "<<Volume;
}
void Sphere::getArea()
{
    Area=4.0*3.14*radius*radius;
    cout<<"\nSurface area of the sphere is: "<<Area;
}
Sphere::Sphere()//when I construct an object, declare it.
{
    cout<<"\nYou have chosen the sphere";
    Area=0,radius=0,Volume=0;
}