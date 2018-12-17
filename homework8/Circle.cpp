//
// Ziqi Wang 10.30
//

#include <iostream>
#include "Circles.h"
using namespace std;
void Circle::setCenter()
{
    cout<<"\nPlease enter the center of the circle (x-coordinate and then y-coordinate):";
    cin>>x>>y;
}
void Circle::getCenter()
{
    cout<<"\nLocation of the circle is: "<<"("<<x<<","<<y<<")";
}
void Circle::setRadius()
{
    cout<<"\nPlease enter the radius of the circle: ";
    cin>>radius;
}
void Circle::getArea()//calculate the area and output the information of circle
{
    Area=3.14*radius*radius;
    cout<<"\nArea of the circle with center of ("<<x<<","<<y<<") and radius of "<<radius<<" is: "<<Area;
}
Circle::Circle()//when I use circle, output that I choose circle
{
    cout<<"\nyou have chosen the circle";
    Area=0,radius=0;
}