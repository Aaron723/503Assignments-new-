//
//Ziqi Wang 10.30
//
#include "ThreeDimensionalShape.h"
#ifndef HOMEWORK8_SPHERES_H
#define HOMEWORK8_SPHERES_H
class Sphere: public ThreeDimensionalShape
{
public:
    virtual void setCenter();
    virtual void getCenter();
    virtual void getArea();
    virtual void getVolume();
    void setRadius();
    Sphere();
private:

    float radius;
    float Area;
    float Volume;
};
#endif //HOMEWORK8_SPHERES_H
