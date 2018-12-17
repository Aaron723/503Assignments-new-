//
// Ziqi Wang 10.30
//
#include "TwoDimensionalShape.h"
#ifndef HOMEWORK8_CIRCLES_H
#define HOMEWORK8_CIRCLES_H
class Circle: public TwoDimensionalShape {
public:
    virtual void setCenter();

    virtual void getCenter();

    virtual void getArea();

    void setRadius();

    Circle();

private:
    float radius;
    float Area;
};
#endif //HOMEWORK8_CIRCLES_H
