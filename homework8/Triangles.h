//
//Ziqi Wang 10.30
//
#include "TwoDimensionalShape.h"
#ifndef HOMEWORK8_TRIANGLES_H
#define HOMEWORK8_TRIANGLES_H
class Triangle: public TwoDimensionalShape
{
public:
    virtual void setCenter();
    virtual void getCenter();
    virtual void getArea();
    virtual void setSideLength();
    Triangle();
private:
    float SideLength;
    float Area;

};
#endif //HOMEWORK8_TRIANGLES_H
