//
//Ziqi Wang 10.30
//
#include "shapes.h"
#ifndef HOMEWORK8_TWODIMENSIONALSHAPE_H
#define HOMEWORK8_TWODIMENSIONALSHAPE_H
class TwoDimensionalShape: public shape
{
public:
    virtual void setCenter();
    virtual void getCenter();
    TwoDimensionalShape();
protected:
    float x,y;
};
#endif //HOMEWORK8_TWODIMENSIONALSHAPE_H
