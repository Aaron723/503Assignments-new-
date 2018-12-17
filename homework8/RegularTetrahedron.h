//
// Ziqi Wang 10.30
//
#include "ThreeDimensionalShape.h"
#ifndef HOMEWORK8_REGULARTETRAHEDRON_H
#define HOMEWORK8_REGULARTETRAHEDRON_H
class RegularTetrahedron: public ThreeDimensionalShape
{
public:
    virtual void setCenter();
    virtual void getCenter();
    virtual void getArea();
    virtual void getVolume();
    virtual void setSideLength();
    RegularTetrahedron();

private:

    float SideLength;
    float Area;
    float Volume;
};
#endif //HOMEWORK8_REGULARTETRAHEDRON_H
