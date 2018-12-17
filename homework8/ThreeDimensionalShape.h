//
//Ziqi Wang 10.30
//
#include "shapes.h"
#ifndef HOMEWORK8_THREEDIMENSIONALSHAPE_H
#define HOMEWORK8_THREEDIMENSIONALSHAPE_H
class ThreeDimensionalShape: public shape
{
public:
    virtual void setCenter();
    virtual void getCenter();
    ThreeDimensionalShape();
protected:
    float x,y,z;
};
#endif //HOMEWORK8_THREEDIMENSIONALSHAPE_H
